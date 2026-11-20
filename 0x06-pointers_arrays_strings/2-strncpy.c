#include "main.h"

/*
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that copy a string.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}
