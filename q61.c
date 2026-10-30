#include<stdio.h>
int main()
{
int arr[100];
int size,i,num,flag;
printf("enter size of array");
scanf("%d",&size);
printf("enter elements in array");
for (i=0;i<size;i++)
scanf("%d",&arr[i]);
printf("enter the elements to search within the array");
scanf("%d",&num);
flag=0;
for (i=0;i<size;i++)
{
if (arr[i]==num)
{
flag =1;
printf("%d is found at position %d\n",num,i+1);
break;
}}
if (flag==0)
{
printf("%d is not found in the array",num);
}
return 0;
}
