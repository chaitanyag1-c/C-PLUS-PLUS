#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 2 values");
scanf("%d %d",&a,&b)	;
c=sum(a,b);
printf("%d",c);	
	
}
sum(int x,int y)
{
int z=x+y;
return (z);	
}
