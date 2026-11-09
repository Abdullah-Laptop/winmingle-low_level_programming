#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: print 98 fibonacci numbers
 */
void print_small(unsigned int n)
{
    unsigned int divisor;

    divisor = 1;

    while(n / divisor >= 10)
        divisor *= 10;

    while(divisor > 0)
    {
        _putchar((n / divisor) % 10 + '0');
        divisor /= 10;
    }
}
void print_four(unsigned int n)
{
    unsigned int divisor;

    divisor = 1000;

    while(divisor > 0)
    {
        _putchar((n / divisor) % 10 + '0');
        divisor /= 10;
    }
}
void print_big(unsigned int a5, unsigned int a4, unsigned int a3, unsigned int a2, unsigned int a1, unsigned int a0)
{
    if(a5 > 0)
    {
        print_small(a5);
        print_four(a4);
        print_four(a3);
        print_four(a2);
        print_four(a1);
        print_four(a0);
    }
    else if(a4 > 0)
    {
        print_small(a4);
        print_four(a3);
        print_four(a2);
        print_four(a1);
        print_four(a0);
    }
    else if(a3 > 0) 
    {
        print_small(a3);  
        print_four(a2);
        print_four(a1); 
        print_four(a0);
     }
    else if(a2 > 0)
    {
        print_small(a2);
        print_four(a1);
        print_four(a0);
    }
    else if(a1 > 0)
    {
        print_small(a1);
        print_four(a0);
    }
    else
    {
        print_small(a0);
    }
}
void print_fibonacci_98(void)
{
     unsigned int a0 = 1, a1 = 0, a2 = 0;
     unsigned int a3 = 0, a4 = 0, a5 = 0;
     
     unsigned int b0 = 2, b1 = 0, b2 = 0;
     unsigned int b3 = 0, b4 = 0, b5 = 0;
     
     unsigned int c0, c1, c2, c3, c4, c5; 
     unsigned int carry;
     int i;

     i = 0;

     while(i < 98)
     {
         print_big(a5, a4, a3, a2, a1, a0);

         if(i != 97)
         {
             _putchar(',');
             _putchar(' ');
         }
         
         carry = 0;
         c0 = a0 + b0;
         if(c0 >= 10000)
         {
             c0 -= 10000;
             carry = 1;
         }
         else
             carry = 0;

         c1 = a1 + b1 + carry;
         carry = 0;
         if(c1 >= 10000)
         {
             c1 -=10000;
             carry = 1;
         }
         c2 = a2 + b2 + carry;
         carry = 0;
         if(c2 >= 10000)
         {
             c2 -= 10000;
             carry = 1;
         }
         c3 = a3 + b3 + carry;
         carry = 0;
         if(c3 >= 10000)
         {
             c3 -= 10000;
             carry = 1;
         }
         c4 = a4 + b4 + carry;
         carry = 0;
         if(c4 >= 10000)
         {
             c4 -= 10000;
             carry = 1;
         }
         c5 = a5 + b5 + carry;

         a0 = b0;
         a1 = b1;
         a2 = b2;
         a3 = b3;
         a4 = b4;
         a5 = b5;

         b0 = c0;
         b1 = c1;
         b2 = c2;
         b3 = c3;
         b4 = c4;
         b5 = c5;

         i++;
     }
}
