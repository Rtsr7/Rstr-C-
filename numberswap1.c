#include <stdio.h>
int main()
{
    int num1, thirdvar, num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    thirdvar=num1;
    num1=num2;
    num2=thirdvar;
    printf("After Swap: First: %d, Second: %d",num1,
    num2);
    return 0;
}