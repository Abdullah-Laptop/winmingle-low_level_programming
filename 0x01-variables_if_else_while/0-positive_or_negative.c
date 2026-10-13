#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Authour: Omotosho Abdullah Abiodun
 * program: WinMingle Community C Training
 * Discription: print whether random number is positive, negative, or zero
 */

int main(void) {
    int  n;
    srand(time(0));

    n = rand() - RAND_MAX / 2;

    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else 
        printf("%d is zero\n", n);

    return(0);
}
