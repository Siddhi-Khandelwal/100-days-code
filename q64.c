#include <stdio.h>
#include <string.h>
int main() {
char num[100];
int frequency[10] = {0};
if (scanf("%s", num) != 1) return 0;
for (int i = 0; num[i] != '\0'; i++) {
if (num[i] >= '0' && num[i] <= '9') {
frequency[num[i] - '0']++;
}
}
int max_count = 0;
int most_frequent_digit = 0;
for (int i = 0; i < 10; i++) {
if (frequency[i] > max_count) {
max_count = frequency[i];
most_frequent_digit = i;
}
}
printf("%d\n", most_frequent_digit);
return 0;
}
