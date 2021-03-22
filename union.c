#include<stdio.h>
#include<string.h>
void main()
{
union chiku{
	
int a;
char c[10];	
};	
union chiku c1;
	
c1.a=10;
printf("%d",sizeof(c1.a));

strcpy(c1.c,"Union is nice");
printf("%s",c1.c);

}	


