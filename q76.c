#include<stdio.h>
int main()
{
int r,c;
scanf("%d %d", &r,&c);
int mat[r][c];
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
scanf("%d",&mat[i][j]);
if (r!=c)
{printf("false");
return 0;
}
for (int i=0;i<r;i++)
{
for (int j=0;j<c;j++)
{ if (mat[i][j]!=mat[j][i])
{printf("false");
return 0;
}}}
printf("true");
return 0;
}
