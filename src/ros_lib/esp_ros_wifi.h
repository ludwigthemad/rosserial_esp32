#pragma once

#ifdef CONFIG_LET_ROS_INIT_WIFI

void esp_ros_wifi_init();

#endif

void ros_tcp_connect(const char* host_ip, int port_num);

void ros_tcp_send(uint8_t* data, int length);

int ros_tcp_read(uint8_t* buf, int length);
