#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void* customCalloc(int a,int b){
	void* ptr=malloc(a*b);
	char* arr=(char*)ptr;
	for(int i=0;i<b*a;i++) arr[i]=0;
	return ptr;
}

int main(){
	int* arr=(int*)customCalloc(5,sizeof(int));
	bool* barr=(bool*)customCalloc(5,sizeof(bool));
	printf("%d",arr[0]);
	printf("%d",barr[0]);
	return 0;
}
