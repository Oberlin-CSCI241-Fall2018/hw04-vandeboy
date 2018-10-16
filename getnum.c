#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include"getnum.h"
/*Peng Gu
 *10/13/2018
 */
static int fail=0;
static int end=0;

int getFail(){
    return fail;
}

int getEnd(){
    return end;
}

long getnum(void){
    int arr[40]={[0 ... 39] = '\0'};
    int input;
    int startRead=0;
    int neg=0;
    int pos=0;
    int base=0;
    int total=0;
    int skip=1;
    fail=0;
    while(EOF != (input = getchar())){
    	if((input!=' '&&input!='\n')&&skip==0){
	    continue;
	}
	if((input==' '||input=='\n')&&skip==0){
	    return 0;
	}
	if((input==' '||input=='\n')&&startRead==0){
	    continue;
	}
	if(input=='-'&&startRead==0){
	    neg=1;
	    startRead=1;
	    continue;
	}
	if((input==' '||input=='\n')&&startRead==1){
	    break;
	}else{
	    if(isdigit(input) != 0||((input=='b'||input=='x')&&arr[pos-1]=='0')||(strchr("ABCDEFabcdef", input)&&arr[1]=='x')){
	        startRead=1;
		if(strchr("ABCDEF", input)){
		    input=input-'A'+':';
		}if(strchr("abcdef",input)&&arr[1]=='x'){
		    input=input-'a'+':';
		}
	        arr[pos]=input;
	        pos++;
	    }else{
		skip=0;
		startRead=0;
    		fail=1;
	    }
	}
    }
    if(EOF == input){
	end=1;
    }
    if(arr[0]=='0'){
	if(arr[1]=='b'){
	    base=2;
	    pos=2;
	}else{
	    if(arr[1]=='x'){
	        base=16;
	        pos=2;
	    }else{
		if(arr[1]=='\0'){
	            return 0;
	        }else{
		    base=8;
	            pos=1;
		}
	    }
	}
    }else{
	base=10;
	pos=0;
    }
    while(arr[pos]!='\0'){
	total=total*base+(arr[pos]-'0');
	pos++;
    }
    if(neg==1){
	total=(-1)*total;
    }
    return (long)total;
}
