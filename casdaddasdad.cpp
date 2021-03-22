#include<iostream>
using namespace std;
class chiku{
private:
	int x;
public:
chiku(){
	x=10;
	cout<<"Default Cosntructor"<<x<<endl;
}	
chiku(int A)
{
	x=A;
	cout<<"Parameterized"<<x<<endl;
	}	
	chiku(const chiku& t)
	{
		x=t.x;
		cout<<"Copy Constructor"<<x;
	}
};
void add(){
	cout<<"Me add krunga";
}
int main()
{
chiku c1;
chiku c2(23);
//chiku c3=c1;
chiku c3(c1);	

return 0;	
}
