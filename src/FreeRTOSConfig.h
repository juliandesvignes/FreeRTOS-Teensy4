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

#if ( ( configGENERATE_RUN_TIME_STATS == 1 ) && ( configUSE_STATS_FORMATTING_FUNCTIONS == 0 ) )
    #error If configGENERATE_RUN_TIME_STATS is 1, then configUSE_STATS_FORMATTING_FUNCTIONS should not be zero
#endif

#if configGENERATE_RUN_TIME_STATS == 1
extern volatile uint64_t ulTimerCounter;
extern void vPortSetupRuntimeTimer();
#define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS() vPortSetupRuntimeTimer()
#define portGET_RUN_TIME_COUNTER_VALUE() ulTimerCounter 
#endif

#endif // SELECT_FREERTOS_CONFIG_H