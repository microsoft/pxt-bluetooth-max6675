// tests go here; this will not be compiled when this package is used as a library
bluetooth.startTemperatureSensorService(1000, () => {
    bluetooth.setTemperatureSensorValue(500);
})