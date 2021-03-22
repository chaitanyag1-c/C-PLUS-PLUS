#include<stdio.h>
void main()
{
int a[5],g=0,i;
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);	
}	
for(i=0;i<=4;i++)	
{
if(g<a[i])
{
	g=a[i];
	}	
	
}
printf("%d",g);
}
