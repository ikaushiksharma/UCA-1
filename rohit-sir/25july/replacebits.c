#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int i;
	scanf("%d",&i);
	int j;
	scanf("%d",&j);
	int updated;
	scanf("%d",&updated);
	int ones=(~0);
	int a=ones<<(j+1);
	int b=(1<<i)-1;
	int mask= a | b;
	int ans=(num & mask)|(updated<<i);
	printf("%d\n",ans);
	return 0;

}
