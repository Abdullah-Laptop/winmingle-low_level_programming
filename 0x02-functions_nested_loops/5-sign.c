#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
  * Discription: Print number sign
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }
     else if (n == 0)
     {
         _putchar('0');
         return (0);
     }
     else
     {
         _putchar('-');
         return (-1);
     }

    return (0);
}
