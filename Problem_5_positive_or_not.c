#include <stdio.h>
int main(){
    float a;
    printf("Enter a number: ");
    if(scanf("%f",&a)!=0){  //checks if the user entered number was successfully read by the float. If that happens it returns 1 else it returns 0 so if user enters something other than a number it will return 0
        if(a==0){
            printf("\n%.2f is neither positive nor negative",a);
        }
        else if(a<0){
            printf("\n%.2f is negative",a);
        }
        else if(a>0){
            printf("\n%.2f is positive",a);
        }
    }
    else{
        printf("\nNo number was entered");
    }
    return 0;
}