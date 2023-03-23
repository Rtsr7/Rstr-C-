#include <stdio.h>
int main(){
    int a;
    printf("\nEnter a number: ");
    scanf("%d",&a);
    if(a==0){
        printf("\n%d is both even and odd",a);
    }
    else if(a%2==0){
        printf("\n%d is even",a);
    }
    else{
        printf("%d is odd",a);
    }
    return 0;
}