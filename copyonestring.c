#include<stdio.h>
int main()
{
char s1[10],s2[20];
int i;
printf("\n enter the string:");
gets(s1);
for(i=0;s1[i]!='\0';i++)
{
s2[i]=s1[i];
}
s2[i]='\0';
printf("\n string2=%s",s2);
}
