#include <stdio.h>

int main() {
    for (int row = 1; row <= 5; row++) {
for (int space = 1; space < row; space++) {
printf(" ");
}
for (int star = 5; star >= row; star--) {
printf("*");
}
printf("\n");
}
return 0;
}
