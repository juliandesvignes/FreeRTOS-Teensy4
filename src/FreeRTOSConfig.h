#ifndef SELECT_FREERTOS_CONFIG_H
#define SELECT_FREERTOS_CONFIG_H

#if __has_include("Teensy4FreeRTOSConfig.h")
#include "Teensy4FreeRTOSConfig.h"
#else
#if __has_include("Teensy4FreeRTOSConfig_addition.h")
#include "Teensy4FreeRTOSConfig_addition.h"
#endif
#include "FreeRTOSConfig_default.h"
#endif

#endif // SELECT_FREERTOS_CONFIG_H