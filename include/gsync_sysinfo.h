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
  NV_GSYNC_CONTROL_PARAMS control_params;
  NV_GSYNC_STATUS_PARAMS status_params;
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