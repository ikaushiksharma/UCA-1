#include<stdio.h>
#include<math.h>

int fastMultiply(int x,int y,int n){
	if(n==0) return 0;
	if(n==1) return x*y;
	int xl= x>>n/2;
	int xr= x & (1<<n/2)-1;
	int yl= y>>n/2;
	int yr= y & (1<<n/2)-1;
	printf("%d, %d, %d, %d \n",xl,xr,yl,yr);
	int A=fastMultiply(xl,yl,n/2);
	int B=fastMultiply(xl+xr,yl+yr,n/2);
	int C=fastMultiply(xr,yr,n/2);
	return ((1<<n) *A) + (1<<n/2)*(B-A-C)+C;
}

int main(){
	int x;
	scanf("%d",&x);
	int y;
	scanf("%d",&y);
	int max=x>y?x:y;
	int n=(int)log2(max)+1;
	printf("%d",fastMultiply(x,y,n));
	return 0;
}

