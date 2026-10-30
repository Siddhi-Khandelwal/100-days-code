#include<stdio.h>
int main()
{
int r,c;
scanf("%d %d",&r,&c);
int mat[r][c];
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
scanf("%d",&mat[i][j]);
for (int i=0;i<r;i++)
{ int sum=0;
for (int j=0;j<c;j++)
sum += mat[i][j];
printf("%d",sum);
}
return 0;
}
