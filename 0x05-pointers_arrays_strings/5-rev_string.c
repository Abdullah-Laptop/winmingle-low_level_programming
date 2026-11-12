#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Progran: WinMingle Community C Training
 * Description: Funtion that reverse a string
 */
void rev_string(char *s)
{
    int start;
    int end;
    int temp;

    start = 0;
    end = 0;

    while(s[end] != '\0')
        end++;
    end--;

    while(start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
