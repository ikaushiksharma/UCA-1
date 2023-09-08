#include<stdio.h>
long long int factorial(int N)
{
    long long ans = 1;
    int i;
    for(i=1; i <= N; i++)
    ans *= i;
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    long long int res=factorial(n);
    printf("%lld",res);
}
