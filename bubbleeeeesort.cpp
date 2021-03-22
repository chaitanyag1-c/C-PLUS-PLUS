#include<iostream>
using namespace std;

void swap(int *xp,int *yp)
{
int temp=*xp;
*xp=*yp;
*yp=temp;
}
void sort(int arr[],int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
	for(j=0;j<size-i-1;j++)	
	{
		if(arr[j]>arr[j+1])
		{
			swap(&arr[j],&arr[j+1]);
		}
	}
	}
	
}

void print(int arr[],int size)
{
int i;
for(i=0;i<size;i++)	
{
cout<<arr[i]<<" ";	
}
}

int main()
{
	int a[]={12,45,23,86,47,64,1,2};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,n);
	
	print(a,n);
	
	
return 0;	
}
