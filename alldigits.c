#include <stdio.h>
int main(){
    int num,last,second,sum,original;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    original=num;
    last=num%10;
    num=num/10;
    second=num%10;
    num=num/10;
    sum=last+second+num;
    printf("The sum of the digits of %d is %d",original,sum);

    return 0;
}