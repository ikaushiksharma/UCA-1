#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	int cpy=num;
	int rev=0;
	while(cpy){
		rev=(rev<<1) | (cpy&1);
		cpy>>=1;
	
	}
	printf(rev==num?"true\n":"false\n");
	return 0;
}
