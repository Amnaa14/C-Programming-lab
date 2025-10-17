#include<stdio.h>
int main()
{
int smallest,largest,number;
char choice;
printf("Enter a number:");
scanf("%d",&number);
largest=smallest=number;
do
{
if(number>largest)
{
largest=number;}
if(number<smallest)
{
smallest=number;
}
printf("Largest number so far:%d\n",largest);
printf("Smallest number so far:%d\n",smallest);
printf("Do you want to continue(Y/N)\n");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y')
{
printf("Enter a number:");
scanf("%d",&number);
}
}
while(choice=='Y'||choice=='y');
printf("Largest Number:%d\n",largest);
printf("Smallest Number:%d\n",smallest);
return 0;
}
