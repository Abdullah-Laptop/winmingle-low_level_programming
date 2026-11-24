#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Return length of prefix substring match bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count;
    char *a;
    int found;

    count = 0;

    while (*s != '\0')
    {
        a = accept;
        found = 0;

        while (*a != '\0')
        {
            if (*s == *a)
            {
                found = 1;
                break;
            }
            a++;
        }

        if (found == 0)
            break;
        count++;
        s++;
    }

    return (count);
}
