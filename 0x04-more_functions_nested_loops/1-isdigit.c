#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Check for digit
 */
int _isdigit(int c)
{
    if(c >= '0' && c <= '9')
    {
        return 1;
    }
    return 0;
}
