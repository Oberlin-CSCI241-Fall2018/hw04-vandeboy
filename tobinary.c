#include<stdio.h>
#include<stdlib.h>
#include "getnum.h"
/*Peng Gu
 * 10/15/2018
 * tobinary.c
 * This program takes input from a text file and reads in a sequence of numbers
 * and then output them one per line in binary form.*/

int main(){
    int num=(int)getnum();
    int a;
    while(0==(a=getEnd())){
	if(0==(a=getFail())){
            int numer=2;
 	    printf("0b");
	    if(num==0){
	        printf("0");
  	    }else{
	        while(numer<=num){
	            numer=numer*2;
                }
	        numer=numer/2;
	        while(numer>=1){
	            printf("%d",num/numer);
		    num=num%numer;
	            numer=numer/2;
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
