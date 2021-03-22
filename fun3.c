#include<stdio.h>
void main()
{
float sq();
float a,b;

printf("Enter any number");
scanf("%f",&a);	

b=sq(a);
printf("Square \nof\n %f\n is \n %f",a,b);	
}
sq(float x)
{
float y;	
y=x*x;
return(y);
}
