#include<iostream>
#define max 10
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
	void push(int item)
	{
		if(top==max-1)
		{
			cout<<"Stack is full";
		}
		top++;
		arr[top]=item;
	}
	int pop()
	{
		if(top==-1)
		{
			cout<<"Stack is empty";
			return 0;
		}
		int data=arr[top];
		top--;
		return data;

	}
	void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		cout<<arr[i]<<endl;
	}
}
};

int main()
{
	stack s;
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(2);
	s.push(8);
	s.push(9);
	s.push(10);
	int i=s.pop();
	
	cout<<endl<<"Item popped"<<i;
 i=s.pop();
cout<<endl<<"Item popped"<<i<<endl;

s.display();
return 0;	
}
