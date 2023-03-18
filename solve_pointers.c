//Write a program to print the address of a variable and use this address to get the value of the variable

// #include <stdio.h>
// int main(){

//     int a=5, *b;
//     b=&a;
//     printf("%u",b); //printing address 
//     printf("\n%u",*(&a)); //printing value

//     return 0;
// }



//Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. 

// #include <stdio.h>
// int functions(int i);
// int main(){
//     int i;
//     printf("%d",&i);
//     printf("\n%u",functions(i));
//     return 0;
// }
// int functions(int i){
//      int *s= &i;
//     return s;
// }




#include <stdio.h>

int sumandavg(float a, float b){
    float sum;float avg;
    sum= a+b;
    printf("%.\n",sum);
    avg= sum/2;
    printf("%f",avg);
}

int main(){
     float a,b;
     printf("Enter the value of a: ");
     scanf("%f",&a);
     printf("Enter the value of b: ");
     scanf("%f",&b);
     printf("%f",sumandavg(a,b));
     return 0;    
}