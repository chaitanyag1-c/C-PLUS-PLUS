#include<stdio.h>
void main()
{
struct chiku
{
	int a;
	char c[2];
	};	
struct chiku1
{
int b;	
};
union chiku3{
	
struct chiku key;
struct chiku1 data;	
};
union chiku3 a3;

a3.key.a=2;
a3.key.c[0]=23;
printf("%d",a3.key.c[0]);

}
