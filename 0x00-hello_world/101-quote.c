#include <unistd.h>
#include <stdio.h>
/*
 * Author: Omotosho Abdullah Aboidun
 *Program: WinMingle Community C Training
 *Description: Prints quote to stderr
 */ 

int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}
