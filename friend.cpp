#include<iostream>
using namespace std;
class one{
private:
int data1;
public:
one()
{
	data1=100;
	}	
	friend int acessboth(one);
};
class two{
private:
int data2;
public:
two()
{
	data2=200;
	}	
	friend int acessboth(one,two);
};

int acessboth(one a,two b)
{
return(a.data1+b.data2);	
}
	
int main()
{
one a;
two b;	
cout<<acessboth(a,b);	
return 0;	
}
