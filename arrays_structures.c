#include <stdio.h>
int main(){
    char a1[]= {'h','e','l','l','o'};
    int a= sizeof(a1);
    printf("%d",a);

    float a2[]= {5.3,5.335,64.5,65.4,64.4,34.454,45.65};
    printf("%f",sizeof(a2));
    return 0;
}