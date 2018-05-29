/**
 * share
 * use
 */

//% color=243 weight=100 icon="\uf185" block="Weather"
namespace weather {

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_place_temp block="get|temperature for %location" blockGap=8
    //% shim=weather::getTemperature
    export function getTemperature(location: string) : string
    {
        return Math.random(50).toString();
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_wind_dir block="get|wind direction for %location" blockGap=8
    //% shim=weather::getWindDirection
    export function getWindDirection(location: string) : string
    {
        let directions = ["N", "NW", "NE","S","SE","SW","E","W"]
        return directions[Math.random(directions.length)]
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_forecast_now block="get|weather forecast for %location" blockGap=8
    //% shim=weather::getWeatherForecast
    export function getWeatherForecast(location: string) : string
    {
        let weather = ["overcast", "raining", "sunny", "snowing", "thunder"]
        return weather[Math.random(weather.length)]
    }

    /**
      * do some stuff
      */
    //% help=none
    //% weight=96
    //% blockId=get_forecast_tom block="get|tommorows' weather forecast for %location" blockGap=8
    //% shim=weather::getWeatherForecastTomorrow
    export function getWeatherForecastTomorrow(location: string)
    {
        let weather = ["overcast", "raining", "sunny", "snowing", "thunder"]
        return weather[Math.random(weather.length)]
    }
}