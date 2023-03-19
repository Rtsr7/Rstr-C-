#include <stdbool.h>

typedef char this[25];
// we can predefine the meaning of some words by using the typedef which means define the type
// this line means define the word "this" to be used later in the whole program as a character array of 25 length

typedef struct new2
{
    char name[10];
    int age;
    float codes;

}s; //this word "s" will be used as the new name for calling the struct 
//this struct will also work even if we dont give any name to the struct

typedef struct 
{

    bool value;
    double length;

}s1; //this word "s" will be used as the new name for calling the struct 

#include <stdio.h>
int
main()
{
    this arr; // the word this can be used to make any 25 character array in this whole program
    printf("%d\n", sizeof(arr));

    s input2={"Restar",20,500.25};
    printf("\n%s",input2.name); 
    printf("\n%d",input2.age); 
    printf("\n%f",input2.codes); 


    s1 i={ 1>0, 2.4536345665456457567475645363563467834528957};
    printf("\n%d",i.value);
    printf("\n%.15lf",i.length);
    return 0;
}