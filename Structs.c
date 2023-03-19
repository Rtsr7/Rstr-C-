#include <stdio.h>

struct New
{
    char name[25];
    int age;
    char symbol;

}; // this is the syntax of struct
// struct is the collection of many data types but it has no methods
// these are same as classes in other languages but without methods

struct new2
{
    int codes;
}; // we can have as many structs as we want

int main()
{
    struct New input1 = {"Restar", 20, '$'}; // calling a struct
    // three parameters were defined in struct so the values of the three parameters are given here

    printf("%s", input1.name); // calling one of the three parameters inside struct and printing the value

    printf("\n%d", input1.age); // calling one of the three parameters inside struct and printing the value

    printf("\n%c", input1.symbol); // calling one of the three parameters inside struct and printing the value

    struct new2 input2 = {100};
    printf("\n%d", input2); // prints the whole struct

    return 0;
}