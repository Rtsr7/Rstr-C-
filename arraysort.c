// Sort an array of numbers using bubble sort

// #include <stdio.h>

// void sorted(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++) //outer for loop for the indexes of elements runs till size -1 to provide room for null zero
//     {
//         for (int j = 0; j < size-1; j++)// inner for loop
//         {
//             if (arr[j] > arr[j + 1]) //j is the first element and j+1 is the next element and for each iteration of j the element beside it will be compared
//             {
//                 int temp = arr[j]; //swapping the greater value to the place of j+1 and moving the lesser element in the place of j from the place of j+1
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// void print(int arr[], int size) //function for printing the array
// {
//     for (int i = 0; i < size; i++)
//     {

//         printf("%d ", arr[i]);
//     }
// }
// int main()
// {

//     int arr[] = {1, 25, 34, 4356, 6574, -15, 12, 12, 4, 23, 3454653, 465, 0, 132, 1};

//     int size = sizeof(arr) / sizeof(arr[2]);

//     sorted(arr, size);

//     print(arr, size);

//     return 0;
// }

// Sort an array of characters using bubble sort

// #include <stdio.h>

// void sort(char arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp;
//                 temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// void print(char arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%c ", arr[i]);
//     }
// }
// int main()
// {

//     char arr[] = {'a', 'd', 'c', 'b', 'g'};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     sort(arr, size);
//     print(arr, size);

//     return 0;
// }

// Sort an array of characters ignoring the case sensitivity using bubble sort

// #include <stdio.h>
// #include <ctype.h> //this header file contains functions to convert characters to lowercase

// void sort(char arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - 1; j++)
//         {
//             if (tolower(arr[j]) > tolower(arr[j + 1]))
//             { // tolower() converts every character to       lowercase and then the loop compares the ascii value and places it accordingly
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }
// void print(char arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%c ", arr[i]);
//     }
// }
// int main()
// {

//     char arr1[] = {'a', 'b', 'D', 'E', 'A', 'c', 'G', 'h', 'b', 'C', 'E'};

//     int size = sizeof(arr1) / sizeof(arr1[0]);
//     sort(arr1, size);
//     print(arr1, size);

//     return 0;
// }

// Sort an array of numbers using bubble sort. Take the input for the array from the user


// #include <stdio.h>

// void arrinput(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter an element: ");
//         scanf("%d", &arr[i]);
//     }
// }

// void sort(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// void print(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// int main()
// {
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     int arr[size];

//     arrinput(arr, size);
//     sort(arr, size);
//     print(arr, size);

//     return 0;
// }




