#include<stdio.h>
void main()
{
	int a=1,b=2,c,i;
	printf("%d\n%d\n",a,b);
	for(i=1;i<10;i++)
{
	c=a+b;
	printf("%d \n",c);
	a=b;
	b=c;
	}	

}
