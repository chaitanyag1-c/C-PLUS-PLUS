#include<stdio.h>
void main()
{
int i,a[5],sum=0;
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);	
}
for(i=0;i<=4;i++)
{
sum=sum+a[i];	
}
int b;
b=sum/5;
printf("%d",b);	
}
