#include <stdio.h>

int main() {
    int n, temp;
    int first_digit, last_digit;
    int count = 1;
printf("enter number");
scanf("%d", &n);
last_digit = n % 10;
temp = n;
while (temp >= 10) {
temp = temp / 10;
count = count * 10; 
}
first_digit = temp; 
int swapped_num = (n - (first_digit * count) - last_digit) + (last_digit * count) + first_digit;
printf("%d\n", swapped_num);
return 0;
}
