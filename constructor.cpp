//PHELE BASE CLASS THEN DERIVE CLASS HOGI 
 
#include<iostream>
using namespace std;
class chiku
{
public:
chiku()
{
cout<<"Base class"<<endl;
	}	
	
};
class chiku1 :public chiku
{
public:
chiku1()
{
cout<<"Derive class"<<endl;
	}	
	
};
int main()
{
chiku1 a;
return 0;	
}
