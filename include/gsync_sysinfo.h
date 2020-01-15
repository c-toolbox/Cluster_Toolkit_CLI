#pragma once

#include <nvapi.h>
namespace toolkit {

class GSyncSysInfo {
  friend class GSyncSysInfoBuilder;

 public:
  void print() const;

 protected:
  GSyncSysInfo();

  void query_control_params(NvGSyncDeviceHandle device_handle);
  void query_status_params(NvGSyncDeviceHandle device_handle);
  void query_sync_status(NvGSyncDeviceHandle device_handle);
  NvU32 num_gsync_gpus = 0;
  NvU32 num_displays = 0;

  std::vector<NV_GSYNC_GPU> gsync_gpus;
  // sync_status_param is per gsync gpu
  std::vector<NV_GSYNC_STATUS> sync_status_params;

  NV_GSYNC_CONTROL_PARAMS control_params = {0};
  NV_GSYNC_STATUS_PARAMS status_params = {0};
};

class GSyncSysInfoBuilder {
 public:
  GSyncSysInfoBuilder();
  GSyncSysInfoBuilder& with_gsync_device_handle(
      NvGSyncDeviceHandle device_handle);
  GSyncSysInfo build();

 private:
  GSyncSysInfo info;
};
}  // namespace toolkit