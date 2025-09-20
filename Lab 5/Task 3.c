#include <stdio.h>
#include <math.h>
int main()
{
float num, result;
printf("Enter a number: ");
scanf("%f", &num);
result = sqrt(num);
printf("Square root of %.2f = %.2f\n", num, result);
return 0;
}
