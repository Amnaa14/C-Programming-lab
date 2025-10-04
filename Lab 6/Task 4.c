#include<stdio.h>
int main()
{
int vowel_count=0,consonant_count=0;
char ch;
char choice;
do
{
printf("Enter an alphabet:");
scanf(" %c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
 printf("It is a vowel\n");
 vowel_count++;
 }
else
{
printf("It is a consonant\n");
consonant_count++;
 }
printf("\nDo you want to continue(Y/N):");
scanf(" %c",&choice);
}
  while(choice=='Y'||choice=='y');
printf("Vowel entered:%d\n",vowel_count);
printf("Consonants entered:%d\n",consonant_count);
}
