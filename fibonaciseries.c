#include <stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){

        return 1;
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
    
}
int main(){
    int n, lines;
    printf("Enter the number of terms to be displayed in fibonacci series: ");
    scanf("%d",&n);
    for(lines=0;lines<n;lines++){
    printf("%d ",fibonacci(lines));
    }
    
    return 0;
}