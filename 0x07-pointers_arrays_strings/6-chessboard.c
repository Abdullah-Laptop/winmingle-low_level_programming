#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Print 8x8 chessboard
 */
void print_chessboard(char(*a)[8])
{
    int row;
    int col;

    for (row = 0; row < 8; row++)
    {
        for (col = 0; col < 8; col++)
        {
            _putchar(a[row][col]);
        }
        _putchar('\n');
    }
}
