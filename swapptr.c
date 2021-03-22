#include<stdio.h>
void main()
{
int x,y,*a,*b,temp;	
printf("Enter values of x and y");	
scanf("%d %d",&x,&y);
printf("Before Swapping%d %d",x,y);	
a=&x;
b=&y;
temp=*a;
*a=*b;
*b=temp;
printf("After Swapping%d %d",x,y);	
}
