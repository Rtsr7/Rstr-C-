#include <stdio.h>

typedef struct
{
    char student_name[25];
    int marks;
} s;
int main()
{
    // adding values to struct for each student

    s student1 = {"S1", 50};
    s student2 = {"S2", 55};
    s student3 = {"S3", 94};
    s student4 = {"S4", 25};

    // creating an array with those structs

    s studentarr[] = {student1, student2, student3, student4};
    for (int i = 0; i < sizeof(studentarr) / sizeof(studentarr[0]); i++)
    {
        printf("%-12s%d\n", studentarr[i].student_name, studentarr[i].marks);
    } // the -12 before the s makes the string left justified to 12 spaces to the right
    return 0;
}