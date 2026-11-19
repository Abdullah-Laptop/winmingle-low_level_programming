#include "main.h"

/*
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that compare two string
 */
int _strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }

    return (s1[i] - s2[i]);
}
