#include<stdio.h>
void main()
{
	int i,p,n,a=1;
	
printf("Enter number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	a=a*i;
}
printf("Factorial %d",a);
}
