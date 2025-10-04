#include<stdio.h>
int main()
{
int nnn;
int prime_count=0,prime_sum=0;
printf("Enter a number:");
scanf("%d",&nnn);for(int i=2;i<=nnn;i++)
{
 int Prime=1;
for(int j=2;j<i;j++)
{
if(i%j==0)
{ Prime=0;
 break;
}
}
if(Prime)
{
printf("%d ",i);
prime_count++;
prime_sum+=i;
 }
 }
 printf("\nTotal prime numbers up to %d:%d\n",nnn,prime_count);
 printf("Sum of all prime numbers up to %d:%d\n",nnn,prime_sum);
 return 0;
}
