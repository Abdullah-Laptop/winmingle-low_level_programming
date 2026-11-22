#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Communite C Training
 * Descruption: Function that copy memory bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;

    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }

    return (dest);
}
