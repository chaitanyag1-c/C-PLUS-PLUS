#include<iostream>
using namespace std;
class parent{
	public:
	parent(){
	cout<<"Inside Parent CONSTRUCTOR";
	}
	
};
class base : public parent{
	public:
		base(){
			cout<<"Inside Base Constructor";
		}
};


int main()
{
base b1;
return 0;	
}
