#include<iostream>
using namespace std;

class Dada{
public:
static int objcount;
Dada(){

objcount++;	
}
static int getcount()
{
return objcount;	
}
};
int Dada::objcount=0;
int main()
{
	Dada d1;
	Dada d2;
	cout<<Dada::objcount<<endl;
	cout<<Dada::getcount()<<endl;
return 0;	
}
