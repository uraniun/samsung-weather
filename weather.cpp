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

//% color=243 weight=100 icon="\uf185" block="Weather"
namespace weather {

    bool radioEnabled = false;

    int init() {
        int r = uBit.radio.enable();
        if (r != MICROBIT_OK) {
            uBit.panic(43);
            return r;
        }
        if (!radioEnabled) {
            uBit.radio.setGroup(0);
            radioEnabled = true;
        }
        return r;
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_place_temp block="get|temperature for %location" blockGap=8
    StringData* getTemperature(StringData* location)
    {
        init();
        ManagedString s = weatherService.getTemperature(ManagedString(location));
        return s.leakData();
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_wind_dir block="get|wind direction for %location" blockGap=8
    StringData* getWindDirection(StringData* location)
    {
        init();
        WeatherServiceWind w = weatherService.getWind(ManagedString(location));
        return w.direction.leakData();
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_forecast_now block="get|weather forecast for %location" blockGap=8
    StringData* getWeatherForecast(StringData* location)
    {
        init();
        WeatherServiceForecastNow w = weatherService.getForecastNow(ManagedString(location));
        return w.text.leakData();
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_forecast_tom block="get|tommorows' weather forecast for %location" blockGap=8
    StringData* getWeatherForecastTomorrow(StringData* location)
    {
        init();
        WeatherServiceForecastTomorrow w = weatherService.getForecastTomorrow(ManagedString(location));
        return w.text.leakData();
    }
}