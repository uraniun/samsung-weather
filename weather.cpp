#include "pxt.h"
#include "WeatherService.h"

WeatherService weatherService(uBit.radio);

void log_string(const char *s)
{
    printf("%s",s);
}

void log_num(int num)
{
    printf("%d",num);
}

enum class EnergyLevel{
    under = 0,
    over = 1
};

enum class CarbonLevel{
    high = 0,
    low = 1
};

enum class Locations{
    school = 0,
    home = 1,
    classroom = 2,
    microbitfoundation = 3,
    everyone = 4,
};

/**
 * share
 * use
 */

//% color=243 weight=100 icon="\uf1ec" block="IoT Blocks"
namespace weather {
    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=set_room_temp block="send|temperature %temperature|of room %room to remote" blockGap=8
    void setRoomTemperature(int temperature, StringData* room)
    {
        weatherService.setRoomTemperature(ManagedString(room), temperature);
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=share block="share|%variable|with %PERMISSIONS" blockGap=8
    //% PERMISSIONS.fieldEditor="gridpicker" PERMISSIONS.fieldOptions.columns=4
    void share(StringData* variable, Locations l)
    {
        // w.setRoomTemperature(ManagedString(room),temperature)
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_place_temp block="get|temperature for %location" blockGap=8
    StringData* getTemperature(StringData* location)
    {
        ManagedString s = weatherService.getTemperature(ManagedString(location));
        return s.leakData();
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_energy block="get|energy usage of building %building" blockGap=8
    StringData* getEnergyUsage(StringData* building)
    {
        return ManagedString().leakData();
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=on_energy_event block="on energy usage of building %building|%LEVEL|%threshold" blockGap=8
    //% LEVEL.fieldEditor="gridpicker" LEVEL.fieldOptions.columns=4
    void onEnergy(StringData* building, EnergyLevel level, int threshold, Action body)
    {
        //
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=on_carbon_event block="on|carbon level %LEVEL" blockGap=8
    //% LEVEL.fieldEditor="gridpicker" LEVEL.fieldOptions.columns=4
    void onCarbon(CarbonLevel level, Action body)
    {
        //
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=on_any block="on %key|in room %room| changed" blockGap=8
    void onAny(StringData* key, StringData* room, Action body)
    {
        //
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_received_string block="received string" blockGap=8
    StringData* getReceivedString()
    {
        return ManagedString().leakData();
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_received_number block="received number" blockGap=8
    int getReceivedNumber()
    {
        return 100;
    }
}