#include <stdio.h>
int main(){

    int *ptr,a=5;
    ptr=&a;

    printf("%u",ptr);
    ptr++; // adds 4 to ptr because size of int in this compiler is 4 bytes
    printf("\n%u",ptr);
    ptr+=2; //adds 8 to ptr because size of int is 4 and plus= 2 means the addition of ptr+size*2

    printf("\n%u",ptr);

    ptr--; //subtracts 4
    printf("\n%u",ptr);
    ptr-=2; //subtracts 8
    printf("\n%u",ptr);

    int b=5,*ptr2= &b;
    printf("\n%u",ptr2);
    printf("\n%u",ptr-ptr2); // returns 1 if there was subraction of 4 bytes 
    // retuns 2 if there was subtraction of 8 bytes
    ptr++;
    printf("\n%u",ptr-ptr2); // returns 1 if there was subraction of 4 bytes 
    //here 1 and 2 means the number of elements between the pointers When pointers are subtracted they return the number of elements between them


    return 0;
}