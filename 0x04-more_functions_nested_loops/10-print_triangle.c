#include "main.h"

/**
 * Author: Omotosho Abdullah Abdiodun
 * Program: WinMingle Community C Training
 * Description: Function that print triangle
 */
void print_triangle(int size)
{
    int row;
    int space;
    int hars;

    if(size <= 0)
    {
        _putchar('\n');
        return;
    }

    for(row = 0; row < size; row++)
    {
        for(space = 0; space < size - row -1; space++)
        {
            _putchar(' ');
        }
        for(hars = 0; hars <= row; hars++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}
