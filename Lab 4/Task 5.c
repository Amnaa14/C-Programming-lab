#include<stdio.h>
int main()
{
 int num;
 printf("Enter a number(1-3):"); //1 for red,2 for yellow,3 for green
 scanf("%d",&num);
 switch(num)
 {
 case 1:
 printf("Stop\n");
 break;
 case 2:
 printf("Ready\n");
 break;
 case 3:
 printf("Go\n");
 break;
 default:
 printf("Invalid number!Please enter a number between 1 and 3\n");
 }
 return 0;
}
