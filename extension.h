#ifndef BLUETOOTH_MAX6675_EXTENSION_H
#define BLUETOOTH_MAX6675_EXTENSION_H

#include "pxt.h"

namespace bluetooth {
    bool internalStartMax6675Service();
    void max6675SetPeriod(int period);
    int max6675Period();
    void max6675SetTemperature(int temperature);
    int max6675Temperature();
}

#endif