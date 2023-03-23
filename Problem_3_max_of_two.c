#include <stdio.h>
int main(){

    float a,b;
    printf("\nEnter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    if(a==b){
        printf("\n%.2f and %.2f are equal",a,b);
    }
    else if(a>b){
        printf("\n%.2f is greater",a);
    }
    else if(b>a){
        printf("\n%.2f is greater",b);
    }
    else{
        printf("\nError\n\tYou didnt enter a number");
    }
    return 0;
}