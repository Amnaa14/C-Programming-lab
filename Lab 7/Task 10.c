#include<stdio.h>
int main()
{
int n;
printf("Enter number of elements:");
scanf("%d",&n);
int arr[n];
printf("Enter numbers:");
for(int i=0;i<n;i++)
{scanf("%d",&arr[i]);
}
printf("Array:");
for(int i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
int index,newvalue;
printf("\nEnter the index of the element you want to modify:");
scanf("%d",&index);
if(index<0||index>=n)
{
printf("Invalid Index");
return 1;
}
printf("Enter new value:");
scanf("%d",&newvalue);
arr[index]=newvalue;
printf("\nUpdated Array:");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
return 0;
}
