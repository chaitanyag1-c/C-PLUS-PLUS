#include<iostream>
using namespace std;
int main()
{
int n,a;
int fact(int x);
cout<<"Enter number";
cin>>n;
a=fact(n);
cout<<"Factorial"<<a;
return 0;	
}
int fact(int x)
{
int z;	
if(x==1)
{
return 1;
}
else
{
z=x*fact(x-1);	
}
return z;	
}
