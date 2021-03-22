#include<stdio.h>
void main()
{
FILE *fp;	
char ch;int noc=0;	
int nol=0;	
fp=fopen("a.txt","r");	

while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
noc++;

if(ch=='\n')
nol++;
}

fclose(fp);

printf("no of characters are %d",noc);
printf("\n no of lines are %d",nol);

}
