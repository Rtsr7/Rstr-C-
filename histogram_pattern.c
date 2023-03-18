#include <stdio.h>
int main(){
    int count=0,n,elements;
    printf("Specify the length of the array: ");
    scanf("%d",&n); // Taking the maximum length of array from the user
   int arr[n+1]; //n+1 is written for a null zero space;
   while(count<(sizeof(arr)/sizeof(arr[0]))-1){ //calculating the size of array 
   //The size of array means the size in bytes divided by the size of each element which will return the number of elements in the array
   //here -1 is done to exclude the null zero space in the loop
        printf("Enter the numbers: ");
        scanf("%d",&(arr[count])); //storing all the numbers in the array given by the user
        //The counter loops from 0 to 1 less than the size of the array 
        count++;
   }
   //For excluding the extra , in the first element which was earlier coming as ,1,2,3,4,5
    for(elements=0;elements<n;elements++){
        if(elements==0){
            printf("%d",arr[elements]); //this means when index is 0 dont print the , and just print the value
        }
        else{
        printf(",%d",arr[elements]); // else print the , with the value 
    }}
    // To print them in histogram form
    for(elements=0;elements<n;elements++){
        if(elements==elements){
            printf("%d %d"*",elements,elements)
        }
    }

    return 0;
}