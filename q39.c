#include <stdio.h>
int main() {
int n;
int prod = 1;
printf("enter number");
scanf("%d", &n);
while (n > 0) {
int rem = n % 10;
if (rem % 2 == 1) {
prod = prod * rem;
}
n = n / 10;
}
printf("%d\n", prod);
return 0;
}
