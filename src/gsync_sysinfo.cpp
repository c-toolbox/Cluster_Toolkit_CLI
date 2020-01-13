#include <gsync_sysinfo.h>

namespace toolkit {

static const char* g_connector[] = {"NONE", "PRIMARY", "SECONDARY", "TERTIARY",
                                    "QUARTERNARY"};
static const char* g_dispSyncState[] = {"UNSYNCED", "SLAVE", "MASTER"};
static const char* g_RJ45Status[] = {"OUTPUT", "INPUT", "UNUSED"};
static const char* g_RJ45Ethernet[] = {"NO", "YES"};

GSyncSysInfo::GSyncSysInfo() {}

// Here goes info printing. Should this be printable to file?
void GSyncSysInfo::print() const {
  printf("Polarity                 : %d\n", (NvU32)control_params.polarity);
  printf("Video Mode               : %d\n", (NvU32)control_params.vmode);
  printf("Sync Interval            : %d\n", control_params.interval);
  printf("Source                   : %d\n", (NvU32)control_params.source);
}

void GSyncSysInfo::query_control_params(NvGSyncDeviceHandle device_handle) {
  NvAPI_Status ret;

  control_params.version = NV_GSYNC_CONTROL_PARAMS_VER;
  ret = NvAPI_GSync_GetControlParameters(device_handle, &control_params);
  if (ret != NVAPI_OK) {
    printf("Error getting gsync control params\n");
    exit(1);
  }
}

GSyncSysInfoBuilder::GSyncSysInfoBuilder() {}

GSyncSysInfoBuilder& GSyncSysInfoBuilder::with_gsync_device_handle(
    NvGSyncDeviceHandle device_handle) {
  return *this;
}

GSyncSysInfo GSyncSysInfoBuilder::build() {
  GSyncSysInfo ret_val;
  std::swap(ret_val, info);
  return ret_val;
}

}  // namespace toolkit