//PARAMETERIZED CONSTRUCTOR
#include<iostream>
using namespace std;
class chiku{
int x,y;
public:
chiku(int a,int b)
{
	int c;
	x=a;
	y=b;
	
	}	
void show()
{
	cout<<x<<endl<<y;;
	}	
};

int main()
{
chiku a(2,4);
a.show();
return 0;	
}
