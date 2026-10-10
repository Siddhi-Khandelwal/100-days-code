#include<stdio.h>
int main()
{
int a[50],i,n,pos=0,neg=0,zero=0;
printf("enter numbers ");
scanf("%d",&n);
printf("enter the elements one by one\n");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
if (a[i]>0)
pos++;
else if (a[i]<0)
neg++;
else
zero++;
}
printf("positive= %d , negative = %d , zero = %d",pos,neg,zero);
return 0;
}
