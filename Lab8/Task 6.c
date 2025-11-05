#include <stdio.h>
int main()
{
int a[3][3];
int transpose[3][3];
printf("Enter values of elements:\n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
scanf("%d", &a[i][j]);
}
}
printf("The matrix is:\n");
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++){
printf("%4d",a[i][j]);
}
printf("\n");
}
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
transpose[j][i]=a[i][j];
}
}
printf("The transpose of a matrix is:\n");
for (int i = 0;i<3; i++)
{
for (int j = 0;j<3;j++)
{
printf("%4d",transpose[i][j]);
}
printf("\n");
}
return 0;
}
