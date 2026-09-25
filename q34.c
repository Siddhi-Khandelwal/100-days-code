#include <stdio.h>
int main() 
{
int n;
int is_prime = 1; 
printf("enter number");
scanf("%d", &n);
if (n <= 1) {
is_prime = 0; 
} else {
for (int i = 2; i < n; i++) {
if (n % i == 0) {
 is_prime = 0;
 break;
 }
 }
 }
 if (is_prime == 1) {
 printf("Prime\n");
 } else {
 printf("Not prime\n");
 }
return 0;
}
