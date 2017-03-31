#include "MicroBitEvent.h"
#include "extension.h"
#include "service.h"

using namespace pxt;
namespace bluetooth {
    Max6675TemperatureService* service = NULL;
    int _max6675Period = 500;
    int _max6675Temperature = 0;

    /**
    *
    */
    //%
    bool internalStartMax6675Service() {
        if (NULL == service) {
            service = new Max6675TemperatureService(*uBit.ble);
            return true;
        } else return false;
    }

    void max6675SetPeriod(int period) {
        _max6675Period = period;
    }

    /**
    *
    */
    //%
    int max6675Period() {
        return _max6675Period;
    }

    /**
    *
    */
    //%
    void max6675SetTemperature(int temperature) {
        _max6675Temperature = temperature;
        MicroBitEvent ev(MICROBIT_ID_MAX6675, MICROBIT_THERMOMETER_EVT_UPDATE);
    }

    int max6675Temperature() {
        return _max6675Temperature;
    }
}
