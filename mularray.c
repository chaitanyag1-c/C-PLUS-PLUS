#include<stdio.h>
void main()
{
int a[2][3],i,j;
	
for(i=0;i<=1;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}	
//	printf("%d",a[1][3]);
for(i=0;i<=1;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d \t",a[i][j]);
	}
	printf("\n");
	}	
	
}
