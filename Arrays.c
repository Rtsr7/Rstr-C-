#include <stdio.h>
int main()
{
    // Creating an array
    // syntax
    // datatype arrayname[size]={element,element,element,element};
    // datatype arrayname[size]; // initializing array
    // datatype arrayname[size]={}; //empty array
    // Size means the number of elements to be stored in the array plus 1
    // the plus 1 is for null zero at the end of the array It is reserved by the memory

    int array1[10] = {1, 23, 4, 54, 6, 634, 5};
    printf("\n%d", array1[0]); // prints the first element of the array
    printf("\n%d", array1);    // doesnt work it prints the address of the array instead of printing the values in the array
    printf("\nAddress of array 1: %d", array1);

    printf("\n%d", array1[2]);
    // Changing the elements in the array
    array1[2] = 100;
    printf("\n%d", array1[2]);

    // For printing the whole array we need the help of loops
    // If array size is known--
    int array2[5];
    array2[0] = 1;
    array2[1] = 2;
    array2[2] = 3;
    array2[3] = 4;
    array2[4] = 5;

    int counter;
    for (counter = 0; counter < 5; counter++)
    {
        // printf("\n%d item: %d",counter,array2[counter]);
        printf("\n%d item: %d", counter + 1, array2[counter]); // if we dont add counter+1 it prints the original index value which starts from 0 in every array and that doesnt match the item number for a normal user
    }


    // If array size is not known

    int size;
    printf("\nEnter the size of array: ");
    scanf("%d",&size);
    int count;
    int arr[size];
    for(count=0;count<size;count++){

    // Taking user input for the array elements
        printf("\nEnter the element: ");
        scanf("%d",&(arr[count]));
        
        //storing the elements given by the user in every iteration of count starting from 0 as long as its less than array length
    }

    for(count=0;count<size;count++){
        printf("\nItem %d: %d",count+1,arr[count]);
    }
   
    return 0;
}