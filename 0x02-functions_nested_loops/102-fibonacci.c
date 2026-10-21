#include <stdio.h>

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: write Program the print natural
 */
int main(void)
{
     unsigned long first = 1;
     unsigned long second = 2;
     unsigned long next;
     int count;

    printf("%lu, %lu", first, second);

        for (count = 3; count <= 50; count++)
        {
            next = first + second;
            printf(", %lu", next);

            first = second;
            second = next;

        }
    printf("\n");

    return (0);
}
