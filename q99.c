#include <stdio.h>
int main(){
char s[20];
scanf("%s", s);
char dd[3]={s[0],s[1],'\0'};
char mm[3]={s[3],s[4],'\0'};
char yyyy[5]={s[6],s[7],s[8],s[9],'\0'};
char *mon;
int m = (mm[0]-'0')*10 + (mm[1]-'0');
char *months[]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
mon = months[m];
printf("%s-%s-%s", dd, mon, yyyy);
return 0;
}

