#include <stdio.h>
int main()
{
    int remainder, n, ncopy, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    ncopy = n; // creating a copy of n for later use
    while (n != 0)
    {
        remainder = n % 10;         // extracting the last digit for ex if n=556 then the n%10 will be 55.6 and return 6 as the remainder which is also the last digit
        sum = sum * 10 + remainder; // when sum=0 its 0*10+remainder which is the last digit after that when sum=last digit its last digit*10 + second digit which is the second digit and similarly the first digit is also added
        n /= 10;                    // dividing n by 10 and storing the new value in n
    }

    // checking if palindrome or not
    // palindrome is a number which is the same when written from backwards as its when written from forwards
    if (sum == ncopy)
    { // we cant use n in place of ncopy because n became 0 after exiting the while loop so we need ncopy to access the previous value of n which was entered by the user
        printf("\n%d is a palindrome", sum);
    }
    else
    {
        printf("\n%d is not a palindrome", sum);
    }
    return 0;
}