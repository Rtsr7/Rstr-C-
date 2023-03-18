#include <stdio.h>
int average(int n1, int n2, int n3){
    return (n1+n2+n3)/3;
}
int main(){
    int n1,n2,n3;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("The average of the three numbers is: %d",average(n1,n2,n3));
    return 0;
}

