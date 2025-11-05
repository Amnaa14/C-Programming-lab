#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter number of rows: ");
scanf("%d",&n);for(i=n;i<=n;i--)
{
for(j=i;j>n;j--)
{
printf(" ");
}
for(int k=j;k<i;k++)
{
printf("%d",k);
k++;
}
printf("\n");
}
return 0;
}
