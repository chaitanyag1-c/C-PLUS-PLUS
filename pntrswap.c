#include<stdio.h>
void main()
{
int a,b;
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("%d %d",a,b);	
}
swap(int *i,int *j)
{
int t;
t=*i;	
*i=*j;
*j=t;	
	
}
