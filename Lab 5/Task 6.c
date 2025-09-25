#include<stdio.h>
int main()
{
int x,y,z,max;
printf("Enter three numbers:\n");
scanf("%d %d %d",&x,&y,&z);
max=(x>y)?((x>z)?x:z):((y>z)?y:z);
printf("The largest number is %d",max);
return 0;
}
