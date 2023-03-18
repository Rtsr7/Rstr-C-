#include <stdio.h>
int main(){
    int remainder, n,ncopy;
    printf("Enter the number: ");
    scanf("%d",&n);
    ncopy=n; //creating a copy of n for later use
    while(n!=0){
        remainder= n%10; // extracting the last digit for ex if n=556 then the n%10 will be 55.6 and return 6 as the remainder which is also the last digit
        n/=10; //dividing n by 10 and storing the new value in n
        printf("%d",remainder); // prints the reversed number
        
    }
   

    return 0;
}