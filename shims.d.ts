// Auto-generated. Do not edit.


    /**
     * share
     * use
     */
    //% color=243 weight=100 icon="\uf1ec" block="IoT Blocks"
declare namespace weather {

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=set_room_temp block="send|temperature %temperature|of room %room to remote" blockGap=8 shim=weather::setRoomTemperature
    function setRoomTemperature(temperature: number, room: string): void;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=share block="share|%variable|with %PERMISSIONS" blockGap=8
    //% PERMISSIONS.fieldEditor="gridpicker" PERMISSIONS.fieldOptions.columns=4 shim=weather::share
    function share(variable: string, l: Locations): void;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=get_place_temp block="get|temperature for %location" blockGap=8 shim=weather::getTemperature
    function getTemperature(location: string): string;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=get_energy block="get|energy usage of building %building" blockGap=8 shim=weather::getEnergyUsage
    function getEnergyUsage(building: string): string;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=on_energy_event block="on energy usage of building %building|%LEVEL|%threshold" blockGap=8
    //% LEVEL.fieldEditor="gridpicker" LEVEL.fieldOptions.columns=4 shim=weather::onEnergy
    function onEnergy(building: string, level: EnergyLevel, threshold: number, body: () => void): void;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=on_carbon_event block="on|carbon level %LEVEL" blockGap=8
    //% LEVEL.fieldEditor="gridpicker" LEVEL.fieldOptions.columns=4 shim=weather::onCarbon
    function onCarbon(level: CarbonLevel, body: () => void): void;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=on_any block="on %key|in room %room| changed" blockGap=8 shim=weather::onAny
    function onAny(key: string, room: string, body: () => void): void;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=get_received_string block="received string" blockGap=8 shim=weather::getReceivedString
    function getReceivedString(): string;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=get_received_number block="received number" blockGap=8 shim=weather::getReceivedNumber
    function getReceivedNumber(): number;
}

// Auto-generated. Do not edit. Really.
