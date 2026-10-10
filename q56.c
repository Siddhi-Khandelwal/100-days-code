#include<stdio.h>
int main()
{
int arr[100],n;
printf("enter the number of elements ");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("the array elements are\n");
for (int i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}
