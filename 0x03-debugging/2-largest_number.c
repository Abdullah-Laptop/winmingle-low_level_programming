#include "main.h"

/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Description: Fix function that return three integer
 */
int largest_number(int a, int b, int c) 
{ 
    int largest; 

    if (a >= b && a >= c) 
        largest = a; 
    else if (b >= a && b >= c) 
        largest = b; 
    else 
        largest = c; 
  
    return (largest); 
}
