#include<iostream> //Multiple inheritance
using namespace std;
class parent{
public:
void aparent()
{
	cout<<"Hello i am parent"<<endl;	
}
};
class parent2{
public:
void aparent2()
{
cout<<"Hello i am parent 2"<<endl;	
}
};


class child2:public parent,public parent2{
public:
child2()
{
cout<<"Hello i am child !!"<<endl;	
}
};

int main()
{
child2 z;
z.aparent();
z.aparent2();
return 0;	
}
