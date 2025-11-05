#include<stdio.h>
int main()
{
int sum=0;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
printf("Original Array: ");
for(int i=0;i<=9;i++)
{
printf("%d\t",arr[i]);
}
printf("\nReverse Array: ");
for(int j=9;j>=0;j--)
{
printf("%d\t",arr[j]);
sum=sum+arr[j];
}
printf("\nSum of all elements in the reversed array:%d",sum);
return 0;
}
