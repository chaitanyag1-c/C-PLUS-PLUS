#include<stdio.h>
#include<string.h>
void main()
{
FILE *fp;
char s[80];
fp=fopen("a.txt","r");

while(fgets(s,79,fp)!=NULL)
{

printf("%s",s);
}
fclose(fp);
}
