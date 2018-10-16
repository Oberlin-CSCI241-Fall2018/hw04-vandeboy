#include<stdio.h>
#include<stdlib.h>
#include "bits.h"
/*Peng Gu
 * 10/13/2018
 * bits.c
 * This program encodes a character into a sequence of 1 and 0 characters.
 *  */

int main(){
    int input;
    while(EOF != (input = getchar())){
	print_bits(input);
    }
    return 0;
}
