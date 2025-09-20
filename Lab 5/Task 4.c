#include <stdio.h>
int main() {
int m, n, larger;
printf("Enter two integers:\n");
scanf("%d %d",&m,&n);
larger = (m > n) ? m : n;
printf("The larger number is: %d\n", larger);
return 0;
}
