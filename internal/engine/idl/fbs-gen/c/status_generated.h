// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_STATUS_VEARCH_STATUS_H_
#define FLATBUFFERS_GENERATED_STATUS_VEARCH_STATUS_H_

#include "flatbuffers/flatbuffers.h"

namespace vearch {
namespace status {

enum Code {
  kOk = 0,
  kNotFound = 1,
  kIndexError = 2,
  kNotSupported = 3,
  kInvalidArgument = 4,
  kIOError = 5,
  kBusy = 6,
  kTimedOut = 7,
  kMaxCode = 8
};

inline const Code (&EnumValuesCode())[9] {
  static const Code values[] = {
    kOk,
    kNotFound,
    kIndexError,
    kNotSupported,
    kInvalidArgument,
    kIOError,
    kBusy,
    kTimedOut,
    kMaxCode
  };
  return values;
}

inline const char * const *EnumNamesCode() {
  static const char * const names[] = {
    "kOk",
    "kNotFound",
    "kIndexError",
    "kNotSupported",
    "kInvalidArgument",
    "kIOError",
    "kBusy",
    "kTimedOut",
    "kMaxCode",
    nullptr
  };
  return names;
}

inline const char *EnumNameCode(Code e) {
  if (e < kOk || e > kMaxCode) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesCode()[index];
}

}  // namespace status
}  // namespace vearch

#endif  // FLATBUFFERS_GENERATED_STATUS_VEARCH_STATUS_H_