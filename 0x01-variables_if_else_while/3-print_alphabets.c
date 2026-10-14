#include <stdio.h>

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Trainig
 * Discription: Prints lowercase Then Uppercase
 */

int main(void)
{
    char c = 'a';

    while (c <= 'z') 
    {
        putchar(c);
        c++;
    }
    c = 'A';
    while (c <='Z')
    {
        putchar(c);
        c++;
    }

        putchar('\n');
    return(0);

} 
