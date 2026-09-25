#include<stdio.h>
int main()
{
int n,digits,revnum=0;
printf("enter number");
scanf("%d",&n);
int data =n;
while (n>0)
{
digits = n%10;
revnum = revnum*10+digits;
n=n/10;
}
if (revnum==data)
{
printf("palindrome");
}
return 0;
}
