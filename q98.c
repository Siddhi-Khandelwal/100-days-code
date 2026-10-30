#include <stdio.h>
#include <string.h>
int main(){
char s[1000];
fgets(s, sizeof(s), stdin);
s[strcspn(s,"\n")]='\0';
int lastSpace=-1;
for(int i=0; s[i]; i++)
if(s[i]==' ')
lastSpace=i;
for(int i=0; i<lastSpace; i++){
if(i==0)
printf("%c.", s[0]);
else if(s[i-1]==' ')
printf("%c.", s[i]);
}
if(lastSpace!=-1)
printf(" %s", s+lastSpace+1);
else
printf("%s", s);
return 0;
}

