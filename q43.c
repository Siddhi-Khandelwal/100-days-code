#include <stdio.h>

int main() {
    int n, original_num;
    int sum = 0;
printf("enter number");
scanf("%d", &n);
original_num = n;
while (n > 0) {
int digit = n % 10;
int fact = 1;
for (int i = 1; i <= digit; i++) {
fact = fact * i;
}
sum = sum + fact;
n = n / 10;
}
if (sum == original_num) {
printf("Strong number\n");
} else {
printf("Not strong number\n");
}
return 0;
}

