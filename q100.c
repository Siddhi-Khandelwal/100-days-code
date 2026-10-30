#include <stdio.h>
#include <string.h>
int main(){
char s[1000];
scanf("%s", s);
int n=strlen(s);
int first=1;
for(int i=0;i<n;i++){
for(int len=1; len<=n-i; len++){
if(!first)
printf(",");
for(int k=0;k<len;k++)
printf("%c", s[i+k]);
first=0;
}}
return 0;
}

