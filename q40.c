#include <stdio.h>

int main() {
    int binary_num;
    int complement = 0;
    int place_value = 1;
printf("enter binary number");
scanf("%d", &binary_num);
while (binary_num > 0) {
int digit = binary_num % 10;
int flipped_digit;
if (digit == 1) {
flipped_digit = 0;
} else {
flipped_digit = 1;
}
complement = complement + (flipped_digit * place_value);
place_value = place_value * 10;
binary_num = binary_num / 10;
}
printf("%04d\n", complement);
return 0;
}
