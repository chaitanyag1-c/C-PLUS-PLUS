#include<iostream>
using namespace std;
int main()
{
int i,gcd,lcm,min,max,x,y;
cout<<"Enter two numbers";
cin>>x>>y;
if(x>y)

{
	min=y;
	max=x;
	}	
	else
	{
		min=x;
		max=y;
	}
	
for(i=min;i>=2;i--)
{
	
	if(min%i==0&&max%i==0)
	{
		gcd=i;
cout<<"GCD IS"<<gcd;		
		break;
	}
	}	
if(i==1)
{
	gcd=1;
}
	cout<<"gcd is"<<gcd;
	
//lcm=(x*y)/gcd;

int j;
for(j=max;j<=max*min;j++)
{
if(j%max==0&&j%min==0)
{
	lcm=j;
	break;
	}	
}
cout<<"\n Lcm is"<<lcm;	
return 0;	
}
