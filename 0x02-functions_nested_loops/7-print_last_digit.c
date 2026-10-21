#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: Print last digit
 */
int print_last_digit(int n)
{
    int last;

    last = n % 10;

    if (last < 0)
    {
        last = -last;
    }
    _putchar(last + '0');

    return (last);
}
