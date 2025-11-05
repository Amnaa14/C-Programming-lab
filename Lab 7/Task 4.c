#include<stdio.h>
int main()
{ int temp;
int scores[10]={80,78,67,59,99,88,60,89,75,92};
int n=10;
printf("Scores:");
for(int i=0;i<n;i++)
{ printf("%d ",scores[i]);
}
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-i-1;j++)
{
if(scores[j]>scores[j+1])
{
temp=scores[j];
scores[j]=scores[j+1];
scores[j+1]=temp;
}
}
}
printf("\nSorted scores: ");
for(int i=0;i<n;i++)
{ printf("%d ",scores[i]);
}
float median;if(n%2==0)
{ median=(scores[n/2]+scores[(n/2)-1])/2.00;
}
else{
median=scores[n/2];
}
printf("\nMedian=%.2f",median);
return 0;
}
