//Copy Constrtuctor
#include<iostream>
using namespace std;
class chiku{
int a;
public:
chiku(int b)	
{
a=b;
cout<<"within parameter a="<<a;	
}	
chiku(chiku &c)	
{
//int a;
a=c.a;
cout<<"within copy"<<a;	
}
	
};
int main()
{
chiku p(5);
chiku q=p;	
return 0;	
}

