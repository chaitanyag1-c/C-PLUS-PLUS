#include<iostream>
using namespace std;
int main()
{
	int z,i,j;
int arr[100][100]={{12,1},{13,1},{23,2}};
cout<<"Enter number";
cin>>z;

for(i=0;i<3;i++)
{
if(arr[i][0]==z)
{
arr[i][1]+=1;
break;	
}

}
if(i==3)
{
arr[i][0]=z;
arr[i][1]=1;	
}

for(i=0;i<=3;i++)
{
for(j=0;j<=1;j++)	
{
	cout<<arr[i][j]<<"\t";
}
cout<<"\n";
}
return 0;
}
