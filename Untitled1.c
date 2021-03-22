#include<stdio.h>
void main()
{
int x,y;
printf("Enter no");
scanf("%d",&x);
y=fact(x);
printf("%d",y);	
}
fact(int z)
{
int a;
if(z==1)	
return(1);
else
a=z*fact(z-1);
return(a);	
}
