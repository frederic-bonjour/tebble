#ifndef _Core_H_
#define _Core_H_

#include <Arduino.h>


class Settings {
    public:
        static String BridgeHost;
        static uint8_t BridgePort;

        static String WifiSSID;
        static String WifiPassword;

        static String MQTTBroker;
        static uint16_t MQTTPort;
        static String MQTTUsername;
        static String MQTTPassword;
};

#endif