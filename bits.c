#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<ctype.h>
#include "bits.h"
/*Peng Gu
 * 10/13/2018
 * bits.c
 * This program contains the function that takes a character and outputs a binary format
 * value and the function that takes a binary value and output a character.
 */

void print_bits(int ch){
    int length=CHAR_BIT-1;
    int n=2<<(length-1);
    while(length>=0){
	if (ch>=n){
	    printf("1");
	    ch=ch-n;
	}else{
	    printf("0");
	}
	n=n/2;
	length--;
    }
}

void decode_bits(int ch){
    static int pos=0;
    static int arr[60];
    int total=0;
    int multi=1;
    if(!isspace(ch)){
	if(ch == '1' || ch == '0'){
            arr[pos]=ch;
	    pos++;
	    if(pos==CHAR_BIT){
		while(pos>0){
		    pos--;
		    if(arr[pos]=='1'){
		        total=total+multi;
		    }
		    multi=multi*2;
		}
		putchar(total);
	    }
	}else{
            printf("Check your file for non-digit characters.\n");
	    exit(1);
	}
    }
}

