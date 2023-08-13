#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	arr[600]=12;
	printf("%d",arr[600]);
	return 0;
}
