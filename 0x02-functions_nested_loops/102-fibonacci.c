#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: write Program the print natural
 */
void print_ulong(unsigned long n)
{
    unsigned long divisor;

    divisor = 1;

    while(n / divisor >= 10)
        divisor *= 10;

    while(divisor > 0)
    {
        _putchar((n / divisor) % 10 + '0');
        divisor /= 10;
    }
}
void print_fibonacci(void)
{
     unsigned long first = 1;
     unsigned long second = 2;
     unsigned long next;
     int count = 0;

     while(count < 50)
     {
         print_ulong(first);

         if(count != 49)
         {
             _putchar(',');
             _putchar(' ');
         }

         next = first + second;
         first = second;
         second = next;

         count++;
     }

     _putchar('\n');
}
