#include<iostream>
#define max 10
using namespace std;

class stack{
private:
int top;
int arr[max];
public:
stack(){

top=-1;	
}
void push(int z)
{
if(top==max-1)
{
	cout<<"Cannot push item "<<z<<" Stack Overflow";
}
else{

top++;

arr[top]=z;
cout<<"Item pushed into stack"<<arr[top]<<endl;	
}
}
void pop()
{
	if(top==-1)
	{
		cout<<"underflow";
	}
	int data=arr[top];
	cout<<"Item popped"<<data;
	top--;
	
	}
	
	void show()
	{
		int i;
		for(i=0;i<=max-1;i++)
		{
			cout<<endl<<arr[i]<<endl;
		}
		}	
};



int main()
{
stack s;
int i;
for(i=1;i<=11;i++)
{
	s.push(i);
}
s.show();
return 0;	
}
