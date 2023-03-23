#include <stdio.h>
int main(){
    int decimal,binary=0,remainder,base=1;
    printf("Enter the decimal number: ");
    scanf("%d",&decimal);
    for(decimal;decimal>0;decimal/=2){
        remainder= decimal%2;
        binary+= remainder*base; //here i is the base
        base*=10; //we are converting decimal to binary so we multiply the base by 10
    }
    printf("\nBinary: %d",binary);
    return 0;

}
