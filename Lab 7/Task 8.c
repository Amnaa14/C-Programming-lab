#include<stdio.h>
int main()
{
char str[100];
printf("Enter a string: ");
fgets(str,100,stdin);
for(int i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
{
str[i]=str[i]-32;
}}
printf("Modified string:%s",str);
return 0;
}
