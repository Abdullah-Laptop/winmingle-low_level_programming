#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Function that covert a string to an integer
 */
int _atoi(char *s)
{
    int i;
    int sign;
    int found;
    int result;

    i = 0;
    sign = 1;
    found = 0;
    result = 0;

    while(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
    {
        i++;
    }
    while(s[i] == '+' || s[i] == '-')
    {
        if(s[i] == '-')
            sign = -sign;
        i++;
    }
    while(s[i] >= '0' && s[i] <= '9')
    {
        found = 1;
        result = result * 10 + (s[i] - '0');
        i++;
    }
    if(found == 0)
        return(0);
    return (sign * result);
}
