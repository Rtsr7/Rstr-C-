//Write a program using pointers to compute the sum of all elements in an array

#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},sum=0,*ptr=arr;
    for(int count=0;count<10;count++){
        sum+=*ptr;
        printf("\n%u",*ptr);
        ptr++;
    }
    printf("\nSum is: %d",sum);
    return 0;
}