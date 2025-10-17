#include<stdio.h>
int main()
{
int num,total=0;
printf("Enter a number:");
scanf("%d",&num);
char choice;
while(choice!='n'&& choice!='N')
{
total+=num;
printf("The running total is %d\n",total);
printf("Do you want to continue(Y/N):");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y')
{
printf("Enter a number:");
scanf("%d",&num);
}
}
printf("Total=%d",total);
return 0;
}
