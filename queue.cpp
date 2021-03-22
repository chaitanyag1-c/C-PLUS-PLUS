#include<iostream>
#define max 5
using namespace std;
class queue{
private :
int front,rear,arr[max];
public:
	queue()
	{
		front=-1;
		rear=-1;
	}
void enque(int item)
{
	if(rear==max-1)
	{
		cout<<"Queue is full";
		return;
	}
	rear++;
	arr[rear]=item;
	
	if(front==-1)
	front=0;
	
}

void deque()
{
	int data;
	data=arr[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	front++;
	cout<<endl<<"Element deleted : "<<data;
	}	
void display()
{
	for(int i=front;i<=rear;i++)
	{
		cout<<endl<<arr[i];
	}
}	
};

int main()
{
	queue q;
	q.enque(11);
	q.enque(12);
	q.enque(15);
	q.enque(13);
	q.enque(12);
	q.enque(34);
	
	q.display();
	q.deque();
return 0;	
}
