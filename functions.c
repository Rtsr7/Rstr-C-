#include <stdio.h>
// way to create function
void hello()
{
    printf("\nHello"); // function definition
}

void hello2(); // another function
void collection();
int main()
{
    printf("Initializing hello\n");
    hello();      // function call
    hello2();     // another function call
    collection(); // calling both the functions at the same time
    return 0;
}

void hello2()
{
    printf("\nHello2"); // function definition
}

void collection()
{
    hello();
    printf("\nthis is a collection of the two functions");
    hello2(); // function inside a function
}

// functions should be declared above the main function first and then the function definition can be written anywhere in the code outside of the main if the function is to be accessed globally or it can be written inside the main if access to be done locally
