#include <stdio.h>
int main() {
int n;
int value;
printf("Enter number of rows: ");scanf("%d", &n);
for (int i=0;i<n;i++) {
value = 1;
for (int j=0; j<n-i-1;j++) {
printf(" ");
}
for (int k=0;k<=i;k++) {
if (k==0) {
value = 1;
} else {
value = value*(i-k+1)/k;
}
printf("%4d", value);
}
printf("\n");
}
return 0;
}
