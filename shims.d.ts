// Auto-generated. Do not edit.


    /**
     * share
     * use
     */
    //% color=243 weight=100 icon="\uf185" block="Weather"
declare namespace weather {

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
    //% blockId=get_wind_dir block="get|wind direction for %location" blockGap=8 shim=weather::getWindDirection
    function getWindDirection(location: string): string;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=get_forecast_now block="get|weather forecast for %location" blockGap=8 shim=weather::getWeatherForecast
    function getWeatherForecast(location: string): string;

    /**
     * do some stuff
     */
    //% help=none
    //% weight=96
    //% blockId=get_forecast_tom block="get|tommorows' weather forecast for %location" blockGap=8 shim=weather::getWeatherForecastTomorrow
    function getWeatherForecastTomorrow(location: string): string;
}

// Auto-generated. Do not edit. Really.
