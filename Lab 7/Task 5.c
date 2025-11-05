#include<stdio.h>
int main()
{
int grade[10];
int n=10,sum=0;
float average=0;
for(int i=0;i<n;i++)
{
printf("Enter student %d grade: ",i+1);scanf("%d",&grade[i]);
}
printf("Student grades: ");
for(int i=0;i<n;i++)
{ printf("%d ",grade[i]);
sum=sum+grade[i];
}
average=(float)sum/n;
int max=grade[0],min=grade[0];
for(int i=0;i<n;i++)
{ if(grade[i]>max) max=grade[i];
if(grade[i]<min) min=grade[i];
}
printf("\nThe average is %.2f\n",average);
printf("Highest=%d\nLowest=%d",max,min);
return 0;
}
