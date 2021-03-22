#include<iostream>
using namespace std;

class one{
public:	
virtual void display(){
cout<<endl<<"In base class";
}	
};
class oneofone :public one{
public:	
void display(){
cout<<endl<<"In one of one class";
}	
};
class twoofone :public one{
public:
void display()
{
cout<<endl<<"In two of one class";	
}	
};

int main()
{
one *p;
oneofone o1;
twoofone o2;
p=&o1;
p->display();
p=&o2;
p->display();
return 0;	
}
