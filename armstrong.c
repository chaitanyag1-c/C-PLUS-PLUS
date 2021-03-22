#include<stdio.h>
void main()
{
	int a,n,r1,r2,r3;
	scanf("%d",&n);
	int b=n;
	while(n>0)
	{
		r1=n%10;//371%10=1
		n=n/10;//371/10=37
        r2=n%10;//37%10=7	
	    n=n/10;//37/10=3
	    r3=n;//3
	    a= (r1*r1*r1)+(r2*r2*r2)+(r3*r3*r3);
	if(a==b)
	{
		printf("Armstrong");
	}
	
	}

	
	
}
