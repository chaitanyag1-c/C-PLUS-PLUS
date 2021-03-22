#include<iostream>
using namespace std;
int main()
{
int n,m,sq;
cin>>n;
sq=n*n;
m=sq%10;


if(m==n%10)
cout<<"Last digits matches"<<m<<n%10;
else
cout<<"Nahi bhai"<<m<<n%10;
return 0;
}
