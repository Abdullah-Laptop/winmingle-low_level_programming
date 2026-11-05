#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Program that print number 1 to 100
 */
int main(void)
{
    int i;

    for(i = 1; i <= 100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else if(i % 3 == 0)
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
        }
        else if(i % 5 == 0)
        {
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else
        {

        if(i >= 10)
            _putchar(i / 10 + '0');
        _putchar(i % 10 + '0');
        }

        if(i != 100)
            _putchar(' ');
    }
    _putchar('\n');
    return 0;
}
