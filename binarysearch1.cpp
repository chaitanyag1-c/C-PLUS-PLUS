#include<iostream>
using namespace std;
int main()
{
int low,mid,high;
int a[10]={1,2,3,4,5,6,7,8,9,10};
low=0;
high=10;


int search=10;
	while(low<high)
	{
mid=(low+high)/2;

		if(search<a[mid])
		{
			high=mid-1;
			
		}
		else if(search>a[mid])
		{
			low=mid+1;
		}
		else if(search==a[mid])
		{
			cout<<"Element found at"<<mid;
			break;
		}
	}

return 0;	
}
