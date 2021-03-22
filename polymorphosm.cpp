#include<iostream>
using namespace std;

class A{
public:
float area(float a,float b)	
{
float z;
z=	0.5*a*b;
cout<<endl<<"Area of triangle 1/2*"<<a<<"*"<<b<<"="<<z;
}
float area(float a)
{
float p;
p=a*a;
cout<<"Area of square :"<<p;
}
};
int main()
{
A obj;
obj.area(3);
obj.area(6,6);
}
