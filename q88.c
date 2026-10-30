#include<stdio.h>
int main()
{
char s[1000];
fgets(s,sizeof(s),stdin);
for (int i=0;s[i]!='\0';i++)
{if (s[i]==' ')
s[i]='-';
}
printf("%s",s);
return 0;
}
