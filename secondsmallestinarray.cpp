#include<iostream>
using namespace std;
int main()
{
int arr[100],n,i,smallest,secondsmallest;

cout<<"Enter no of elements in array";
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];	
}
for(i=0;i<n;i++)
{
cout<<arr[i];	
}

if(arr[0]<arr[1])
{
smallest=arr[0];
secondsmallest=arr[1];	
}
else
{
smallest=arr[1];
secondsmallest=arr[0];		
}

for(i=2;i<n;i++)
{
if(arr[i]<smallest)	
	{
		secondsmallest=smallest;
		smallest=arr[i];
		
	}

else if( arr[i] <secondsmallest)
{
	secondsmallest=arr[i];
}
}
cout<<"\n"<<secondsmallest;
return 0;	
}
