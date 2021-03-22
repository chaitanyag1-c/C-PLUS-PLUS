#include<iostream>
using namespace std;
class chiku{
private:
	int x;
public:
chiku(){
	x=10;
	cout<<x<<endl;
}	
chiku(int A)
{
	x=A;
	cout<<x<<endl;
	}	
	chiku(const chiku& t)
	{
		x=t.x;
		cout<<x;
	}
};

int main()
{
chiku c1;
chiku c2(23);
chiku c3=c1;	

return 0;	
}
