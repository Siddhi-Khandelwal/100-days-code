#include<stdio.h>
int main()
{
char s[1000];
scanf("%s",s);
int len=0;
while(s[len]!='\0')
len++;
int flag=1;
for(int i=0;i<len/2;i++)
{if(s[i]!=s[len-1-i])
{flag=0;
break;
}}
if(flag)
printf("palindrome");
else
printf("not palindrome");
return 0;
}
