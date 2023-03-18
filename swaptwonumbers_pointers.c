#include <stdio.h>
int main()
{
    int n1, n2, *s1, *s2, swapped;
    s1= &n1;
    s2= &n2;
    printf("Enter number 1: ");
    scanf("%d",s1);
    printf("Enter number 2: ");
    scanf("%d",s2);
    swapped= *s1;
    s1= *s2;
    s2= swapped;
    printf("Swapped numbers: %u, %u", s1,s2);
    return 0;
}


// Without pointers

// #include <stdio.h>
// int main(){
//     int n1, n2;
//     printf("Enter first number: ");
//     scanf("%d",&n1);
//     printf("Enter second number: ");
//     scanf("%d", &n2);
//     printf("\nBefore swap \n num1: %d\n num2: %d\nAfter swap \n num1: %d\n num2: %d",n1,n2,n2,n1);
//     return 0;
//     }