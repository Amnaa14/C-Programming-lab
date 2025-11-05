#include<stdio.h>int main()
{
int a[10];
int n=10,num,remove;
printf("Enter product id: ");
for(int i=0;i<10;i++)
{ scanf("%d",&num);
if(num < 100 || num > 999) {
printf("Please enter a 3-digit number.\n");
i--;
} else {
a[i] = num;
}
}
printf("Enter the product id you want to remove:");
scanf("%d",&remove);
for(int i=0;i<n;i++)
{
if(a[i]==remove)
{
for(int j=i;j<n-1;j++)
{ a[j]=a[j+1];}
n--;
i--;
}
}
printf("\nUpdated Product list: \n");
for(int i=0;i<n;i++)printf("%d ",a[i]);
return 0;
}
