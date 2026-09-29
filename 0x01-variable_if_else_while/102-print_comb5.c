#include<stdio.h>

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: combination of two-two digits
 */
int main(void)
{
    int a;
    int b;

    a = 0;
    while(a <= 98)
    {
        b = a+1;
        while(b <= 99)
        {
             putchar((a / 10) + '0');
             putchar((a % 10) + '0');
             putchar(' ');

            putchar((b / 10) + '0');
            putchar((b % 10) + '0');

            if(a !=98 || b !=99)
            {
            putchar(',');
            putchar(' ');
            }
            b++;
        }
        a++;
    }
    putchar('\n');

    return(0);
}
