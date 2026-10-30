#include <stdio.h>
int main() {
int size1, size2;
scanf("%d", &size1);
int arr1[size1];
for (int i = 0; i < size1; i++) {
scanf("%d", &arr1[i]);
}
scanf("%d", &size2);
int arr2[size2];
for (int i = 0; i < size2; i++) {
scanf("%d", &arr2[i]);
}
for (int i = 0; i < size1; i++) {
printf("%d ", arr1[i]);
}
for (int i = 0; i < size2; i++) {
printf("%d ", arr2[i]);
}
printf("\n");
return 0;
}
