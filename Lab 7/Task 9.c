#include<stdio.h>
int main()
{
int arr1[5];
int arr2[5];
int merge[10];
printf("Enter Reponse 1:");
for(int i=0;i<5;i++)
{ scanf("%d",&arr1[i]); }
printf("Enter Response 2:");
for(int i=0;i<5;i++)
{ scanf("%d",&arr2[i]); }
for(int i=0;i<5;i++) {
merge[i]=arr1[i];}
for(int i=0;i<5;i++) {
merge[i+5]=arr2[i];}printf("\nMerged Array:\n");
for(int i=0;i<10;i++)
{
printf("%d ",merge[i]);
}
return 0;
}
