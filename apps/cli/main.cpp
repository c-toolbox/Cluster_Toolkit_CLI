#include <gsync_sysinfo.h>
#include <nvapi.h>
#include <nvapi_printer.h>

int main(int argc, char** argv) {
  NvAPI_Status ret = NVAPI_OK;
  ret = NvAPI_Initialize();
  if (ret != NVAPI_OK) {
    printf("NvAPI_Initialize() failed = 0x%x", ret);
    return 1;
  }

  ret = NVAPI_OK;
  NvGSyncDeviceHandle nvGSyncHandles[NVAPI_MAX_GSYNC_DEVICES];
  NvU32 gsyncCount = 0;
  ret = NvAPI_GSync_EnumSyncDevices(nvGSyncHandles, &gsyncCount);
  if (ret != NVAPI_OK) {
    if (ret == NVAPI_NVIDIA_DEVICE_NOT_FOUND) {
      toolkit::print_NvAPI_Status(ret);
      printf(
          "No GSync Devices found on this system (rest of this application "
          "requires this)\n");
      printf("\n");

    } else {
      toolkit::print_NvAPI_Status(ret);
    }
    return -1;
  }

  toolkit::GSyncSysInfoBuilder builder;
  std::vector<toolkit::GSyncSysInfo> sysInfos;
  for (NvU32 i = 0; i < gsyncCount; ++i) {
    sysInfos.push_back(
        builder.with_gsync_device_handle(nvGSyncHandles[i]).build());
  }
  for (const auto& sysInfo : sysInfos) {
    sysInfo.print();
  }

  return 0;
}
