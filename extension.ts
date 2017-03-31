namespace bluetooth {
    //% block
    export function startMax6675Service() {
        if (bluetooth.internalStartMax6675Service()) {
            control.inBackground(() => {
                while (true) {
                    bluetooth.max6675SetTemperature(input.max6675Temperature(DigitalPin.P0));
                    basic.pause(bluetooth.max6675Period())
                }
            })
        }    
    }
}
