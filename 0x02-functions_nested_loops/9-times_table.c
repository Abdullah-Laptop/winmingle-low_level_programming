#include "main.h" 
  
/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: print 9 times table
 */
void times_table(void) 
{ 
    int row;
    int column;
    int result;
   
    for (row = 0; row <= 9; row++)
    {
        for (column = 0; column <= 9; column++) 
        {
            result = row * column;
            
            if (result < 10)
            {
                _putchar(' ');
                _putchar('0' + result);
            }
            else
            {
                _putchar(result / 10 + '0');
                _putchar(result % 10 + '0');
            }
            if (column < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
} 
