#include "main.h"
  
/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: print times table start from 0
 */
void print_times_table(int n) 
{ 
    int row;
    int column;
    int result;

    if (n < 0 || n > 15)
    {
        return;
    }
    for (row = 0; row <= n; row++)
    {
        for (column = 0; column <= n; column++) 
        {
            result = row * column;

            if (result < 10)
            {
                _putchar(result + '0');
            }
            else if (result < 100)
            {
                _putchar((result / 10) + '0');
                _putchar((result % 10) + '0');
            }
            else
            {
                _putchar((result / 100) + '0');
                _putchar(((result / 10) % 10) + '0');
                _putchar((result % 10) + '0');
            
            }
            if (column != n)
            {
                _putchar(',');
                _putchar(' ');
            }
        }

        _putchar('\n');
    }
} 
