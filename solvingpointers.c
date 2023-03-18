// Problem one-- printing value from address

// #include <stdio.h>
// int main(){
// int a=5, *address;
// address=&a;
// printf("Value of a is: %u",*address);
// return 0;
// }

// Problem 2-- check if the address of a variable and the same variable when passed into a function are same or not
// #include <stdio.h>

// int new(int i)
// {

//     int *address = &i;
//     return address;
// }
// int main()
// {

//     int i;
//     printf("Address of i: %d", &i);
//     // After passing in the function
//     printf("\nAddress: %d", new (i));
//     return 0;
// }


//Problem 3-- make a variable 10 times its original value with the help of reference call from a function

// #include <stdio.h>
// int tentimes(int a);
// int main(){

//     int n;
//     printf("Enter a value: ");
//     scanf("%d",&n);
//     printf("\nAfter multiplying by 10: %d",tentimes(n));

//     return 0;
// }
// int tentimes(int a){
//     int *ptr=&a;
//     return *ptr*10;
// }



//Problem 4

#include <stdio.h>
int sumandavg(int a, int b,int *addsum,int *addavg){
    int sum= a+b;;
    float avg= sum/2;
    addsum=&sum;
    addavg=&avg;

    
}
int main(){
    int a, b,sum,avg;
    
    scanf("%d%d",&a,&b);
    sum= sumandavg(a,b,&sum,&avg);
    avg= sumandavg(a,b,&sum,&avg);
    printf("\nSum: %d\nAverage: %d",*(sum),*(avg));
    return 0;
}