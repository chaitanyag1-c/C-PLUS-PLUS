#include<stdio.h>
void main()
{
int a,n,i;
printf("Enter Number")	;
scanf("%d",&n);

for(i=2;i<=n-1;i++)
{

a=n%i;
if(a==0)
{
printf("Not Prime");
break;
}

if(n==i){
printf("Prime");
}
	
}

} 
