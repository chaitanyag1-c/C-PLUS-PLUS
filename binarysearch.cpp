#include<iostream>
using namespace std;
int main()
{
int low,mid,high;
int a[10]={1,2,3,4,5,6,7,8,9,10};
low=0;
high=9;


int search=5;
	while(low<high)
	{
mid=(low+high)/2;
cout<<mid;
		if(search<mid)
		{
			high=mid-1;
			
		}
		else if(search>mid)
		{
			low=mid+1;
		}
		else if(search==mid)
		{
			cout<<"Element found at"<<mid;
			break;
		}
	}

return 0;	
}
