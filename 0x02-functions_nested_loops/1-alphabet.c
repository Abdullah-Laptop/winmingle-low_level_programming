#include "main.h" 
  
/**
 * Author: Omotosho Abdullah Abiodun
 * Program: WinMingle Community C Training
 * Discription: print alphabet, in lowercase
 */
void print_alphabet(void) 
{ 
    char c;

    for(c = 'a'; c <= 'z'; c++) {
        _putchar(c);
    }

    _putchar('\n');
} 
