#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that print string
 */
void _puts(char *s)
{
    int i;

    while(s[i] != '\0')
    {
        _putchar(s[i]);
    i++;
    }
    _putchar('\n');
}
