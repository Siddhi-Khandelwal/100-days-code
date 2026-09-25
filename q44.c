#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    float num = 1.0;
    float den = 1.0;
printf("enter number");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
sum = sum + (num / den);
num = num + 2.0;
if (i == 1) {
den = 4.0;
} else {
den = den + 2.0;
}
}
printf("Approximate sum: %.1f\n", sum);
return 0;
}
