#include "serial.h"

#ifdef _WIN32
#include "serial_windows.c"
#else
#include "serial_linux.c"
#endif
