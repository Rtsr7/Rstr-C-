//Create a 2d array by taking input from the user. Write a display function to print the contents of the array in the screen in the format {
    // {element,element}
    // {element,element}
    // {element,element}
    // {element,element}
// }

#include <stdio.h>

int display(int n, int s, int *arr[n][s]){

    int count,countin;
    for(count=0;count<n;count++){
        for(countin=0;countin<s;countin++){
            printf("\n{\n{%d,%d}\n}",arr[count][countin],arr[count][countin+1]);
        }
    }
    
}

int main(){
    int n, content, countn, countc,*arr1[n][content];
    
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter the number of contents within the inner array");
    scanf("%d",&content);
    int arr[n][content];
    arr1[&n][&content];
    for(countn=0;countn<n;countn++){
        for(countc=0;countc<content;countc++){
            printf("\nEnter content %d for inner array: ",countc+1);
            scanf("%d",&arr[countn][countc]);
        }
    printf("\n%d\n",arr[countc][countc+1]);
    }
    printf("\n%d",display(n,content,arr[n][content]));
    return 1;
}

