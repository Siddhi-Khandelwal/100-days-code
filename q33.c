#include<stdio.h>
int main()
{
int arms;
int check,rem,sum=0;
printf("enter number");
scanf("%d",&arms);
check=arms;
while (check!=0)
{
rem = check%10;
sum = sum + (rem*rem*rem);
check= check/10;
}
if (sum==arms)
printf("armstrong number");
return 0;
}
