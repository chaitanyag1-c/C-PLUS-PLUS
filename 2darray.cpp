#include<iostream>
using namespace std;

int main(){

int a[3][3],b[3][3], c[3][3];
int i,j,k;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)	
{
cin>>a[i][j];
}
}


for(i=0;i<3;i++)
{
for(j=0;j<3;j++)	
{
cin>>b[i][j];
}
}
cout<<"First Matrix"<<endl;

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)	
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}

cout<<"Second Matrix"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)	
{
cout<<b[i][j]<<" ";
}
cout<<"\n";
}





for(i=0;i<3;i++)
{
for(j=0;j<3;j++)	
{
c[i][j]=0;
for(k=0;k<3;k++)
{

c[i][j]+=a[i][k]*b[k][j];
}
}
}




cout<<"After addition we get"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)	
{
cout<<c[i][j]<<" ";
}
cout<<"\n";
}


	
return 0;	
}
