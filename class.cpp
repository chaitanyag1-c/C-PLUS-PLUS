#include<iostream>
using namespace std;
class A
{
int a,b,c;	
public :
void add()
{

cout<<"Enter 1 no";
cin>>a;
cin>>b;
c=a+b;
cout<<"Addition =\n"<<c;	
}
};
int main()
{
A p;
p.add();	
return 0;
}
