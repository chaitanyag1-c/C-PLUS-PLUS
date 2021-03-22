#include<stdio.h>
void main()
{
int a,l;
scanf("%d",&a);
l=fact(a);
printf("Factorail is%d",l);
}
fact(int x)
{
int f;
if(x==1)
return(1);
else
f=x*fact(x-1);
return (f);	
}

