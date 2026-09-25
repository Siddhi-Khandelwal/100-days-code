#include<stdio.h>
int main()
{
int n, binary=0, placevalue = 1;
printf("enter a number");
scanf("%d",&n);
while (n>0)
{
int remainder = n%2;
binary = binary + remainder*placevalue;
placevalue = placevalue*10;
n =n/2;
}
printf("%d\n",binary);
return 0;
}
