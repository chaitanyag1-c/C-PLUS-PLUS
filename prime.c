#include<stdio.h>
void main()
{
	int n,i,c;
	printf("Enter number");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		c=n%i;
		if(c==0)
		{
		printf("Not prime");
		break;
		}
	if(i==n-1)
	{
		printf("Prime");
		}	
		}	
	/*if(n==c)
	{
	printf("Prime");
	}*/
	
}
