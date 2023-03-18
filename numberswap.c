#include <stdio.h>
int main(){
    int number, *pointer;
    printf("Enter a number: ");
    scanf("%d",&number);
    *pointer= &number;
    printf("%u",*(&pointer));


    return 0;
}