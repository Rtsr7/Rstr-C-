#include <stdio.h>
int main(){
    int a=5;
    int *ptr= &a;
    printf("\n%u",ptr);
    ptr++; //int data type has size of 4 bytes so everytime the ptr is incremented by 1, 4 is added to it

    printf("\n%u",ptr);
    ptr++;
    printf("\n%u",ptr);
    ptr=ptr+2; // this works like ptr = ptr + 2 and this 2 is multiplied by 4
    //so the operation is carried out and the number by which it is incremented or decremented or divided or multiplied is again multiplied by the size of the data type to get the final result
    printf("\n%u",ptr);
    char b= 'a';
    char *ptr2= &b;

    printf("\n%u",ptr2);
    ptr2++; // here the size of char data type is 2 bytes so the ptr is increased as ptr= ptr+1*sizeofdatatype 
    
    printf("\n%u",ptr2);

    return 0;
}