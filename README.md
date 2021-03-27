## About this fork

### ESP8266 compatibility
This version has been modified to work on the esp8266 and related boards using
the [ESP8266_RTOS_SDK](https://github.com/espressif/ESP8266_RTOS_SDK), NOT the esp-idf.

### Modified behavior
An new menu entry has been included in the Kconfig file, in order to allow the
user to specify, wether to let the ros library set up the wifi, or to set it up
manually in the project using a custom callback function.

The socket callback function has been expanded in order to allow for automatic
reconnection in case of failure to establish a link or the connection being closed remotely.
Should handle errors without crashing as much and cleans old socket files
before creating new ones.


Below the original docs from [sachin0x18](https://github.com/sachin0x18).

## rosserial_esp32

This package is based on [rosserial](http://wiki.ros.org/rosserial) to enable communication between ROS and ESP32 using ESP-IDF.

Supports rosserial communication over **UART** and **WiFi**

### Generate ROS libraries
Follow the steps below in order to generate and include ROS libraries
(This will create a component in IDF_PATH and need to generate it only once)

```
$ cd path/to/catkin_ws/src/
$ git clone https:/www.github.com/ludwigthemad/rosserial_esp32.git
$ rosrun rosserial_esp32 make_libraries.py $IDF_PATH/components/
```

After execution of above commands, all the necessary ROS files would have been generated in `$IDF_PATH/components/rosserial_esp32/`

### Examples
* [chatter](src/examples/chatter)
* [echo](src/examples/echo)
