#include<iostream>
using namespace std;
int main ()
{
int n,r,d,a=0;
n=371;
d=n;
while(n>0)
{
r=n%10;
a=a+(r*r*r);
n=n/10;	
}
cout<<a;
if(a==d)
{
cout<<"Armstrong no";
}
return 0;	
}
