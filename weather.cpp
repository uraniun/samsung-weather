#include "pxt.h"
#include "WeatherService.h"

WeatherService weatherService(uBit.radio);
/**
 * share
 * use
 */

enum class WeatherLocationType
{
    city,
    postcode
};

//% color=243 weight=100 icon="\uf185" block="Weather"
namespace weather {

    int init() {
        return enableRadio();
    }

    //%
    StringData* getTemperature(WeatherLocationType locationType, StringData* location)
    {
        init();
        ManagedString s = weatherService.getTemperature((int)locationType, ManagedString(location));
        return s.leakData();
    }

    //%
    StringData* getWindDirection(WeatherLocationType locationType, StringData* location)
    {
        init();
        ManagedString w = weatherService.getWind(int(locationType), ManagedString(location));
        return w.leakData();
    }

    //%
    StringData* getWeatherForecast(WeatherLocationType locationType, StringData* location)
    {
        init();
        ManagedString w = weatherService.getForecastNow(int(locationType), ManagedString(location));
        return w.leakData();
    }

    //%
    StringData* getWeatherForecastTomorrow(WeatherLocationType locationType, StringData* location)
    {
        init();
        ManagedString w = weatherService.getForecastTomorrow(int(locationType), ManagedString(location));
        return w.leakData();
    }
}