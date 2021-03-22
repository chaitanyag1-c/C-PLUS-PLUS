#include<iostream>
using namespace std;
class Base{
public:
virtual void print()
{
cout<<"Printing base class"<<endl;	
}	
void show()
{
cout<<"Showing base class"<<endl;	
}
};

class Derived :public Base{
void print()
{
cout<<"Printing Derived class"<<endl;	
}	
void show()
{
cout<<"Showing Derived class"<<endl;	
}	
};
int main()
{
	Base *b1;
	Derived d1;
	b1=&d1;
	b1->print();
	b1->show();
return 0;	
}
