#include <nvapi.h>

class GSyncSysInfo {};

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
      printf(
          "No GSync Devices found on this system (rest of this application "
          "requires this)\n");
    }
    return -1;
  }

  return 0;
}
