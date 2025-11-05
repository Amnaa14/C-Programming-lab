#include<stdio.h>
int main()
{
int a[3][3],original[3][3];
int temp;
int same=1;
printf("Enter elements of 3x3 matrix:");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
original[i][j]=a[i][j];
}
}
for(int i=0;i<3;i++)
{
for(int j=i+1;j<3;j++){
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3/2;j++)
{
temp=a[i][j];
a[i][j]=a[i][2-j];
a[i][2-j]=temp;
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(a[i][j]!=original[i][j])
{
same=0;
break;
}
}
}
if(same)
printf("Rotated matrix is same as original matrix\n");
elseprintf("Rotated matrix is different from original matrix\n");
printf("Rotated matrix is:\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%4d",a[i][j]);
}
printf("\n");
}
return 0;
}
