#include <stdio.h>
#include <math.h>
float celcius_to_fahrenheit(float celcius){
    float fahrenheit= ((9*celcius)/5)+32;
    return fahrenheit;
}

int main(){
  float celcius,fahrenheit;
  printf("Enter the celcius value: ");
  scanf("%f",&celcius);

  fahrenheit= celcius_to_fahrenheit(celcius);
  printf("\nFahrenheit value is:%.2f",fahrenheit);
    return 0;
}

