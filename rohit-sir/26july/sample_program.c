#include<stdio.h>
#include "header.h"

int main(){
	char str[20];
	scanf("%s",str);
	if(isPalindrome(str)==1){
		printf("true\n");
	}else{
		printf("false\n");
	}
	return 0;
}
