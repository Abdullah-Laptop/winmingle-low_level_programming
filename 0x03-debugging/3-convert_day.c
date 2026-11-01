#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Trainig
 * Descriotion: convert a date to the day 
 */
int convert_day(int month, int day)
{
    int month_days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int day_of_year;
    int i;

    day_of_year = day;

    for(i = 1; i < month; i++)
    {
        day_of_year += month_days[i];
    }

    return(day_of_year);
}
