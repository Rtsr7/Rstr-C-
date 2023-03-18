#include <stdio.h>

#define MAX_DIGITS 10000

void multiply(int res[], int x, int *size) {
    int carry = 0;
    for (int i = 0; i < *size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry > 0) {
        res[*size] = carry % 10;
        carry /= 10;
        (*size)++;
    }
}

void factorial(int n) {
    int res[MAX_DIGITS] = {1};
    int size = 1;

    for (int i = 2; i <= n; i++) {
        multiply(res, i, &size);
    }

    printf("%d! = ", n);
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", res[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number between 1 and 1000: ");
    scanf("%d", &n);

    if (n < 1 || n > 1000) {
        printf("Invalid input.\n");
        return 1;
    }

    factorial(n);

    return 0;
}
