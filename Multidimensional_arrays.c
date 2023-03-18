// Store the marks of n students in s number of subjects in the form of a multidimensioanl array

// #include <stdio.h>
// int main()
// {
//     int n, s, countn, counts;
//     printf("Enter the number of students: ");
//     scanf("%d", &n);
//     printf("Enter the number of subjects: ");
//     scanf("%d", &s);

//     int arr[n][s];
//     for (countn = 0; countn < n; countn++)
//     {
//         for (counts = 0; counts < s; counts++)
//         {
//             printf("\nEnter the marks of student %d in subject %d: ", countn + 1, counts + 1);
//             scanf("%d", &arr[countn][counts]);
//         }
//     }
//     // printing the array
//     for (countn = 0; countn < n; countn++)
//     {
//         for (counts = 0; counts < s; counts++)
//         {
//             printf("\nThe marks of student %d in subject %d is %d", countn + 1, counts + 1, arr[countn][counts]);
//         }
//     }

//     return 0;
// }

// Doing the same with a 4d array

// Store the marks of n students from a areas in i institutes in s subjects in the form of a 4 dimensional array

#include <stdio.h>
int main()
{
    int n_students, n_subjects, n_areas, n_institues, countn, counts, counta, counti;
    printf("\nEnter the number of students: ");
    scanf("%d", &n_students);
    printf("\nEnter the number of subjects: ");
    scanf("%d", &n_subjects);
    printf("\nEnter the number of participating institutes: ");
    scanf("%d", &n_institues);
    printf("\nEnter the number of areas: ");
    scanf("%d", &n_areas);

    int arr[n_areas][n_institues][n_students][n_subjects];

    for (counta = 0; counta < n_areas; counta++)
    {
        for (counti = 0; counti < n_institues; counti++)
        {
            for (countn = 0; countn < n_students; countn++)
            {
                for (counts = 0; counts < n_subjects; counts++)
                {
                    printf("\nEnter the marks of student %d in subject %d studying in institute %d from area %d: ", countn + 1, counts + 1, counti + 1, counta + 1);
                    scanf("%d", &arr[counta][counti][countn][counts]);
                }
            }
        }
    }

    for (counta = 0; counta < n_areas; counta++)
    {
        for (counti = 0; counti < n_institues; counti++)
        {
            for (countn = 0; countn < n_students; countn++)
            {
                for (counts = 0; counts < n_subjects; counts++)
                {

                    printf("\nThe marks of student %d in subject %d studying in institute %d from area %d is: %d", countn + 1, counts + 1, counti + 1, counta + 1, arr[counta][counti][countn][counts]);
                }
            }
        }
    }

    return 0;
}