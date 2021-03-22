#include<iostream>
using namespace std;
int main()
{
int i,j,k,a[3][3],b[3][3],c[3][3];
cout<<"Enter elements in array 1";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>a[i][j];	
}	
}
cout<<"Enter elements in array 2";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>b[i][j];	
}	
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=0;
for(k=0;k<j;k++)
{
c[i][j]=a[i][k]*b[k][j];	
}	
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<c[i][j]<<"\t";	
}	
cout<<"\n";
}
return 0;
}
