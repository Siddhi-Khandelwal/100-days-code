#include<stdio.h>
int main()
{
int arr[100],n,i,sum=0;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter %d elements\n",n);
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("the sum of array elements are\n");
for (i=0;i<n;i++)
{
sum = sum +arr[i];
}
printf("%d",sum);
return 0;
}
