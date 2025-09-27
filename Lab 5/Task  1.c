#include<stdio.h>
int main()
{
int a,b,first,second,third,fourth;
printf("Enter two numbers: \n");
scanf("%d%d",&a,&b);
printf("The experssion is a+b*(a-b)/2\n");
first=a-b;
second=b*first;
third=second/2;
fourth=a+third;
printf("First statement is %d\nSecond statement is %d\nThird statement is
%d\nResult is %d\n",first,second,third,fourth);
return 0;
}
