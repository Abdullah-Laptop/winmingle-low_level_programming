#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMing Community C Training
 * Description: Function that generate valid password
 */
int main(void)
{
    int sum;
    int n;

    sum = 0;
    srand(time(NULL));

    while(sum < 2772)
    {
        n = 33 + rand() % 94;

        if(sum + n > 2772 - 33 && sum + n < 2772)
            continue;

        if(sum + n > 2772)
            n = 2772 - sum;

        printf("%c", n);
        sum += n;
    }
    printf("\n");
    return(0);
}
