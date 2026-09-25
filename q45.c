#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    double num = 2.0;
    double den = 3.0;
printf("enter number");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
sum = sum + (num / den);
num = num + 2.0;
den = den + 4.0;
}
printf("Approximate sum: %.2f\n", sum);
return 0;
}
