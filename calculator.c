#include <stdio.h>
float sum(float number1, float number2), subtract(float number1, float number2),divide(float number1, float number2), multiply(float number1, float number2);

int main()
{
    float n1, n2, result;
    char operator;
    printf("Enter the two numbers: ");
    scanf("%f%f", &n1, &n2);
    printf("Enter the operator: ");
    getchar();
    scanf("%c", &operator);

    if (operator== '+')
    {
        result = sum(n1, n2);
    }
    if (operator== '-')
    {
        result = subtract(n1, n2);
    }
    if (operator== '/')
    {
        result = divide(n1, n2);
    }
    if (operator== '*' || operator== 'x')
    {
        result == multiply(n1, n2);
    }
    printf("%.2f", result);
    return 0;
}

 float sum(float number1, float number2)
{
    float result;
    result = number1 + number2;
    return result;
}

 float subtract(float number1, float number2)
{
    float result;
    // if (number1 > number2)
    // {

    //     result = number1 - number2;
    // }
    // else if (number1 < number2)
    // {
    //     result = number2 - number1;
    // }
    result= number1-number2;
    return result;
}


float divide(float number1, float number2)
{
    float result;
    result = number1 / number2;
    return result;
}

float multiply(float number1, float number2){
    int result= number1*number2;
    return result;
}
