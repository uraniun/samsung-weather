// Auto-generated. Do not edit.



    //% color=190 weight=100 icon="\uf1ec" block="IoT Blocks"
declare namespace weather {

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=set_room_temp block="set|room %room|temperature to %temperature" blockGap=8 shim=weather::setRoomTemperature
    function setRoomTemperature(room: string, temperature: number): void;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=get_place_temp block="get|temperature for %location" blockGap=8 shim=weather::getTemperature
    function getTemperature(location: string): string;
}

// Auto-generated. Do not edit. Really.
