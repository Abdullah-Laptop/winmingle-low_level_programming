#include "main.h"

/*
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that print an integer
 */
static void print_digits(int n)
{
    int digit;

    if (n / 10 != 0)
    {
        print_digits(n / 10);
    }
    digit = n % 10;

    if (digit < 0)
    {
        digit = -digit;
    }
    _putchar(digit + '0');
}
void print_number(int n)
{

    if (n < 0)
    {
        _putchar('-');
    }
    print_digits(n);
}
