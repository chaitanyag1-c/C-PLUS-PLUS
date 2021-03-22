#include<stdio.h>
void main()
{
int a[5]={24,21,42,64,54};

int i,*j;
j=&a[0];
for(i=0;i<=4;i++)
{
printf("\n %u",j);	
printf(" %d",*j);
j++;
}	
	
}
