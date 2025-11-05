#include <stdio.h>
int main()
{
int a[3][3];
int Upper = 1, Lower = 1;
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
for (int j = 0; j < 3; j++)
{
printf("%4d",a[i][j]);
}
printf("\n");
}
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++){
if (i > j && a[i][j] != 0)
Upper = 0;
if (i < j && a[i][j] != 0)
Lower = 0;
}
}
if (Upper == 1 && Lower == 0)
printf("Upper Triangular Matrix\n");
else if (Upper == 0 && Lower == 1)
printf("Lower Triangular Matrix\n");
else if (Upper == 1 && Lower == 1)
printf("Diagonal Matrix\n");
else
printf("Neither Upper nor Lower Triangular Matrix\n");
return 0;
}
