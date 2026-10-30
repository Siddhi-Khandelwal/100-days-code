#include <stdio.h>
int main(){
char a[1000], b[1000];
scanf("%s %s", a, b);
int c1[26]={0}, c2[26]={0}, l1=0,l2=0;
while(a[l1])
c1[a[l1++]-'a']++;
while(b[l2])
c2[b[l2++]-'a']++;
if(l1!=l2)
{ printf("Not anagrams");
return 0; }
for(int i=0;i<26;i++)
if(c1[i]!=c2[i])
{ printf("Not anagrams");
return 0; }
printf("Anagrams");
return 0;
}

