#include<stdio.h>
int main()
{
int flag=1;
int arr[3][3];
int transpose[3][3];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("Enter value of row %d and column %d:",i+1,j+1);
scanf("%d",&arr[i][j]);
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
transpose[j][i]=arr[i][j];
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(transpose[j][i]!=arr[i][j]){
flag=0;
}
}}
if(flag==1)
printf("It is symmetric");
else
printf("It is not symmetric");
return 0;
}
