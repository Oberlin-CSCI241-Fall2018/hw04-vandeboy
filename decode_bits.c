#include<stdlib.h>
#include<stdio.h>
#include "bits.h"
/*Peng Gu
 * 10/13/2018
 * decode_bits.c
 * This program reads binary numbers and outputs real characters.
 */

int main(){
    int input;
    while(EOF != (input = getchar())){
	decode_bits(input);
    }
    return 0;
}
