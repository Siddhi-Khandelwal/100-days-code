#include<stdio.h>
int main()
{
int r,c;
scanf("%d %d",&r,&c);
int mat[r][c];
for (int i=0;i<r;i++)
for (int j=0;j<c;j++)
scanf("%d",&mat[i][j]);
int diag[r];
for (int i=0;i<r;i++)
diag[i]= mat[i][i];
for (int i=0;i<r;i++)
{
for (int j=i+1;j<r;j++)
{if (diag[i]==diag[j])
{printf("false");
return 0;
}}}
printf("true");
return 0;
}
