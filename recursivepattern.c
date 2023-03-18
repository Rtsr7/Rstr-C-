#include <stdio.h>

/*
*
* * *
* * * * *
* * * * * * *
* * * * * * * * *
*/

int pattern(int s){
      int rows,cols;
      for(rows=1;rows<=s;rows++){
        for(cols=1;cols<=2*rows-1;cols++){
            printf("* ");
        }
        
        printf("\n");
      }
}

int main(){
       
    int nrow,result;
    printf("Enter the number of lines: ");
    scanf("%d",&nrow);
    result= pattern(nrow);
    
    return 0;
}