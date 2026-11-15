#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that print every other character of a string
 */
static void print_number(int n)
{
    unsigned int number;

    if (n < 0)
    {
        _putchar('-');
        number = -n;
    }
    else
    {
        number = n;
    }
    
    if(number / 10)
        print_number(number / 10);

    _putchar((number % 10) + '0');
    
}
void print_array(int *a, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        print_number(a[i]);

        if(i < n - 1)
        {
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar('\n');
}
