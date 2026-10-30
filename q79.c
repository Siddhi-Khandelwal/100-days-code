#include <stdio.h>
int main() {
int r, c;
scanf("%d %d", &r, &c);
int mat[r][c];
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
scanf("%d", &mat[i][j]);
for(int s=0; s<=r+c-2; s++){
if(s % 2 == 1){
for(int i=0; i<r; i++){
int j = s - i;
if(j>=0 && j<c) printf("%d ", mat[i][j]);
}
} else {
for(int i=r-1; i>=0; i--){
int j = s - i;
if(j>=0 && j<c) printf("%d ", mat[i][j]);
}
}
}
return 0;
}
