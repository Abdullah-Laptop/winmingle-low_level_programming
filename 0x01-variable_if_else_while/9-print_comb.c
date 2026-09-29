#include<stdio.h>

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Print combinatoin number
 */
int main(void)
{
    int n = 0;

    while(n <= 9)
    {
        putchar(n + '0');
        if(n !=9)
        {
        putchar(',');
        putchar(' ');
        }
        n++;
    }
        putchar('\n');
    return(0);
}
