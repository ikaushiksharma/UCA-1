#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int prod(int a,int b){
    return a*b;
}
int divide(int a,int b){
    return (b != 0) ? a / b : 0;
}
int main() {
    int (*p[4]) (int, int);
    p[0]=add;
    p[1]=sub;
    p[2]=prod;
    p[3]=divide;
    int n,a,b;
    scanf("%d%d%d",n,a,b);
    int res=p[n](a,b);
    printf("%d\n",res);
    return 0;
}
