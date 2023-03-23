#include <stdio.h>
int main(){
    int n,max;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\nEnter upto which number the table is to be printed: ");
    scanf("%d",&max);
    for(int i=0;i<=max;i++){
        printf("\n%d X %d= %d",n,i,n*i);
    }
    return 0;
}