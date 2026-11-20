#include "main.h"

/*
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that encode thet text
 */
char *rot13(char *str)
{
    int i;
    char lower[] =
"abcdefghijklmnopqrstuvwxyz";
    char upper[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower_rot[] =
"nopqrstuvwxyzabcdefghijklm";
    char upper_rot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLM";
    int j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 26; j++)
        {
            if (str[i] == lower[j])
            {
                str[i] = lower_rot[j];
                break;
            }
            if (str[i] == upper[j])
            {
                str[i] = upper_rot[j];
                break;
            }
        }
    }

    return (str);
}
