#include <stdio.h>
int main(){
char s[1000];
fgets(s, sizeof(s), stdin);
int spaces=0, digits=0, special=0;
for(int i=0; s[i]!='\0' && s[i]!='\n'; i++){
if(s[i]==' ') spaces++;
else if(s[i]>='0' && s[i]<='9') digits++;
else if(!((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))) special++;
}
printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
return 0;
}

