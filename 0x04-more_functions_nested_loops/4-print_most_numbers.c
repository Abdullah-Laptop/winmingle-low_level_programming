#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Desctiption: Function that print number except 2 and 4
 */
void print_most_numbers(void)
{
    int i;

    for(i = 0; i <= 9; i++)
    {
        if(i != 2 && i != 4)
        {
            _putchar(i + '0');
        }
    }
        _putchar('\n');
}
