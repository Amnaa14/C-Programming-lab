#include<stdio.h>
int main()
{
int n;
printf("Enter order of matrix:");
scanf("%d",&n);
int arr[n][n];
int totalsum=0;
int i,j;
int mainsum=0;
int secsum=0;for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("Enter value of row %d and column %d:",i+1,j+1);
scanf("%d",&arr[i][j]);
}
if(i==j)
{
mainsum=mainsum+arr[i][j];
}
else if(i+j==n-1)
{
secsum=secsum+arr[i][j];
}
totalsum=mainsum[i][j]+secsum[i][j];
printf("The sum of diagonal is %d",totalsum);
return 0;
}
