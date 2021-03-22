#include<iostream>
using namespace std;
int main(){

int n1,i,n2,lcm,hcf,min;
n1=24;
n2=72;
min=(n1<n2)?n1:n2;

for(i=1;i<=min;i++)
{
if(n1%i==0 && n2%i==0)	
	{
		hcf=i;
	}
}

lcm=(n1*n2)/hcf;

cout<<"HCF :"<<hcf;
cout<<"\nLCM :"<<lcm;


return 0;	
}
