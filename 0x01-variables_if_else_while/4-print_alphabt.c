#include <stdio.h>

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Trainig
 * Discription: Prints lowercase
 */

int main(void)
{
    char x = 'a';

    while (x <= 'z') 
    {
        if (x != 'e' && x !='q')
        putchar(x);
        x++;
    }
        putchar ('\n');
    return(0);

} 
