#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Find first occurence in s of any bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
    char *a;

    while (*s != '\0')
    {
        a = accept;

        while (*a != '\0')
        {
            if (*s == *a)
                return (s);
            a++;
        }
        s++;
    }
    
    return (NULL);
}
