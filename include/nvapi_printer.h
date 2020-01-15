#pragma once
#include <nvapi.h>

namespace toolkit {

void print_NvAPI_Status(NvAPI_Status status);

const char* NvAPI_Status_to_cstr(_NvAPI_Status status);

}  // namespace toolkit