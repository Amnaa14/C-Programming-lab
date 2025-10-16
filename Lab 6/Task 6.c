#include<stdio.h>
int main()
{
int grade;
int grade_count=0,above70=0,between_50_70=0,below50=0,total_sum=0;
printf("Enter grade(-1 to stop):");
scanf("%d",&grade);
while(grade!=-1)
{
grade_count++;
total_sum=total_sum+grade;
if(grade>70)
above70++;
else if(grade<=70&&grade>=50)
between_50_70++;
else
below50++;
printf("Enter grade(-1 to stop):");
scanf("%d",&grade);
}
printf("Average:%d\n",total_sum/grade_count);
printf("grade count:%d\n",grade_count);
printf("above 70:%d\n",above70);
printf("Between 50 and 70:%d\n",between_50_70);
printf("Below 50:%d\n",below50);
return 0;
}
