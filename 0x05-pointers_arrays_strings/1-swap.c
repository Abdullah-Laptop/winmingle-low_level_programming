#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Swap value of two integer
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;

    *a = *b;
    *b = temp;
}
