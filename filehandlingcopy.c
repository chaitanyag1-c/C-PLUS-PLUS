#include<stdio.h>
void main()
{
FILE *fs,*fd;	
char ch;	

fs=fopen("a.txt","r");
if(fs==NULL)
{
puts("cannot open");	
}
fd=fopen("b.txt","w");
if(fd==NULL)
{
puts("cannot open");	
}
	
while(1)
{
ch=fgetc(fs);	
if(ch==EOF)
break;
else
fputc(ch,fd);	
}
fclose(fs);
fclose(fd);
}
