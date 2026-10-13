#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**Authour: Omotosho Abdullah Abiodun
 * program: WinMingle Community C Training
 * Discription: Print last digit of random number
 */

int main(void) {
    int n;
    int last;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    last = n % 10;
    
    if (last > 5)
        printf("last digit of %d is %d and is grater than 5\n", n, last);
    else if (last == 5)
        printf("last digit of %d is %d and is equal to 0\n", n, last);
    else if (last < 6)
        printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);

    return(0);
}
