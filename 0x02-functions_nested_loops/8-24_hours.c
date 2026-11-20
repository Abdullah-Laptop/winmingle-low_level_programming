#include "main.h" 
  
/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: print jack bauer
 */
void jack_bauer(void) 
{ 
    int hour;
    int munite;
    for (hour = 0; hour < 24; hour++)
    {
        for (munite = 0; munite < 60; munite++) 
        {
            _putchar((hour / 10) + '0');
            _putchar((hour % 10) + '0');
            _putchar(':');
            _putchar((munite / 10) + '0');
            _putchar((munite % 10) + '0');
            _putchar('\n');
        }
    }
} 
