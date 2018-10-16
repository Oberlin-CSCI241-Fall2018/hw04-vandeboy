#include<stdio.h>
#include<stdlib.h>
#include "getnum.h"
/*Peng Gu
 * 10/15/2018
 * toocta.c
 * This program reads in a sequence of number and outputs them one per line in base 8.
 */

int main(){
    int num=(int)getnum();
    int a;
    while(0==(a=getEnd())){
	if(0==(a=getFail())){
            int numer=8;
 	    printf("0");
	    if(num==0){
	        printf("0");
  	    }else{
	        while(numer<=num){
	            numer=numer*8;
                }
	        numer=numer/8;
	        while(numer>=1){
	            printf("%d",num/numer);
		    num=num%numer;
	            numer=numer/8;
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
