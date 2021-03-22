#include<iostream>
using namespace std;
int main()
{
int arr[5],i,max;
for(i=0;i<5;i++)
{
	cin>>arr[i];
}
for(i=0;i<5;i++)
{
	cout<<arr[i];
}
max=(arr[0]<arr[1])?arr[1]:arr[0];

for(i=2;i<5;i++)
{
if(arr[i]>max)
{
	max=arr[i];
	}	
	
}
cout<<"\n"<<max;
return 0;	
}
