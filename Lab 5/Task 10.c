#include<stdio.h>
int main()
{
int x, y,z;
printf("Enter three integers: ");
scanf("%d %d %d",&x,&y,&z);
if(x>y)
{
if(x>z)
printf("The largest number is %d",x);
else
printf("The largest number is %d",z);
}
else
{
if(y>z)
printf("The largest number is %d",y);
else
printf("The largest number is %d",z);
}
return 0;
}
