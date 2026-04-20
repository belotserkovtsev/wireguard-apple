// Stub for missing Go cgo symbols when building for iOS simulator.
// See: https://github.com/golang/go/issues/63203

#include <stdint.h>

void darwin_arm_init_thread_exception_port() {}
void darwin_arm_init_mach_exception_handler() {}
