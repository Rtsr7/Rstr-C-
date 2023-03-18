// #include <stdio.h>
// double main(){

//     printf("hello");
   


//     return 809534098453380945;
//     return 2.6;
// } 

// //this also works return 0 and int main is the standard not the rules


#include <stdio.h>
int main(){

    char inputbyuser;
    printf("Enter here: ");
    scanf("%c",&inputbyuser);
    if(inputbyuser>=97&&inputbyuser<=122){
        printf("You entered lowercase character");

    }
    else if(inputbyuser>=65&&inputbyuser<=90){
        printf("You entered uppercase character");

    }
    else{
        printf("Neither uppercase nor lowercase");
    }

    return 0;
}

