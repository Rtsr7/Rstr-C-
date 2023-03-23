#include <stdio.h>
int main(){
    int n,sum=0,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("\nSum of first %d natural numbers: %d",n,sum);
    return 0;
}