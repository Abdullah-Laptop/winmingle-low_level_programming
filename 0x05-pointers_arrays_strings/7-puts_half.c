#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that print half of a string
 */
void puts_half(char *str)
{
    int length;
    int start;

    length = 0;

    while(str[length] != '\0')
    {
        length++;
    }
    start = length / 2;

    if(length % 2 != 0)
    {
        start++;
    }
    while(start < length)
    {
        _putchar(str[start]);
        start++;
    }
    _putchar('\n');
}
