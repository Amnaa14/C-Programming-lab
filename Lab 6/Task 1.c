#include<stdio.h>
int main()
{
int num,even_count=0,odd_count=0;
char ch;
do
{
printf("Enter a number:");
scanf("%d",&num);
if(num%2==0)
{
printf("Number is even");
 even_count++;
 }
else
{
 printf("Number is odd");
 odd_count++;
 }
 
 printf("\nDo you want to continue(Y/N):");
 scanf(" %c",&ch);
 
}
while(ch=='Y');
printf("Total even numbers entered:%d\n",even_count);
printf("Total odd numbers entered:%d\n",odd_count);
return 0;
}
