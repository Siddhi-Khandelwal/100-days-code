#include <stdio.h>
#include <string.h>
int main(){
char s[1000];
fgets(s, sizeof(s), stdin);
char longest[1000]="", curr[1000]="";
int k=0, max=0;
for(int i=0;; i++){
if(s[i]==' '||s[i]=='\n'||s[i]=='\0'){
curr[k]='\0';
if(k>max)
{ max=k; strcpy(longest,curr); }
k=0;
if(s[i]=='\0'||s[i]=='\n')
break;
}
else curr[k++]=s[i];
}
printf("%s", longest);
return 0;
}

