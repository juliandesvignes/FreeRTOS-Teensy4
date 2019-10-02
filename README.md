# Teensy 4.0 FreeRTOS Library for Teensyduino

This is a port of FreeRTOS 10.0 for the Teensy 4.0 running teensyduino

This is based on https://github.com/greiman/FreeRTOS-Arduino for the error handling.

The Arduino systick-ing is kept running after starting the scheduler, so millis() and micro() work in tasks.

The documentation for FreeRTOS is located here:
http://www.freertos.org/

## FreeRTOS configuration

The default configuration is in `FreeRTOSConfig_Default.h`.

You can specify your own by having an include file named `Teensy4FreeRTOSConfig.h`,
or you can add to the default one by having an include file named `Teensy4FreeRTOSConfig_addition.h`.

## How-to

Please read FreeRTOS.html for more information.

See FreeRTOS_API.html for API documentation.
