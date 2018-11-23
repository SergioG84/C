#include <stdio.h>

int main ()
{ /* main */
   /*
    ***************************
    *** Declaration Section ***
    ***************************
    *
    *****************************
    * Named Constants Subsection *
    *****************************
    *
    * feet_per_meter: how many feet are in one meter 
    * centimeters_per_meter: how many centimeters are in one meter 
    * cubic_centimeters_per_milliliter: how many cubic centimeters are in one milliliter
    * kilometers_per_mile: how many kilometers are in one mile 
    * meters_per_kilometer: how many meters are in one kilometer 
    * gallons_per_barrel: how many gallons are in one barrel 
    * quarts_per_gallon: how many quarts are in one gallon
    * quarts_per_liter: how many quarts are in one liter 
    * minutes_per_hour: how many minutes are in one hour
    * seconds_per_minute: how many seconds are in one minute
    */

    const float feet_per_meter       = 3.280839895;
    const int centimeters_per_meter          = 100;
    const int cubic_centimeters_per_milliliter = 1;
    const float kilometers_per_mile     = 1.609344;
    const int meters_per_kilometer          = 1000;
    const int gallons_per_barrel              = 42;
    const int quarts_per_gallon                = 4;
    const float quarts_per_liter         = 1.05669;
    const int minutes_per_hour                = 60;
    const int seconds_per_minute              = 60;
    /*
    *****************************
    * Local Variable Subsection *
    *****************************  
    */
    float flow_rate_cubic_feet_per_hour;
    float fuel_efficiency_miles_per_barrel;
    float flow_rate_milliliters_per_second;
    float fuel_efficiency_meters_per_liter;
    /*
    *************************
    *** Execution Section ***
    *************************
    *
    ***********************
    * Greeting Subsection *
    ***********************
    *
    * Describe what the program does.
    */
    printf("I am going to convert units from English to metric.\n");
    /*
    ********************
    * Input Subsection *
    ********************
    * Tell them what you are going to convert first 
    */
    printf("I will convert a flow rate from cubic feet per hour to,\n");
    printf("milliliters per second.\n");
    printf("What flow rate shall I convert?\n");
    scanf("%f", &flow_rate_cubic_feet_per_hour);
   /*
    * Ask them for their car's fuel efficiency  
    */
    printf("I will now convert your car's fuel efficiency from miles per barrel,\n");
    printf("to meters per liter.\n");
    printf("What is your car's fuel efficiency?\n");
    scanf("%f", &fuel_efficiency_miles_per_barrel);

    /* 
    **************************
    * Calculation Subsection *
    **************************
    */
    flow_rate_milliliters_per_second = flow_rate_cubic_feet_per_hour  *
    (centimeters_per_meter *
    centimeters_per_meter * centimeters_per_meter) / (feet_per_meter * feet_per_meter *
    feet_per_meter * minutes_per_hour * seconds_per_minute);
    fuel_efficiency_meters_per_liter = fuel_efficiency_miles_per_barrel *
    (kilometers_per_mile * meters_per_kilometer * quarts_per_liter)
    / (quarts_per_gallon * gallons_per_barrel);


    /*
    *********************
    * Output Subsection *
    *********************
    */
    /*
    * The output for the flow rate in cubic feet per hour and milliliters per second
    */
    printf("The flow rate in cubic feet per hour is %f.\n",flow_rate_cubic_feet_per_hour);
    printf("The flow rate in milliliters per second is %f.\n",
    flow_rate_milliliters_per_second);
    /*
    * The output for fuel efficiency in miles per barrel and meters per liter 
    */
    printf("Your car's fuel efficiency in miles per barrel is %f.\n",
    fuel_efficiency_miles_per_barrel);
    printf("Your car's fuel efficiency is %f.\n",fuel_efficiency_meters_per_liter);

}   /* main */
