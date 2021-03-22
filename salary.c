// program for hr and da
#include<stdio.h>
void main()
{
float b,h,d,g;
printf("Enter Basic Salary");
scanf("%f",&b);

if(b<1500)
{
	h=(10*b)/100;
	d=(90*b)/100;
	}	
else
{
	h=500;
	d=(90*b)/100;
	
	}	
	g=b+h+d;
	printf("%f",g);
}
