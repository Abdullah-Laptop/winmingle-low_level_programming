#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Locate substring needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
    char *h;
    char *n;

    if (*needle == '\0')
        return (haystack);
    
    while (*haystack != '\0')
    {
        h = haystack;
        n = needle;

        while (*n != '\0' && *h == *n)
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return (haystack);

        haystack++;
    }

    return (NULL);
}
