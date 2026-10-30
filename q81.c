#include<stdio.h>
int main()
{
char s[1000];
fgets(s,sizeof(s),stdin);
int i=0;
while(s[i]!='\0' && s[i]!='\n')
i++;
printf("%d",i);
return 0;
}
