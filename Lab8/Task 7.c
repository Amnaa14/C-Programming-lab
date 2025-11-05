#include <stdio.h>
int main()
{
int a1[2][2];
int a2[2][2];
int m[2][2];
printf("Enter values of matrix 1:");
for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 2; j++)
{
scanf("%d", &a1[i][j]);
}}
printf("The matrix 1 is:\n");
for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 2; j++)
{
printf("%2d",a1[i][j]);
}
printf("\n");
}
printf("Enter values of matrix 2:");
for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 2; j++)
{
scanf("%d", &a2[i][j]);
}
}
printf("The matrix 2 is:\n");
for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 2; j++)
{
printf("%2d",a2[i][j]);
}
printf("\n");
}
for (int i = 0; i < 2; i++)
{for (int j = 0; j < 2; j++)
{
m[i][j]=0;
for (int k = 0; k < 2; k++)
{
m[i][j]+=a1[i][k]*a2[k][j];
} }
}
printf("The multiplication of a matrix is:\n");
for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 2; j++)
{ printf("%4d",m[i][j]);
}
printf("\n");
}
return 0;
}
