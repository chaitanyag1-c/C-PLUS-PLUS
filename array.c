#include<stdio.h>
void main()
{
int a[5],i,m;
printf("Enter 5 elements");


for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
if(a[i]>m)
{
	m=a[i];
	}	
}
printf("%d",m);
}
