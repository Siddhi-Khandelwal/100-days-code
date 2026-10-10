#include<stdio.h>
int main()
{
int a[50],i,n,even=0,odd=0;
printf("enter numbers");
scanf("%d",&n);
printf("enter the elements one by one\n");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
if (a[i]%2==0)
{
even++;
}
else
{odd++;}
}
printf("even = %d",even);
printf("odd = %d",odd);
return 0;
}
