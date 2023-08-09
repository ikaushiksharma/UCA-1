#include<string.h>
#include<stdbool.h>
bool isPalindrome(char str[]){
	int l=0;
	int h=strlen(str)-1;
	while(h>l){
		if(str[l++]!=str[h--]){
			return false;
		}
	}
	return true;
}
