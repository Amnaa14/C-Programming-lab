#include<stdio.h>
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int evensum=0;
int oddsum=0;
for(int i=0;i<10;i++)
{
if(a[i]%2==0)
{
evensum=evensum+a[i];
}
else if(a[i]%2!=0)
{
oddsum=oddsum+a[i];
}
elseprintf("Undefined Value");
}
printf("The sum of even number is %d",evensum);
printf("\nThe sum of odd number is %d",oddsum);
return 0;
}
