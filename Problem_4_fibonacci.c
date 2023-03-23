/*
The Fibonacci series is a sequence of numbers in which each number (Fibonacci number) is the sum of the two preceding numbers. The series starts with 0 and 1, and each subsequent number is the sum of the previous two numbers. The first few numbers in the series are:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, ...
*/

#include <stdio.h>
int main() {
    int n, i, a = 0, b = 1,sum;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d\n", a);
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}
