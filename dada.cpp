#include<iostream>
#define max 5
using namespace std;

class stack{
	private:
		int arr[max];
		int top;
public:
stack()
{
	top=-1;
}
	void push(int x)
	{
	if(top==max-1)
	{
	cout<<"Overflow";
	}	
	
	
	
	top++;
	arr[top]=x;
	
	
	}	

void pop(){
	if(top==-1)
	{
		cout<<endl<<"Underflow";
		}
int i=arr[top];
top--;
cout<<endl<<"ELEMENT POPPED \t :"<<i;	
}

void display()
{
	for(int i=top;i>=0;i--)
	{
		cout<<endl<<arr[i];
	}
}
};
int main()
{

stack s;
s.push(3);
s.push(4);
s.push(5);
s.push(6);
s.push(7);

s.display();
s.pop();
s.display();

return 0;	
}
