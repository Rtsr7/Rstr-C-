#include <stdio.h>
int main(){
    int n,sum,last,second,originalnumber;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    originalnumber=n;
    last= n%10;

































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































    
    n=n/10;
    second= n%10;
    n=n/10;
    sum= last+second+n;
    printf("\nThe sum of the digits of %d is %d",originalnumber,sum);
     
    return 0;
}