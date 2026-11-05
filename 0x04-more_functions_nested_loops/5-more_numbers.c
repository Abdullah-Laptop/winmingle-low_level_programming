#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Print number 0 to 14 x10
 */
void more_numbers(void)
{
    int row;
    int num;

    for(row = 0; row <= 9; row++)
    {
        for(num = 0; num <= 14; num++)
        {
            if(num > 9)
            {
                _putchar((num / 10) + '0');
            }
            _putchar((num % 10) + '0');
        }

        _putchar('\n');
    }
    
}
