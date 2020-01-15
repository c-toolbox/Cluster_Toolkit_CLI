#include <nvapi_printer.h>

namespace toolkit {

void print_NvAPI_Status(NvAPI_Status status) {
  printf("NvAPI ERROR: ");
  printf(NvAPI_Status_to_cstr(status));
  printf("\n");
}

const char* NvAPI_Status_to_cstr(_NvAPI_Status status) {
  switch (status) {
    case NVAPI_OK:
      return "NVAPI_OK";
      break;
    case NVAPI_ERROR:
      return "NVAPI_ERROR";
      break;
    case NVAPI_LIBRARY_NOT_FOUND:
      return "NVAPI_LIBRARY_NOT_FOUND";
      break;
    case NVAPI_NO_IMPLEMENTATION:
      return "NVAPI_NO_IMPLEMENTATION";
      break;
    case NVAPI_API_NOT_INITIALIZED:
      return "NVAPI_API_NOT_INITIALIZED";
      break;
    case NVAPI_INVALID_ARGUMENT:
      return "NVAPI_INVALID_ARGUMENT";
      break;
    case NVAPI_NVIDIA_DEVICE_NOT_FOUND:
      return "NVAPI_NVIDIA_DEVICE_NOT_FOUND";
      break;
    case NVAPI_END_ENUMERATION:
      return "NVAPI_END_ENUMERATION";
      break;
    case NVAPI_INVALID_HANDLE:
      return "NVAPI_INVALID_HANDLE";
      break;
    case NVAPI_INCOMPATIBLE_STRUCT_VERSION:
      return "NVAPI_INCOMPATIBLE_STRUCT_VERSION";
      break;
    case NVAPI_HANDLE_INVALIDATED:
      return "NVAPI_HANDLE_INVALIDATED";
      break;
    case NVAPI_OPENGL_CONTEXT_NOT_CURRENT:
      return "NVAPI_OPENGL_CONTEXT_NOT_CURRENT";
      break;
    case NVAPI_INVALID_POINTER:
      return "NVAPI_INVALID_POINTER";
      break;
    case NVAPI_NO_GL_EXPERT:
      return "NVAPI_NO_GL_EXPERT";
      break;
    case NVAPI_INSTRUMENTATION_DISABLED:
      return "NVAPI_INSTRUMENTATION_DISABLED";
      break;
    case NVAPI_NO_GL_NSIGHT:
      return "NVAPI_NO_GL_NSIGHT";
      break;
    case NVAPI_EXPECTED_LOGICAL_GPU_HANDLE:
      return "NVAPI_EXPECTED_LOGICAL_GPU_HANDLE";
      break;
    case NVAPI_EXPECTED_PHYSICAL_GPU_HANDLE:
      return "NVAPI_EXPECTED_PHYSICAL_GPU_HANDLE";
      break;
    case NVAPI_EXPECTED_DISPLAY_HANDLE:
      return "NVAPI_EXPECTED_DISPLAY_HANDLE";
      break;
    case NVAPI_INVALID_COMBINATION:
      return "NVAPI_INVALID_COMBINATION";
      break;
    case NVAPI_NOT_SUPPORTED:
      return "NVAPI_NOT_SUPPORTED";
      break;
    case NVAPI_PORTID_NOT_FOUND:
      return "NVAPI_PORTID_NOT_FOUND";
      break;
    case NVAPI_EXPECTED_UNATTACHED_DISPLAY_HANDLE:
      return "NVAPI_EXPECTED_UNATTACHED_DISPLAY_HANDLE";
      break;
    case NVAPI_INVALID_PERF_LEVEL:
      return "NVAPI_INVALID_PERF_LEVEL";
      break;
    case NVAPI_DEVICE_BUSY:
      return "NVAPI_DEVICE_BUSY";
      break;
    case NVAPI_NV_PERSIST_FILE_NOT_FOUND:
      return "NVAPI_NV_PERSIST_FILE_NOT_FOUND";
      break;
    case NVAPI_PERSIST_DATA_NOT_FOUND:
      return "NVAPI_PERSIST_DATA_NOT_FOUND";
      break;
    case NVAPI_EXPECTED_TV_DISPLAY:
      return "NVAPI_EXPECTED_TV_DISPLAY";
      break;
    case NVAPI_EXPECTED_TV_DISPLAY_ON_DCONNECTOR:
      return "NVAPI_EXPECTED_TV_DISPLAY_ON_DCONNECTOR";
      break;
    case NVAPI_NO_ACTIVE_SLI_TOPOLOGY:
      return "NVAPI_NO_ACTIVE_SLI_TOPOLOGY";
      break;
    case NVAPI_SLI_RENDERING_MODE_NOTALLOWED:
      return "NVAPI_SLI_RENDERING_MODE_NOTALLOWED";
      break;
    case NVAPI_EXPECTED_DIGITAL_FLAT_PANEL:
      return "NVAPI_EXPECTED_DIGITAL_FLAT_PANEL";
      break;
    case NVAPI_ARGUMENT_EXCEED_MAX_SIZE:
      return "NVAPI_ARGUMENT_EXCEED_MAX_SIZE";
      break;
    case NVAPI_DEVICE_SWITCHING_NOT_ALLOWED:
      return "NVAPI_DEVICE_SWITCHING_NOT_ALLOWED";
      break;
    case NVAPI_TESTING_CLOCKS_NOT_SUPPORTED:
      return "NVAPI_TESTING_CLOCKS_NOT_SUPPORTED";
      break;
    case NVAPI_UNKNOWN_UNDERSCAN_CONFIG:
      return "NVAPI_UNKNOWN_UNDERSCAN_CONFIG";
      break;
    case NVAPI_TIMEOUT_RECONFIGURING_GPU_TOPO:
      return "NVAPI_TIMEOUT_RECONFIGURING_GPU_TOPO";
      break;
    case NVAPI_DATA_NOT_FOUND:
      return "NVAPI_DATA_NOT_FOUND";
      break;
    case NVAPI_EXPECTED_ANALOG_DISPLAY:
      return "NVAPI_EXPECTED_ANALOG_DISPLAY";
      break;
    case NVAPI_NO_VIDLINK:
      return "NVAPI_NO_VIDLINK";
      break;
    case NVAPI_REQUIRES_REBOOT:
      return "NVAPI_REQUIRES_REBOOT";
      break;
    case NVAPI_INVALID_HYBRID_MODE:
      return "NVAPI_INVALID_HYBRID_MODE";
      break;
    case NVAPI_MIXED_TARGET_TYPES:
      return "NVAPI_MIXED_TARGET_TYPES";
      break;
    case NVAPI_SYSWOW64_NOT_SUPPORTED:
      return "NVAPI_SYSWOW64_NOT_SUPPORTED";
      break;
    case NVAPI_IMPLICIT_SET_GPU_TOPOLOGY_CHANGE_NOT_ALLOWED:
      return "NVAPI_IMPLICIT_SET_GPU_TOPOLOGY_CHANGE_NOT_ALLOWED";
      break;
    case NVAPI_REQUEST_USER_TO_CLOSE_NON_MIGRATABLE_APPS:
      return "NVAPI_REQUEST_USER_TO_CLOSE_NON_MIGRATABLE_APPS";
      break;
    case NVAPI_OUT_OF_MEMORY:
      return "NVAPI_OUT_OF_MEMORY";
      break;
    case NVAPI_WAS_STILL_DRAWING:
      return "NVAPI_WAS_STILL_DRAWING";
      break;
    case NVAPI_FILE_NOT_FOUND:
      return "NVAPI_FILE_NOT_FOUND";
      break;
    case NVAPI_TOO_MANY_UNIQUE_STATE_OBJECTS:
      return "NVAPI_TOO_MANY_UNIQUE_STATE_OBJECTS";
      break;
    case NVAPI_INVALID_CALL:
      return "NVAPI_INVALID_CALL";
      break;
    case NVAPI_D3D10_1_LIBRARY_NOT_FOUND:
      return "NVAPI_D3D10_1_LIBRARY_NOT_FOUND";
      break;
    case NVAPI_FUNCTION_NOT_FOUND:
      return "NVAPI_FUNCTION_NOT_FOUND";
      break;
    case NVAPI_INVALID_USER_PRIVILEGE:
      return "NVAPI_INVALID_USER_PRIVILEGE";
      break;
    case NVAPI_EXPECTED_NON_PRIMARY_DISPLAY_HANDLE:
      return "NVAPI_EXPECTED_NON_PRIMARY_DISPLAY_HANDLE";
      break;
    case NVAPI_EXPECTED_COMPUTE_GPU_HANDLE:
      return "NVAPI_EXPECTED_COMPUTE_GPU_HANDLE";
      break;
    case NVAPI_STEREO_NOT_INITIALIZED:
      return "NVAPI_STEREO_NOT_INITIALIZED";
      break;
    case NVAPI_STEREO_REGISTRY_ACCESS_FAILED:
      return "NVAPI_STEREO_REGISTRY_ACCESS_FAILED";
      break;
    case NVAPI_STEREO_REGISTRY_PROFILE_TYPE_NOT_SUPPORTED:
      return "NVAPI_STEREO_REGISTRY_PROFILE_TYPE_NOT_SUPPORTED";
      break;
    case NVAPI_STEREO_REGISTRY_VALUE_NOT_SUPPORTED:
      return "NVAPI_STEREO_REGISTRY_VALUE_NOT_SUPPORTED";
      break;
    case NVAPI_STEREO_NOT_ENABLED:
      return "NVAPI_STEREO_NOT_ENABLED";
      break;
    case NVAPI_STEREO_NOT_TURNED_ON:
      return "NVAPI_STEREO_NOT_TURNED_ON";
      break;
    case NVAPI_STEREO_INVALID_DEVICE_INTERFACE:
      return "NVAPI_STEREO_INVALID_DEVICE_INTERFACE";
      break;
    case NVAPI_STEREO_PARAMETER_OUT_OF_RANGE:
      return "NVAPI_STEREO_PARAMETER_OUT_OF_RANGE";
      break;
    case NVAPI_STEREO_FRUSTUM_ADJUST_MODE_NOT_SUPPORTED:
      return "NVAPI_STEREO_FRUSTUM_ADJUST_MODE_NOT_SUPPORTED";
      break;
    case NVAPI_TOPO_NOT_POSSIBLE:
      return "NVAPI_TOPO_NOT_POSSIBLE";
      break;
    case NVAPI_MODE_CHANGE_FAILED:
      return "NVAPI_MODE_CHANGE_FAILED";
      break;
    case NVAPI_D3D11_LIBRARY_NOT_FOUND:
      return "NVAPI_D3D11_LIBRARY_NOT_FOUND";
      break;
    case NVAPI_INVALID_ADDRESS:
      return "NVAPI_INVALID_ADDRESS";
      break;
    case NVAPI_STRING_TOO_SMALL:
      return "NVAPI_STRING_TOO_SMALL";
      break;
    case NVAPI_MATCHING_DEVICE_NOT_FOUND:
      return "NVAPI_MATCHING_DEVICE_NOT_FOUND";
      break;
    case NVAPI_DRIVER_RUNNING:
      return "NVAPI_DRIVER_RUNNING";
      break;
    case NVAPI_DRIVER_NOTRUNNING:
      return "NVAPI_DRIVER_NOTRUNNING";
      break;
    case NVAPI_ERROR_DRIVER_RELOAD_REQUIRED:
      return "NVAPI_ERROR_DRIVER_RELOAD_REQUIRED";
      break;
    case NVAPI_SET_NOT_ALLOWED:
      return "NVAPI_SET_NOT_ALLOWED";
      break;
    case NVAPI_ADVANCED_DISPLAY_TOPOLOGY_REQUIRED:
      return "NVAPI_ADVANCED_DISPLAY_TOPOLOGY_REQUIRED";
      break;
    case NVAPI_SETTING_NOT_FOUND:
      return "NVAPI_SETTING_NOT_FOUND";
      break;
    case NVAPI_SETTING_SIZE_TOO_LARGE:
      return "NVAPI_SETTING_SIZE_TOO_LARGE";
      break;
    case NVAPI_TOO_MANY_SETTINGS_IN_PROFILE:
      return "NVAPI_TOO_MANY_SETTINGS_IN_PROFILE";
      break;
    case NVAPI_PROFILE_NOT_FOUND:
      return "NVAPI_PROFILE_NOT_FOUND";
      break;
    case NVAPI_PROFILE_NAME_IN_USE:
      return "NVAPI_PROFILE_NAME_IN_USE";
      break;
    case NVAPI_PROFILE_NAME_EMPTY:
      return "NVAPI_PROFILE_NAME_EMPTY";
      break;
    case NVAPI_EXECUTABLE_NOT_FOUND:
      return "NVAPI_EXECUTABLE_NOT_FOUND";
      break;
    case NVAPI_EXECUTABLE_ALREADY_IN_USE:
      return "NVAPI_EXECUTABLE_ALREADY_IN_USE";
      break;
    case NVAPI_DATATYPE_MISMATCH:
      return "NVAPI_DATATYPE_MISMATCH";
      break;
    case NVAPI_PROFILE_REMOVED:
      return "NVAPI_PROFILE_REMOVED";
      break;
    case NVAPI_UNREGISTERED_RESOURCE:
      return "NVAPI_UNREGISTERED_RESOURCE";
      break;
    case NVAPI_ID_OUT_OF_RANGE:
      return "NVAPI_ID_OUT_OF_RANGE";
      break;
    case NVAPI_DISPLAYCONFIG_VALIDATION_FAILED:
      return "NVAPI_DISPLAYCONFIG_VALIDATION_FAILED";
      break;
    case NVAPI_DPMST_CHANGED:
      return "NVAPI_DPMST_CHANGED";
      break;
    case NVAPI_INSUFFICIENT_BUFFER:
      return "NVAPI_INSUFFICIENT_BUFFER";
      break;
    case NVAPI_ACCESS_DENIED:
      return "NVAPI_ACCESS_DENIED";
      break;
    case NVAPI_MOSAIC_NOT_ACTIVE:
      return "NVAPI_MOSAIC_NOT_ACTIVE";
      break;
    case NVAPI_SHARE_RESOURCE_RELOCATED:
      return "NVAPI_SHARE_RESOURCE_RELOCATED";
      break;
    case NVAPI_REQUEST_USER_TO_DISABLE_DWM:
      return "NVAPI_REQUEST_USER_TO_DISABLE_DWM";
      break;
    case NVAPI_D3D_DEVICE_LOST:
      return "NVAPI_D3D_DEVICE_LOST";
      break;
    case NVAPI_INVALID_CONFIGURATION:
      return "NVAPI_INVALID_CONFIGURATION";
      break;
    case NVAPI_STEREO_HANDSHAKE_NOT_DONE:
      return "NVAPI_STEREO_HANDSHAKE_NOT_DONE";
      break;
    case NVAPI_EXECUTABLE_PATH_IS_AMBIGUOUS:
      return "NVAPI_EXECUTABLE_PATH_IS_AMBIGUOUS";
      break;
    case NVAPI_DEFAULT_STEREO_PROFILE_IS_NOT_DEFINED:
      return "NVAPI_DEFAULT_STEREO_PROFILE_IS_NOT_DEFINED";
      break;
    case NVAPI_DEFAULT_STEREO_PROFILE_DOES_NOT_EXIST:
      return "NVAPI_DEFAULT_STEREO_PROFILE_DOES_NOT_EXIST";
      break;
    case NVAPI_CLUSTER_ALREADY_EXISTS:
      return "NVAPI_CLUSTER_ALREADY_EXISTS";
      break;
    case NVAPI_DPMST_DISPLAY_ID_EXPECTED:
      return "NVAPI_DPMST_DISPLAY_ID_EXPECTED";
      break;
    case NVAPI_INVALID_DISPLAY_ID:
      return "NVAPI_INVALID_DISPLAY_ID";
      break;
    case NVAPI_STREAM_IS_OUT_OF_SYNC:
      return "NVAPI_STREAM_IS_OUT_OF_SYNC";
      break;
    case NVAPI_INCOMPATIBLE_AUDIO_DRIVER:
      return "NVAPI_INCOMPATIBLE_AUDIO_DRIVER";
      break;
    case NVAPI_VALUE_ALREADY_SET:
      return "NVAPI_VALUE_ALREADY_SET";
      break;
    case NVAPI_TIMEOUT:
      return "NVAPI_TIMEOUT";
      break;
    case NVAPI_GPU_WORKSTATION_FEATURE_INCOMPLETE:
      return "NVAPI_GPU_WORKSTATION_FEATURE_INCOMPLETE";
      break;
    case NVAPI_STEREO_INIT_ACTIVATION_NOT_DONE:
      return "NVAPI_STEREO_INIT_ACTIVATION_NOT_DONE";
      break;
    case NVAPI_SYNC_NOT_ACTIVE:
      return "NVAPI_SYNC_NOT_ACTIVE";
      break;
    case NVAPI_SYNC_MASTER_NOT_FOUND:
      return "NVAPI_SYNC_MASTER_NOT_FOUND";
      break;
    case NVAPI_INVALID_SYNC_TOPOLOGY:
      return "NVAPI_INVALID_SYNC_TOPOLOGY";
      break;
    case NVAPI_ECID_SIGN_ALGO_UNSUPPORTED:
      return "NVAPI_ECID_SIGN_ALGO_UNSUPPORTED";
      break;
    case NVAPI_ECID_KEY_VERIFICATION_FAILED:
      return "NVAPI_ECID_KEY_VERIFICATION_FAILED";
      break;
    case NVAPI_FIRMWARE_OUT_OF_DATE:
      return "NVAPI_FIRMWARE_OUT_OF_DATE";
      break;
    case NVAPI_FIRMWARE_REVISION_NOT_SUPPORTED:
      return "NVAPI_FIRMWARE_REVISION_NOT_SUPPORTED";
      break;
    case NVAPI_LICENSE_CALLER_AUTHENTICATION_FAILED:
      return "NVAPI_LICENSE_CALLER_AUTHENTICATION_FAILED";
      break;
    case NVAPI_D3D_DEVICE_NOT_REGISTERED:
      return "NVAPI_D3D_DEVICE_NOT_REGISTERED";
      break;
    case NVAPI_RESOURCE_NOT_ACQUIRED:
      return "NVAPI_RESOURCE_NOT_ACQUIRED";
      break;
    case NVAPI_TIMING_NOT_SUPPORTED:
      return "NVAPI_TIMING_NOT_SUPPORTED";
      break;
    case NVAPI_HDCP_ENCRYPTION_FAILED:
      return "NVAPI_HDCP_ENCRYPTION_FAILED";
      break;
    case NVAPI_PCLK_LIMITATION_FAILED:
      return "NVAPI_PCLK_LIMITATION_FAILED";
      break;
    case NVAPI_NO_CONNECTOR_FOUND:
      return "NVAPI_NO_CONNECTOR_FOUND";
      break;
    case NVAPI_HDCP_DISABLED:
      return "NVAPI_HDCP_DISABLED";
      break;
    case NVAPI_API_IN_USE:
      return "NVAPI_API_IN_USE";
      break;
    case NVAPI_NVIDIA_DISPLAY_NOT_FOUND:
      return "NVAPI_NVIDIA_DISPLAY_NOT_FOUND";
      break;
    case NVAPI_PRIV_SEC_VIOLATION:
      return "NVAPI_PRIV_SEC_VIOLATION";
      break;
    case NVAPI_INCORRECT_VENDOR:
      return "NVAPI_INCORRECT_VENDOR";
      break;
    case NVAPI_DISPLAY_IN_USE:
      return "NVAPI_DISPLAY_IN_USE";
      break;
    case NVAPI_UNSUPPORTED_CONFIG_NON_HDCP_HMD:
      return "NVAPI_UNSUPPORTED_CONFIG_NON_HDCP_HMD";
      break;
    case NVAPI_MAX_DISPLAY_LIMIT_REACHED:
      return "NVAPI_MAX_DISPLAY_LIMIT_REACHED";
      break;
    case NVAPI_INVALID_DIRECT_MODE_DISPLAY:
      return "NVAPI_INVALID_DIRECT_MODE_DISPLAY";
      break;
    case NVAPI_GPU_IN_DEBUG_MODE:
      return "NVAPI_GPU_IN_DEBUG_MODE";
      break;
    case NVAPI_D3D_CONTEXT_NOT_FOUND:
      return "NVAPI_D3D_CONTEXT_NOT_FOUND";
      break;
    case NVAPI_STEREO_VERSION_MISMATCH:
      return "NVAPI_STEREO_VERSION_MISMATCH";
      break;
    case NVAPI_GPU_NOT_POWERED:
      return "NVAPI_GPU_NOT_POWERED";
      break;
    case NVAPI_ERROR_DRIVER_RELOAD_IN_PROGRESS:
      return "NVAPI_ERROR_DRIVER_RELOAD_IN_PROGRESS";
      break;
    case NVAPI_WAIT_FOR_HW_RESOURCE:
      return "NVAPI_WAIT_FOR_HW_RESOURCE";
      break;
    case NVAPI_REQUIRE_FURTHER_HDCP_ACTION:
      return "NVAPI_REQUIRE_FURTHER_HDCP_ACTION";
      break;
    case NVAPI_DISPLAY_MUX_TRANSITION_FAILED:
      return "NVAPI_DISPLAY_MUX_TRANSITION_FAILED";
      break;
    default:
      return "NVAPI_INVALID_ENUM";
      break;
  }
}

}  // namespace toolkit