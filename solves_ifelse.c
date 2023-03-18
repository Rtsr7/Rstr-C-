#include <stdio.h>

int main() {
    int first = 105; // The first integer between 100 and 200 that is divisible by 7
    int last = 196; // The last integer between 100 and 200 that is divisible by 7
    int count = (last - first) / 7 + 1; // Number of integers between first and last that are divisible by 7
    int sum = (first + last) * count / 2; // Sum of integers between first and last that are divisible by 7
    printf("\nNumber of integers divisible by 7: %d", count);
    printf("\nSum of integers divisible by 7: %d", sum);
    return 0;
}
