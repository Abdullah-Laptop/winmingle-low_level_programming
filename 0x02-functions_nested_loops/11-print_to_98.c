#include "main.h"
#include <stdio.h>
  
/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: print all natural number
 */
void print_to_98 (int n)
{
    if (n <= 98)
    {
        while(n < 98)
        {
            printf("%i, ", n);
            n++;
        }
        printf("%i\n", n);

    }
    else
    {
        while (n > 98)
        {
            printf("%i, ", n);
            n--;
        }

        printf("%i\n", n);
    }
} 
