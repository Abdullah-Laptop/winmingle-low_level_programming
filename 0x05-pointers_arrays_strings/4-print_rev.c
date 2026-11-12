#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that print string in reverse
 */
void print_rev(char *s)
{
    int count;
    count = 0;

    while(s[count] != '\0')
        count++;
    count--;
    while(count >= 0)
    {
        _putchar(s[count]);
        count--;
    }
    _putchar('\n');
}    
