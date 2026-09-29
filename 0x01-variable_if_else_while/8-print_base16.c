#include <stdio.h> 

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Trainig
 * Discription: Prints base16  
 */

int main(void)
{
    char x;
    
    x = '0';
    while (x <= '9') 
    {
        putchar(x);
        x++;
    }
    x = 'a';
    while(x <= 'f')
    {   
        putchar(x);
        x++;
    }
        putchar ('\n');
    return(0);

} 
