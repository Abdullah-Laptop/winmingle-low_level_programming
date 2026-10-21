#include <stdio.h>

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: write Program the print natural
 */
int main(void)
{
     int i;
    int sum;

    sum = 0;

        for (i = 0; i < 1024; i++)
        {
            if (i % 3 == 0 || i % 5 == 0)
            {
                sum += i;
            }
        }
    printf("%d\n", sum);
    return (0);

} 
