#include<stdio.h>
void main()
{
FILE *fp;


fp=fopen("a.txt","r");	
if(fp==NULL)
{
	puts("cannot open");
	
	}
else
{
puts("succesful"	);
}
	
}
