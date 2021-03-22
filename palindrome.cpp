#include<iostream>
using namespace std;
int main()
{
int n,d,r,a=0;	
cout<<"Enter number";
cin>>n;
d=n;
while(n>0)
{
r=n%10;
a=(a*10)+r;
n=n/10;
}	
cout<<a;
if(d==a)
cout<<"palindorme";	
return 0;	
}
