#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that print diagonal
 */
void print_diagonal(int n)
{
    int i;
    int j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}
