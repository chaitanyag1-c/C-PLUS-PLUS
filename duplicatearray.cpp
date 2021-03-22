#include<iostream>
using namespace std;
int duplicate(int a[],int n)
{
int i;
int j=0;

for(i=0;i<n-1;i++)	{
	if(a[i]!=a[i+1])
	{
	a[j++]=a[i];	
	}
	
}
a[j++]=a[n-1];
return j;	
}


int main()
{
int a[]={1,2,2,3,3,4,5,6,6};
int n=sizeof(a)/sizeof(a[0]);
n=duplicate(a,n);

for(int i=0;i<n;i++)	
{
cout<<" "<<a[i];	
}
return 0;	
}
