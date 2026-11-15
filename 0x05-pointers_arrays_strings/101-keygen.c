#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMing Community C Training
 * Description: Function that generate valid password
 */
int main(void)
{
    unsigned int seed;
    int sum;
    int n;
    int remaining;

    seed = 123456789;
    sum = 0;

    while (sum < 2772)
    {
        seed = seed * 1103515245u + 12345u;
        n = 33 + seed % 94;
        remaining = 2772 - sum;

        if (n < remaining && remaining - n < 33)
            continue;

        if (n > remaining)
            n = remaining;

        _putchar ((char)n);
        sum += n;
    }

    _putchar ('\n');
    return (0);
}
