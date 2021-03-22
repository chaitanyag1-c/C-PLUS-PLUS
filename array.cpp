#include<iostream>
using namespace std;
int main()
{
int i,j,a[2][3],b[2][3],c[2][3];

cout<<"Enter elements in array 1";
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
cin>>a[i][j];	
}	
}

cout<<"Enter elements in array 1";
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
cin>>b[i][j];	
}	
}


for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];	
}	
}



for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
cout<<c[i][j]<<"\t";	
}	
cout<<"\n";
}

return 0;	
}
