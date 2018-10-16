/* Peng Gu 
   10/09/2018 
   This program counts the frequencies of each characters in the Alphabet from a text
   file, shows the most frequent and least frequent character, 
   and it ignores upper and lower cases.
   */
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#define LENGTH 256

int main() {
    int input=0;
    int arr[LENGTH];
    int index;
    int i = 0;
    while(i<26){
	arr[i]=0;
	i++;
    }
    while(EOF != (input = getchar())){
        index = input - 'a';
	if(index<0){
	    arr[index+32]++;
	}else{
	    arr[index]++;
	}
    }
    i=1;
    int total=arr[0];
    int big=arr[0];
    int bChar=0;
    int small=arr[0];
    int sChar=0;
    while(i<26){
	total=total+arr[i];
	if(big<arr[i]){
	    big=arr[i];
	    bChar=i;
	}
	if(arr[i]!=0&&small>arr[i]){
	    small=arr[i];
	    sChar=i;
	}
	i++;
    }
    i=0;
    printf("char     Frequencies   Percentage\n");
    while(i<26){
	putchar(i+'a');
	printf(":           %d        %.4lf\n", arr[i], (double)arr[i]/total*100);
	i++;
    }
    printf("Maximum character(s): "); 
    putchar(bChar+'a'-32);
    printf("\n");
    printf("Minimum character(s): "); 
    putchar(sChar+'a'-32);
    printf("\n");
    return 0;
}
