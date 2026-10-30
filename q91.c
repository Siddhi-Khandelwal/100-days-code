#include <stdio.h>
int main(){
char s[1000];
scanf("%[^\n]", s);
for(int i=0; s[i]; i++){
char c=s[i];
if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u' && c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U')
printf("%c", c);
}
return 0;
}

