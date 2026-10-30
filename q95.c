#include <stdio.h>
#include <string.h>
int main(){
char a[1000], b[1000];
scanf("%s %s", a, b);
int n=strlen(a), m=strlen(b);
if(n!=m)
{ printf("Not rotation");
return 0; }
char temp[2000];
strcpy(temp, a);
strcat(temp, a);
if(strstr(temp, b))
printf("Rotation");
else
printf("Not rotation");
return 0;
}
