/**
 * \file
 * \brief FreeRTOS for Teensy 4.0
 */
#ifndef FreeRTOS_TEENSY4_h
#define FreeRTOS_TEENSY4_h

#ifndef __arm__
#error Teensy 4.0 required
#else  // __arm__

#include <Arduino.h>

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
#include "portmacro.h"

#endif  // __arm__
#endif  // FreeRTOS_TEENSY4_h