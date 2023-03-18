#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, greatest;
    printf("Enter the four numbers: ");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    greatest = n1; // taking n1 as a reference
    if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        greatest = n2;
    }
    if (n3 > greatest)
    {
        greatest = n3;
    }
    if (n4 > greatest)
    {
        greatest = n4;
    }

    // not used else if because we need to run all the conditions at the same time
    printf("\n%.2f", greatest);

    return 0;
}