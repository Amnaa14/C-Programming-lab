#include <stdio.h>
int main() {
char str[100];
char ch;
int count = 0;
printf("Enter a string: ");
fgets(str, 100, stdin);
printf("Enter the character to search: ");
scanf("%c", &ch);
for (int i = 0; str[i] != '\0'; i++) {
if (str[i] == ch) {
count++;
}
}
if (count > 0)
printf("The character '%c' appears %d times in the string.\n", ch, count);
else
printf("The character '%c' does not appear in the string.\n", ch);
return 0;
}
