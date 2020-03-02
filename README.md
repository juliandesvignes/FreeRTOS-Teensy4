# Teensy 4.0 FreeRTOS Library for Teensyduino

This is a port of FreeRTOS 10.0 for the Teensy 4.0 running teensyduino

This is based on https://github.com/greiman/FreeRTOS-Arduino for the error handling.

The Arduino systick-ing is kept running after starting the scheduler, so `delay`, `millis` and `micro` work in tasks.
*For better performance, use `vTaskDelay` instead of `delay`*

The documentation for FreeRTOS is located here:
http://www.freertos.org/

## FreeRTOS configuration

The default configuration is in `FreeRTOSConfig_Default.h`.

You can specify your own by having an include file named `Teensy4FreeRTOSConfig.h`,
or you can add/replace to the default one by having an include file named `Teensy4FreeRTOSConfig_addition.h`.

### Run-time stats

Activating run-time stats (`configGENERATE_RUN_TIME_STATS`) configures Timer3, this will affect the PWM on pins 6, 7, 8 and 9. Please avoid using them when using run-time stats as it might cause conflict.

If you still want to use them as PWM, please look at [this library](https://github.com/PaulStoffregen/TimerThree) and mimick its actions for configuring the PWM without touching the timer.

### For PlatformIO users

The way PlatformIO works makes it impossible to load a configuration header in a system-level library.
If you installed this library using the library manager, your config files will not be read as PlatformIO isolates the library from your project files when building it.

To alleviate this problem, you can clone this repository in the `lib` folder of your project and add the config files in your `include` folder.
PlatformIO will blindly search for includes in `../../include/` as per project configuration.

When the PlatformIO team implements a way to add per-project configuration files, I will update this method.

## How-to

Please read FreeRTOS.html for more information.

See FreeRTOS_API.html for API documentation.
