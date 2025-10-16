#include<stdio.h>
int main()
{
int transaction,initial_balance=5000,deposit_count=0,withdrawal_count=0;
printf("Enter transaction(0 to stop):");
scanf("%d",&transaction);
while(transaction!=0)
{
initial_balance+=transaction;
if(transaction>0)
deposit_count++;
else
withdrawal_count++;
printf("Enter transaction(0 to stop):");
scanf("%d",&transaction);
}
printf("Final balance:%d\n",initial_balance);
printf("\nTotal deposit:%d",deposit_count);printf("\nTotal withdrawal:%d",withdrawal_count);
return 0;
}
