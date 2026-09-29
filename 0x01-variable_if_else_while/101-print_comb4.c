#include<stdio.h>

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Print combination of three digits
 */
int main(void)
{
    int a; 
    int b;
    int c;

    a = 0;
    
    while(a <= 7)
    {
         b = a+1;
         while(b <= 8)
        {
            c = b+1;
            while(c <= 9)
            {
                putchar((a %10) + '0');
                putchar((b %10) + '0');
                putchar((c %10) + '0');

                if(a !=7 || b !=8 || c !=9)
                {
                     putchar(',');
                     putchar(' ');
                }
                 c++;
             }
             b++;
         }
         a++;
    }
        putchar('\n');
    return(0);
}
