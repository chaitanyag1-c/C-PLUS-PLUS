#include<iostream>
using namespace std;
int main()
{
int n,p,i,a=1;
cout<<"Enter number";
cin>>n;
cout<<"Enter Power";
cin>>p;
for(i=1;i<=p;i++)
{
a=a*n;	
}
cout<<a;	
return 0;	
}
