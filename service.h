#ifndef BLUETOOTH_MAX6675_TEMPERATURE_SERVICE_H
#define BLUETOOTH_MAX6675_TEMPERATURE_SERVICE_H

#include "MicroBitConfig.h"
#include "ble/BLE.h"
#include "MicroBitThermometer.h"
#include "EventModel.h"

#define MICROBIT_ID_MAX6675 9500

// UUIDs for our service and characteristics
extern const uint8_t  Max6675TemperatureServiceUUID[];
extern const uint8_t  Max6675TemperatureServiceDataUUID[];
extern const uint8_t  Max6675TemperatureServicePeriodUUID[];

/**
  * Class definition for the custom MicroBit Temperature Service.
  * Provides a BLE service to remotely read the silicon temperature of the nRF51822.
  */
class Max6675TemperatureService
{
    public:

    /**
      * Constructor.
      * Create a representation of the TemperatureService
      * @param _ble The instance of a BLE device that we're running on.
      */
    Max6675TemperatureService(BLEDevice &_ble);

    /**
      * Callback. Invoked when any of our attributes are written via BLE.
      */
    void onDataWritten(const GattWriteCallbackParams *params);

    /**
     * Temperature update callback
     */
    void temperatureUpdate(MicroBitEvent e);

    private:

    // Bluetooth stack we're running on.
    BLEDevice           	&ble;

    // memory for our 8 bit temperature characteristic.
    int8_t             temperatureDataCharacteristicBuffer;
    uint16_t           temperaturePeriodCharacteristicBuffer;

    // Handles to access each characteristic when they are held by Soft Device.
    GattAttribute::Handle_t temperatureDataCharacteristicHandle;
    GattAttribute::Handle_t temperaturePeriodCharacteristicHandle;
};


#endif
