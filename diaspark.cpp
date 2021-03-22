#include<iostream>

using namespace std;

void swap(int *x1,int *y1)
{
int temp;
temp=*x1;
*x1=*y1;
*y1=temp;	
}


int main()
{
int a[100][2]={{2,1} ,{12,1},{3,1},{23,2},{1,5} };


int s;

cout<<"Enter element";

cin>>s;

int i;
int n;
n=5;
cout<<"Before adding"<<endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<2;j++)	
{
cout<<a[i][j]<<" ";	
}
cout<<endl;
}

for( i=0;i<n;i++)
{
if(a[i][0]==s)	
{
cout<<endl<<"Element in array so updating its frequency"<<endl;;
a[i][1]+=1;	
break;
}
	
}
if(i==5)
{
	cout<<"Element not in array so pushing it"<<endl;
a[i][0]=s;
a[i][1]=1;
n++;
}

for(int i=0;i<n;i++)
{
for(int j=0;j<2;j++)	
{
cout<<a[i][j]<<" ";	
}
cout<<endl;
}

for(int f=0;f<n-1;f++)
{
	for( int j=0;j<n-f-1;j++)
	{
		if(a[j][0]>a[j+1][0])
		{
			swap(&a[j][0],&a[j+1][0]);
			swap(&a[j][1],&a[j+1][1]);
		}
	}
}

cout<<endl<<"After sorting"<<endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<2;j++)	
{
cout<<a[i][j]<<" ";	
}
cout<<endl;
}


return 0;	
}
