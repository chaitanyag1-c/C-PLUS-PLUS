#include<stdio.h>
void main()
{
int n=1,r,a=0,b;



for(n=1;n<=1000;n++)
{

b=n;
a=0;
while(n>0)
{
r=n%10;
a=a*10+r;
n=n/10;
	
}
if(a==b)
{
	printf(" \n Palindrome %d",a);
	}	
n=b;
}
	
}

