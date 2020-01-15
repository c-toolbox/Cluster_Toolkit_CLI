#include <gsync_sysinfo.h>
#include <nvapi_printer.h>

namespace toolkit {

static const char* g_connector[] = {"NONE", "PRIMARY", "SECONDARY", "TERTIARY",
                                    "QUARTERNARY"};
static const char* g_dispSyncState[] = {"UNSYNCED", "SLAVE", "MASTER"};
static const char* g_RJ45Status[] = {"OUTPUT", "INPUT", "UNUSED"};
static const char* g_RJ45Ethernet[] = {"NO", "YES"};

GSyncSysInfo::GSyncSysInfo() {}

// Here goes info printing. Should this be printable to file?
void GSyncSysInfo::print() const {
  printf("=========SYSTEM_INFO=========\n");
  printf("Num GPUs                 : %d\n", num_gsync_gpus);
  printf("Num Displays             : %d\n", num_displays);
  for (int i = 0; i < gsync_gpus.size(); ++i) {
    printf("==========SYNC_INFO==========\n");
    printf("Gpu Handle               : 0x%x\n",
           (NvU32)gsync_gpus[i].hPhysicalGpu);
    printf("Is Synced                : %d\n", sync_status_params[i].bIsSynced);
    printf("Is StereoSynced          : %d\n",
           sync_status_params[i].bIsStereoSynced);
    printf("Is Sync Signal avail     : %d\n",
           sync_status_params[i].bIsSyncSignalAvailable);
  }
  printf("=======CONTROL_PARAMS========\n");
  printf("Polarity                 : %d\n", (NvU32)control_params.polarity);
  printf("Video Mode               : %d\n", (NvU32)control_params.vmode);
  printf("Sync Interval            : %d\n", control_params.interval);
  printf("Source                   : %d\n", (NvU32)control_params.source);
  printf("========STATUS_PARAMS========\n");
  printf("RefreshRate              : %d\n", (NvU32)status_params.refreshRate);
  printf("House Sync present       : %d\n", (NvU32)status_params.bHouseSync);
  printf("RJ45[0]                  : %s\n",
         g_RJ45Status[(NvU32)status_params.RJ45_IO[0]]);
  printf("RJ45[1]                  : %s\n",
         g_RJ45Status[(NvU32)status_params.RJ45_IO[1]]);
  printf("RJ45[0] to ethernet?     : %s\n",
         g_RJ45Ethernet[(NvU32)status_params.RJ45_Ethernet[0]]);
  printf("RJ45[1] to ethernet?     : %s\n",
         g_RJ45Ethernet[(NvU32)status_params.RJ45_Ethernet[1]]);
}

void GSyncSysInfo::query_control_params(NvGSyncDeviceHandle device_handle) {
  NvAPI_Status ret;

  control_params.version = NV_GSYNC_CONTROL_PARAMS_VER;
  ret = NvAPI_GSync_GetControlParameters(device_handle, &control_params);
  if (ret != NVAPI_OK) {
    print_NvAPI_Status(ret);
    printf("Error getting gsync control params\n");
    exit(1);
  }
}

void GSyncSysInfo::query_status_params(NvGSyncDeviceHandle device_handle) {
  NvAPI_Status ret;

  status_params.version = NV_GSYNC_STATUS_PARAMS_VER;
  ret = NvAPI_GSync_GetStatusParameters(device_handle, &status_params);
  if (ret != NVAPI_OK) {
    print_NvAPI_Status(ret);
    printf("Error getting gsync status params\n");
    exit(1);
  }
}

void GSyncSysInfo::query_sync_status(NvGSyncDeviceHandle device_handle) {
  NvAPI_Status ret;

  // Retrieve amount of gsync gpus & displays:
  ret = NvAPI_GSync_GetTopology(device_handle, &num_gsync_gpus, nullptr,
                                &num_displays, nullptr);
  if (ret != NVAPI_OK) {
    print_NvAPI_Status(ret);
    printf("Error getting number of gsync gpus and displays\n");
    // TODO: Revise exit conditions, this might not be a critical failure.
    // Consider using error return values / exceptions
    exit(1);
  }

  // Retrieve gsync_gpu data
  gsync_gpus.resize(num_gsync_gpus);
  ret = NvAPI_GSync_GetTopology(device_handle, &num_gsync_gpus,
                                gsync_gpus.data(), nullptr, nullptr);
  if (ret != NVAPI_OK) {
    print_NvAPI_Status(ret);
    printf("Error getting gsync gpu pointers\n");
    // TODO: Revise exit conditions, this might not be a critical failure.
    // Consider using error return values / exceptions
    exit(1);
  }

  for (const auto& gsync_gpu : gsync_gpus) {
    NV_GSYNC_STATUS status = {0};
    status.version = NV_GSYNC_STATUS_VER;
    ret = NvAPI_GSync_GetSyncStatus(device_handle, gsync_gpu.hPhysicalGpu,
                                    &status);
    if (ret != NVAPI_OK) {
      print_NvAPI_Status(ret);
      printf("Error querying gsync sync status on GPU handle 0x%x\n",
             (NvU32)gsync_gpu.hPhysicalGpu);
    }
    sync_status_params.push_back(status);
  }
}

GSyncSysInfoBuilder::GSyncSysInfoBuilder() {}

GSyncSysInfoBuilder& GSyncSysInfoBuilder::with_gsync_device_handle(
    NvGSyncDeviceHandle device_handle) {
  info.query_control_params(device_handle);
  info.query_status_params(device_handle);
  info.query_sync_status(device_handle);

  return *this;
}

GSyncSysInfo GSyncSysInfoBuilder::build() {
  GSyncSysInfo ret_val;
  std::swap(ret_val, info);
  return ret_val;
}

}  // namespace toolkit