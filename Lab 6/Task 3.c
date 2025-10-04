#include<stdio.h>
int main()
{
int n,i;
int a=0,b=1,sum=0,next;
printf("Enter number of terms:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\t",a);
sum=sum+a;
next=a+b;
a=b;
b=next;
}
printf("\nSum of sequence is %d",sum);
return 0;
}
