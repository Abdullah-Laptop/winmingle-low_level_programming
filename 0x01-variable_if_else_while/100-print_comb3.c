#include<stdio.h>

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Print combinatoin of two digits
 */
int main(void)
{
    int a; 
    int b;
    
    a = 0;
    
    while(a <= 8)
    {
    b = a+1;
    while(b <= 9)
    {
        putchar((a %10) + '0');
        putchar((b %10) + '0');
        
        if(a !=8 || b !=9)
        {
        putchar(',');
        putchar(' ');
        }
        b++;
     }
        a++;
    }
        putchar('\n');
    return(0);
}
