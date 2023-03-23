/*
formula for quadratic roots 

-b+-bsquare-4ac/2a
this is the formula for both the roots
discriminant= bsquare-4ac

conditions for roots
if discriminant>0
root1= -b+square root of discriminant/2a
root 2= -b + square root of discriminant/2a

if discriminant=0
root1= root2 = -b/2a

if discriminant<0
root1= -b/2a - square root of discriminant/2a * i
root2= -b/2a + square root of discriminant/2a *i
*/

#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,real,imaginary,root1,root2,discriminant;
    printf("\nEnter the coefficient of a: ");
    scanf("%lf",&a);
    printf("\nEnter the coefficient of b: ");
    scanf("%lf",&b);
    printf("\nEnter the coefficient of c: ");
    scanf("%lf",&c);
    discriminant= b*b-(4*a*c);
    real= -b/(2*a);
    imaginary= sqrt(discriminant)/(2*a);
    
    if(discriminant==0){
        root1=real;
        root2=real;
        printf("\nRoot1: %.2lf\nRoot2: %.2lf",root1,root2);
    }
    else if(discriminant>0){
        root1= real+imaginary;
        root2= real-imaginary;
        printf("\nRoot1: %.2lf\nRoot2: %.2lf",root1,root2);
    }
    else if(discriminant<0){
    imaginary= -sqrt(-discriminant)/(2*a); //the - before discriminant changes the negative value of discriminant to positive while calculation as - of - is positive and the - befpre the sqrt is used to display the result as a negative number if the - sign is removed from sqrt it will show the result without a - sign but if the - is removed from discriminant it will return NaN values which are not a number values
    
        root1= real-imaginary;
        root2= real+imaginary;
        printf("\nRoot1: %.2lfi\nRoot2: %.2lfi",root1,root2);
    }
    else{
        printf("\nError enter correct coefficients");
    }

    return 0;
}