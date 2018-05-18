#include "pxt.h"
#include "WeatherService.h"

WeatherService s(uBit.radio);

void log_string(const char *)
{

}

void log_num(int num)
{

}

//% color=190 weight=100 icon="\uf1ec" block="IoT Blocks"
namespace weather {
    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=set_room_temp block="set|room %room|temperature to %temperature" blockGap=8
    void setRoomTemperature(StringData* room, int temperature)
    {
        w.setRoomTemperature(ManagedString(room),temperature)
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_place_temp block="get|temperature for %location" blockGap=8
    StringData* getTemperature(StringData* location)
    {
        ManagedString s = w.getTemperature(ManagedString(location),temperature);
        return s.leakData();
    }
}