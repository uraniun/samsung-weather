#include "pxt.h"
#include "WeatherService.h"

WeatherService weatherService(uBit.radio);
/**
 * share
 * use
 */

//% color=243 weight=100 icon="\uf185" block="Weather"
namespace weather {

    int init() {
        return enableRadio();
    }

    //%
    StringData* getTemperature(StringData* location)
    {
        init();
        ManagedString s = weatherService.getTemperature(ManagedString(location));
        return s.leakData();
    }

    //%
    StringData* getWindDirection(StringData* location)
    {
        init();
        WeatherServiceWind w = weatherService.getWind(ManagedString(location));
        return w.direction.leakData();
    }

    //%
    StringData* getWeatherForecast(StringData* location)
    {
        init();
        WeatherServiceForecastNow w = weatherService.getForecastNow(ManagedString(location));
        return w.text.leakData();
    }

    //%
    StringData* getWeatherForecastTomorrow(StringData* location)
    {
        init();
        WeatherServiceForecastTomorrow w = weatherService.getForecastTomorrow(ManagedString(location));
        return w.text.leakData();
    }
}