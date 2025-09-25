#include<stdio.h>
int main()
{
 int course;
 char grade;
 printf("Enter course number(1,2 or 3):\n");
 scanf("%d",&course);
 switch(course)
 {
 case 1:
 printf("Enter grade(A,B,C,D,F) for course 1:");
 scanf("%\nc",&grade);
 switch(grade)
 {
 case 'A':
 printf("Excellent\n");
 break;
 case 'B':
 printf("Good\n");
 break;
 case 'C':
 printf("Fair\n");
 break;
 case 'D':
 printf("Needs Improvement \n");
 break;
 case 'F':
 printf("Fail\n");
 break;
 default:
 printf("Invalid grade entered\n");
 }
 break;
 case 2:
 printf("Enter grade(A,B,C,D,F) for course 2:");
 scanf("%\nc",&grade);
 switch(grade)
 {
 case 'A':
 printf("Excellent\n");
 break;
 case 'B':
 printf("Good\n");
 break;
 case 'C':
 printf("Fair\n");
 break;
 case 'D':
 printf("Needs Improvement \n");
 break;
 case 'F':
 printf("Fail\n");
 break;
 default:
 printf("Invalid grade entered\n");
 }
 break;
 case 3:
 printf("Enter grade(A,B,C,D,F) for course 3:");
 scanf("%\nc",&grade);
 switch(grade)
 {
 case 'A':
 printf("Excellent\n");
 break;
 case 'B':
 printf("Good\n");
 break;
 case 'C':
 printf("Fair\n");
 break;
 case 'D':
 printf("Needs Improvement \n");
 break;
 case 'F':
 printf("Fail\n");
 break;
 default:
 printf("Invalid grade entered\n");
 }
 break;
 default:
 printf("Invalid course number\n");
 }
 return 0;
}
