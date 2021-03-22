#include<iostream>
using namespace std;
class Animal{
private :
	int weight;
public:
void getweight()
{
	weight=55;
	cout<<"The weight is "<<weight<<"kg";
}	
};

class Tiger:virtual public Animal{
	
};
class Lion:virtual public Animal{
	
};

class Liger:public Tiger,public Lion{
	
};
int main()
{
Liger l1;
l1.getweight();
return 0;	
}
