#include<stdio.h>
void main()
{
int c,s,p,l;
printf("Enter Cost Price");
scanf("%d",&c);	
printf("Enter Sellling Price");
scanf("%d",&s);

if(s>c)
{

printf("Profit is made");
p=s-c;
printf("Profit %d",p);
	}	
	else
	{
	printf("Loss is made");
l=c-s;
printf("Loss %d",l);	
	}
	
}
