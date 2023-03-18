#include <stdio.h>
int main(){
    int n1, n2, *s1, *s2;
    s1=&n1;
    s2= &n2;
    printf("Enter the value of n1: ");
    scanf("%d",s1);
    printf("Enter the value of n2: ");
    scanf("%d",s2);
    printf("Sum: %u",*s1+*s2);

    return 0;
}