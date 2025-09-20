#include<stdio.h>
int main()
{
 int num1,num2;
 char Operator;
 printf("Enter two numbers:\n");
 scanf("%d %d",&num1,&num2);
 printf("Enter any operator(+, -, *, /):");
 scanf(" %c",&Operator);
 switch(Operator)
 {
 case '+':
 printf("The sum is %d",num1+num2);
 break;
 case '-':
printf("The difference is %d",num1-num2);
 break;
 case '*':
 printf("The multiplication is %d",num1*num2);
 break;
 case '/':
 printf("The division is %d",num1/num2);
 break;
 default:
 printf("Invalid Operator");
 }
return 0;
}
