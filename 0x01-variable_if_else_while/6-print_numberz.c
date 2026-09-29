#include<stdio.h>

/**
 * Author: Omotosho Abdullah Abdiodun
 * Program: WinMingle Community C Training 
 * Description:Print digits without using char
 */

int main(void)
{
    int n = 0;

    while(n <= 9)
    {
        putchar(n + '0');
        n++;
    }
        putchar('\n');
    return(0);
}
