#include <stdio.h>
int main()
{
float rupees, dollars;
printf("Enter the amount in rupees: ");
scanf("%f",&rupees);
dollars= rupees*(1/81.96);
printf("%f rupees equals %f dollars ",rupees,dollars);
return 0;
}