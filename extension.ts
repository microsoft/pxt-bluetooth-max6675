namespace bluetooth {
    /**
     * Starts a Bluetooth temperature service listening
     * to a MAX6675 on the given pin. Should only be called once
     */
    //% block
    export function startMax6675Service(pin: DigitalPin) {
        if (bluetooth.internalStartMax6675Service()) {
            control.inBackground(() => {
                while (true) {
                    bluetooth.max6675SetTemperature(input.max6675Temperature(pin));
                    basic.pause(bluetooth.max6675Period())
                }
            })
        }    
    }
}
