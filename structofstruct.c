#include<stdio.h>
#include<string.h>
void main()
{
struct a{
int a;	
char n[10];	
};	
struct a b1={2,"chiku"};
struct a b2,b3;
strcpy(b2.n,b1.n);
b2.a=b1.a;
b3=b2;

printf("\n %d %s",b1.a,b2.n);
printf("\n %d %s",b2.a,b3.n);
printf("\n %d %s",b3.a,b3.n);
}
