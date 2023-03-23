#include <stdio.h>
int main(){

    int binary,decimal=0,base=1;
    printf("Enter the binary number: ");
    scanf("%d",&binary);
    for(binary;binary>0;binary/=10){
        decimal+= (binary%2)*base;
        base*=2;
    }
    printf("\nDecimal: %d",decimal);
    return 0;
}