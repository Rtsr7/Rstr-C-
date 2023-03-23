#include <stdio.h>
int main(){
    long long n;
    printf("Enter the value of n: ");
    scanf("%lld",&n);
    for(int i=n-1;i>1;i--)
    {
        n*=i;
    }
    if(n==0){
        printf("Factorial is: %lld",n+1);
    }
    else{
    printf("\nFactorial is %lld",n);
    }
    return 0;
}