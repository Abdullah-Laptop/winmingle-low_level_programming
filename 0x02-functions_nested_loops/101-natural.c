#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: write Program the print natural
 */
void print_natural(void)
{
    unsigned int i;
    unsigned int sum;
    unsigned int divisor;

    i = 1;
    sum = 0;
    
    while(i < 1024)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
            i++;
    }

    divisor = 1;
    while(sum / divisor >= 10)
    {
        divisor *= 10;
    }

    while(divisor > 0)
    {
        _putchar((sum / divisor) % 10 + '0');
        divisor /= 10;
    }
        _putchar('\n');

} 
