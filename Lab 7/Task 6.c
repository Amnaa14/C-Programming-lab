#include<stdio.h>
int main()
{
int arr[5];
printf("Enter 5 Numbers:");
for(int i=0;i<5;i++)
{ scanf("%d",&arr[i]);
}
int add[5],sub[5],mul[5];
for(int i=0;i<5;i++){
add[i]=10+arr[i];
sub[i]=arr[i]-5;
mul[i]=2*arr[i];
}
for(int i=0;i<5;i++)
{
printf("\nNumber:%d",arr[i]);
printf("\n+10:%d",add[i]);
printf("\n-5:%d\n",sub[i]);
printf("x2:%d\n",mul[i]);
}
return 0;
}
