#include "main.h"

/*
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that capitaliz every word
 */
char *cap_string(char *str)
{
    int i = 0;
    int j;
    char separators[] = " \t\n,;.!?\"(){}"; 

    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }
    while (str[i] != '\0')
    {
        for (j = 0; separators[j] != '\0'; j++)
        {
            if (str[i] == separators[j])
            {
                if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                {
                    str[i + 1] = str[i + 1] - 32;
                }
            }
        }

        i++;
    }
    return (str);
}
