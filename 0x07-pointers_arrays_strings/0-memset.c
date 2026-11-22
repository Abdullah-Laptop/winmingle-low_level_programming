#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Fill memory with constant bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    i = 0;

    while (i < n)
    {
        s[i] = b;
        i++;
    }

    return (s);
}
