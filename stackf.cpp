#include<iostream>
#define max 5
using namespace std;

class Stack{
private:
int top;
int arr[max];
public:
Stack(){
	top=-1;
}	
void push(int z)
{
if(top==max-1)	
{
cout<<"OVERFLOW"<<endl;
}
top++;
arr[top]=z;
}	

void pop()
{
if(top==-1)	
{
cout<<"Underflow"<<endl	;
}
int k=arr[top];
top--;
cout<<"\nElement poped :"<<k<<endl;
}

void display()
{
for(int i=top;i>=0;i--)	
{
cout<<endl<<arr[i];	
}
}
};

int main(){
	Stack s1;
	s1.push(12);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(43);

	s1.display();
	
	s1.pop();
	s1.display();
return 0;
}
