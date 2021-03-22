#include<stdio.h>
void main()
{
int m,u,c,t=0;	

while(t!=20)
{

printf("\nEnter you sticks it can be 1 or 2 or 3 or 4 \n");
scanf("%d",&u);



	
while(u<=4&&u>=1)
{
	printf("\n You've entered '%d sticks",u);	
	c=5-u;
	printf("\n Computer has entered %d sticks",c);
	t=t+u+c;
	break;
	}	

if(u>4||u<1)
{
printf("Enter valid number \n");
continue;
}

		if(t==20)
	{
				break;
	}
	
	

	
	
	
	
	
	
}
printf("\nYOU LOST Total sticks\n %d \nonly one left to pick",t);
}
