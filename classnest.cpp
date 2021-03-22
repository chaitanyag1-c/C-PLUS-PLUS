#include<iostream>
using namespace std;
class chiku
{
private :
int aa,bb;	
public:
void add()
{

	int c;
	c=aa+bb;
	cout<<endl<<"Addition"<<endl<<c;
	}	
void sub()
{
	
	int d;
	d=aa-bb;
	cout<<"Subtraction"<<endl<<d;
	add();
	}	
	
	void getdata()
	{
	cout<<"Enter numbers";
	cin>>aa>>bb;
		}
};
int main()
{
chiku z;
z.getdata();
z.sub();
return 0;	
}
