#include<iostream> //MULTILEVEL INHERITANCE
using namespace std;
class gp{
public:	
gp()
{
cout<<"Hello i am Grandparent"<<endl;	
}
};
class p:public gp{
public:	
p()
{
	cout<<"Hello i am parent"<<endl;
	}	
};
class c:public p{
public:	
c()
{
cout<<"I am Child";	
}	
};
int main()
{
c z;
	
return 0;	
}
