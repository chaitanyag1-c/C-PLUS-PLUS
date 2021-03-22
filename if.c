//Program to calculate expensees when discount of 10% is availed when quantity of items is more than 1000 :)
#include<stdio.h>
void main()
{
	int q,c,t;
	float r;
	printf("Enter Qauntity");
	scanf("%d",&q);
	printf("Enter Rate");
	scanf("%f",&r);
	
	if(q>1000)
	{
		c=q*r;
		t=c*(0.9);
		
		
		printf("%d",t);
	}
}
