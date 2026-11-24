#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Print 8x8 chessboard
 */
void print_number(int n)
{
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
        num = n;
    
    if (num / 10)
        print_number(num / 10);
    _putchar((num % 10) + '0');
}
void print_diagsums(int *a, int size)
{
    int sum1;
    int sum2;
    int i;

    sum1 = 0;
    sum2 = 0;
    i = 0;

    while (i < size)
    {
        sum1 += a[i * size + i];
        sum2 += a[i * size +(size -1 -i)];
        i++;
    }
    print_number(sum1);
    _putchar(',');
    _putchar(' ');
    print_number(sum2);
    _putchar('\n');
}
