#include<stdio.h>
void main()
{
int n=1542;
int count=0;
while(n>0)
{
	n=n/10;
	++count;
}
printf("%d",count);
}
