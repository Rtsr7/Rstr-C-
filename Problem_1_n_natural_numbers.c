#include <stdio.h>
int main(){

    int n;
    //char c;
    printf("\nEnter the value of n: ");
    //scanf("%d%c",&n,&c);// this will not work since the %c reads the newline character as an input after we press enter key after entering a number
    //scanf("%d %c",&n,&c);//this will work since a space before %c tells the compiler to skip any whitespaces or newlines in input
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}