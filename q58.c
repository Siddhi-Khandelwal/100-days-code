#include<stdio.h>
int main()
{
int a[50],size,i,big,small;
printf("enter the value of size\n");
scanf("%d",&size);
printf("enter the elements one by one\n");
for (i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
big = a[0];
for (i=0;i<size;i++)
{
if (big < a[i])
big = a[i];
}
printf("biggest %d",big);
small = a[0];
for (i=0;i<size;i++)
{
if (small> a[i])
small = a[i];
}
printf("smallest %d",small);
return 0;
}
