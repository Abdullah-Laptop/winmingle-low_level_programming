#include "main.h"
  
/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: print all natural number
 */
void print_number(int n)
{
    unsigned int value;
    unsigned int divisor;
    
    if(n < 0)
    {
        _putchar('-');
    value = (unsigned int)(-(n + 1)) + 1;
    }
    else
    {
        value = (unsigned int)n;
    }
    divisor = 1;

    while(value / divisor >= 10)
    {
        divisor *= 10;
    }
    while(divisor > 0)
    {
        _putchar((value / divisor)% 10 + '0');
        divisor /= 10;
    }
}
void print_to_98(int n)
{
        while(n != 98)
        {
            print_number(n);
            _putchar(',');
            _putchar(' ');

            if(n < 98)
                n++;
            else
                n--;
        }

        print_number(98);
        _putchar('\n');
} 
