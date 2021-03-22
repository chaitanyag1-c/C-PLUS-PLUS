#include<stdio.h>
void main(){
int a,n=1,r,b;
for(n=1;n<=200;n++)
{
b=n;
a=0;
while(n>0)

{
	r=n%10;
	a=a*10 +r;
	n=n/10;
}
if(a==b)
{
	printf("\n %d",b);
}
n=b;
	}	
	
}
