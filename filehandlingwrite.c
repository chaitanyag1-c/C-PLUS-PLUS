#include<stdio.h>
#include<string.h>
void main()
{
char s[80];	
FILE *fp;	
fp=fopen("b.txt","w");	
printf("\n enter lines");	
while(strlen(gets(s))>0) //WRITES TO FILE UNTIL ENTER IS HIT
{

fputs(s,fp);
	
}
fclose(fp);
}
