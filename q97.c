#include <stdio.h>
int main(){
char s[1000];
fgets(s, sizeof(s), stdin);
if(s[0]!=' ' && s[0]!='\n')
printf("%c.", s[0]);
for(int i=1; s[i]; i++)
if(s[i-1]==' ' && s[i]!=' ' && s[i]!='\n')
printf("%c.", s[i]);
return 0;
}

