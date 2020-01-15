# Teensy 4.0 FreeRTOS Library for Teensyduino

This is a port of FreeRTOS 10.0 for the Teensy 4.0 running teensyduino

This is based on https://github.com/greiman/FreeRTOS-Arduino for the error handling.

The Arduino systick-ing is kept running after starting the scheduler, so millis() and micro() work in tasks.

The documentation for FreeRTOS is located here:
http://www.freertos.org/

## PLEASE READ

*Due to a recent bug with unaligned memory access (see [issue#2](https://github.com/discord-intech/FreeRTOS-Teensy4/issues/2)), you need to compile with `-DTEENSY_OPT_DEBUG` or `-DTEENSY_OPT_SMALLEST_CODE` (has `-O2 optimizations`).*

*If you are using Arduino IDE, simply select `Smallest Code` in `Tools -> Optimize`.*

*If you are using PlatformIO, add `build_flags = -DTEENSY_OPT_SMALLEST_CODE` under `[env]` in your `platformio.ini`*

*This will be fixed in a future version.*

## FreeRTOS configuration

The default configuration is in `FreeRTOSConfig_Default.h`.

You can specify your own by having an include file named `Teensy4FreeRTOSConfig.h`,
or you can add/replace to the default one by having an include file named `Teensy4FreeRTOSConfig_addition.h`.

### For PlatformIO users

The way PlatformIO works makes it impossible to load a configuration header in a system-level library.
If you installed this library using the library manager, your config files will not be read as PlatformIO isolates the library from your project files when building it.

To alleviate this problem, you can clone this repository in the `lib` folder of your project and add the config files in your `include` folder.
PlatformIO will blindly search for includes in `../../include/` as per project configuration.

When the PlatformIO team implements a way to add per-project configuration files, I will update this method.

## How-to

Please read FreeRTOS.html for more information.

See FreeRTOS_API.html for API documentation.
