#include<stdio.h>
void main()
{
int n,a=0,r;

printf("Enter Number");
scanf("%d",&n);

while(n>0)
{
r=n%10;        
a=a*10 +r;	
n=n/10;	
}
printf("%d",a);
	
}
