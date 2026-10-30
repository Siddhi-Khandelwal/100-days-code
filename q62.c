#include<stdio.h>
void reversearray(int arr[],int n)
{
int left=0;
int right=n-1;
while (left<right)
{
int temp = arr[left];
arr[left] = arr[right];
arr[right] = temp;
left++;
right--;
}}
int main()
{ int n;
if (scanf("%d",&n)!=1)
return 0;
int arr[n];
for (int i=0;i<n;i++)
{
if (scanf("%d",&arr[i])!=1)
return 0;
}
reversearray(arr,n);
for (int i=0;i<n;i++)
{ printf("%d",arr[i]);
}
printf("\n");
return 0;
}
