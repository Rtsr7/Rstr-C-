#include <stdio.h>
int main(){

    int a=76;
    int *i=&a; // i is a pointer variable of the type int which stores the address of a
    //%u is the format specifier for pointers
    // &i is the same as &a
    //*i is not the same as *a
    //*i is the same as the value in a
    //*(&a) gives the value in a
    // * is the value at operator and the & is the address of operator
    // printf("%u",*(&a));

    // int *s=&i;
    // printf("\n%u", &s); //gives the memory address of s
    // printf("\n%u", &i); //gives the memory address of s
    // printf("\n%u", &a); //gives the memory address of s
    // printf("\n%u", i); //gives the value of i same as the address of a
    // printf("\n%u",*(*(&i))); //gives the value at the value at i
    
    // printf("\n%u", s); //gives the value of s same as the address of i

    // Pointer inside pointer 

    int b=5, *s1,**s2,***s3, values1, values2, values3, directtob;
    s1= &b;
    s2= &s1;
    s3= &s2;


    // for accessing the value of b directly from s3 
    directtob= *(*(*(*(&s3))));
    printf("\n%u",directtob);
    printf("\n%u",*s1); //prints the value at address s1
    printf("\n%u",*s2); //prints the value at address s1
    printf("\n%u",*s3); //prints the value at address s1
    printf("\n%u",&s2); //prints the address s2
    printf("\n%u",s3); //prints the address s2
    return 0;
}
