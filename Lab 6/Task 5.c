#include<stdio.h>
int main()
{
int fact=1,n;
printf("Enter a number:");
scanf("%d",&n);
if(n<0)
{
printf("Not defined for negative number!");
}
else
{
for(int i=1;i<=n;i++)
{
fact=fact*i;
}
printf("The factorial of %d is %d",n,fact);
}
return 0;
}
