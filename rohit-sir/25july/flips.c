// 25-07-23
#include<stdio.h>

int main(){
	int a=11;
	int b=13;
	int xor=a^b;
	int res=0;
	while(xor>0){
		res+=xor&1;
		xor=xor>>1;
	}
	printf("%d",res);
	return 0;
}
