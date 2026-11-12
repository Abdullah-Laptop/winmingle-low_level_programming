#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Print string length
 */
int _strlen(char *s)
{
    int length;

    length = 0;
    while(s[length] != '\0')
    {
        length++;
    }

    return (length);
}
