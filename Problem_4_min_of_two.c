#include <stdio.h>
int main(){
    float a,b;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    if(a==b){
        printf("\n%.2f and %.2f are equal",a,b);
    }
    else if(b<a){
        printf("\n%.2f is the minimum",b);
    }
    else if(b<a){
        printf("\n%.2f is the minimum",b);
    }
    else{
        printf("\nError\nNo number was entered");
    }

    return 0;
}