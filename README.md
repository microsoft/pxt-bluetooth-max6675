# bluetooth temperature sensor service

A generic Bluetooth service to expose the temperature read from a sensor

## Usage

This package allows to create a Bluetooth temperature sensor and provide the data from
any custom sensor attached to the @boardname@. In fact, it can be used to stream any data!

```blocks
bluetooth.startTemperatureSensorService(() => {
    bluetooth.setTemperatureSensorValue(input.lightLevel());
})
```

## Usage

Simply call ``startMax6675Service`` with the pin where the MAX6675 is connected
to start a service that beams the temperature every second.

```blocks
bluetooth.startMax6675Service(DigitalPin.P0);
```

## License

MIT

## Supported targets

* for PXT/microbit
(The metadata above is needed for package search.)

```package
bluetooth
bluetooth-temperature-sensor
<<<<<<< HEAD
bluetooth-max6675
=======
>>>>>>> d0d14e99c42494ae123b7f6590fb7444559ad37c
```