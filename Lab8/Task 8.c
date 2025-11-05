#include<stdio.h>
int main()
{
int a[3][3];
int even_count=0, odd_count=0;
int p_count=0, n_count=0, z_count=0;
printf("Enter elements of 3x3 matrix: ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Even elements: ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(a[i][j]%2==0)
{
even_count++;printf("%d ",a[i][j]);
}
}
}
printf("\nOdd elements: ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(a[i][j]%2!=0)
{
odd_count++;
printf("%d ", a[i][j]);
}
}
}
printf("\nPositive elements: ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(a[i][j]>0)
{
p_count++;
printf("%d ",a[i][j]);
}
}
}printf("\nNegative elements: ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(a[i][j]<0)
{
n_count++;
printf("%d ",a[i][j]);
}
}
}
printf("\nZero elements: ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(a[i][j]==0)
{
z_count++;
printf("%d ", a[i][j]);
}
}
}
printf("\n\nEven numbers=%d\nOdd numbers=%d\n",even_count,odd_count);
printf("Positive=%d\nNegative=%d\nZero=%d\n",p_count,n_count,z_count);
return 0;
}
