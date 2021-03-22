#include<stdio.h>

void main()
{
int x,i,y,p;
scanf("%d",&x);
scanf("%d",&p);
y=power(x,p);
printf("%d",y);	
}
power(int x,int p)
{

	
if(p!=0)
return (x*power(x,p-1));	
	

else
return(1);
}


