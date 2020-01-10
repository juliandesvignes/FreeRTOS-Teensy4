/**
 * \file
 * \brief FreeRTOS for Teensy 4.0
 */
#ifndef FreeRTOS_TEENSY4_h
#define FreeRTOS_TEENSY4_h

#ifndef __arm__
#error Teensy 4.0 required
#else  // __arm__

#if defined(TEENSY_OPT_FASTER) || defined(TEENSY_OPT_FAST) || defined(TEENSY_OPT_FASTEST) || defined(TEENSY_OPT_FASTER_LTO) || defined(TEENSY_OPT_FAST_LTO) || defined(TEENSY_OPT_FASTEST_LTO) || (!defined(TEENSY_OPT_SMALLEST_CODE) && !defined(TEENSY_OPT_DEBUG))
#error Due to a bug with unaligned memory access, please compile your firmware with -DTEENSY_OPT_SMALLEST_CODE (has TEENSY_OPT_FASTER optimizations) or -DTEENSY_OPT_DEBUG . PLEASE CHECK THE README ! This will be fixed in a future version.
#endif

#include <Arduino.h>

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
#include "portmacro.h"

#endif  // __arm__
#endif  // FreeRTOS_TEENSY4_h