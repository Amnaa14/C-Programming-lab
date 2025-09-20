#include<stdio.h>
int main()
{
 int password;
 int correctPassword = 1234; // Predefined password
 printf("Enter your password: ");
 scanf("%d",&password);
 // Check password
 if(password==correctPassword)
{
printf("Access Granted\n");
 } else
 {
 printf("Access Denied\n");
 }
 return 0;
}
