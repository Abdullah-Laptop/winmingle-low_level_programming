#include "main.h"

/*
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that convert certain word to number
 */
char *leet(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {

        switch (str[i])
        {
            case 'a':
            case 'A':
                str[i] = '4';
                break;

            case 'e':
            case 'E':
                str[i] = '3';
                break;

            case 'o':
            case 'O':
                str[i] = '0';
                break;

            case 't':
            case 'T':
                str[i] = '7';
                break;

            case 'l':
            case 'L':
                str[i] = '1';
                break;
        }
    }

    return (str);
}
