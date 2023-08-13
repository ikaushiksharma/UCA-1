#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr=(int*)(malloc(sizeof(int)*3));	
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    int *newArr=(int*)(realloc(arr,50));
    newArr[3]=5;
    newArr[4]=6;
    for(int i=0;i<50;i++) printf("%d",newArr[i]);
    return 0;   
}
