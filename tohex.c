#include<stdio.h>
#include<stdlib.h>
#include "getnum.h"
/*Peng Gu
 * 10/15/2018
 * tohex.c
 * This program reads in a sequence of number and outputs them one per line in base 16.
 * It also accepts both upper and lower case in hex.
 */

int main(){
    int num=(int)getnum();
    int a;
    while(0==(a=getEnd())){
	if(0==(a=getFail())){
            int numer=16;
 	    printf("0x");
	    if(num==0){
	        printf("0");
  	    }else{
	        while(numer<=num){
	            numer=numer*16;
                }
	        numer=numer/16;
	        while(numer>=1){
	            printf("%d",num/numer);
		    num=num%numer;
	            numer=numer/16;
                }
	    }
	    printf("\n");
	}else{
	    printf("ERROR\n");
	}
	num=getnum();
    }
    return 0;
}
