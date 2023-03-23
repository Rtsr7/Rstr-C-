#include <stdio.h>
int main(){
    char a;
    printf("\nEnter a letter: ");
    scanf("%c",&a);
    int converted= (int)a;
    switch(converted)
    {
        case 65:
        case 69:
        case 73:
        case 79:
        case 85:
        case 97:
        case 101:
        case 105:
        case 111:
        case 117:
        
        printf("%c is a vowel",a);
        break;
        
        case 34 ... 64:
        
            printf("\n%c is neither a consonant nor a vowel",a);
            break;
         
        case 123 ... 255:
        
            printf("\n%c is neither a consonant nor a vowel",a);
            break;
         
        default:
        
            printf("\n%c is a consonant",a);
        
    }
    return 0;
}