#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: write Program the print natural
 */
void print_sum(void)
{
     unsigned long first = 1;
     unsigned long second = 2;
     unsigned long next;
     unsigned long sum = 0;
     unsigned long divisor;

    while (second <= 4000000)
    {
        if (second % 2 == 0)
        {
            sum += second;
        }

        next = first + second;
        first = second;
        second = next;
    }

    divisor = 1;

    while(sum / divisor >= 10)
        divisor *= 10;

    while(divisor > 0)
    {
        _putchar((sum / divisor) % 10 + '0');
        divisor /= 10;
    }

    _putchar('\n');
}
