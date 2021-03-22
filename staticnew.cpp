#include<iostream>
using namespace std;

void count()
{
static int count=0;
cout<<count++<<endl;
	
}
int main()
{
for(int i=0;i<3;i++)
{
	count();
	}	
	
}
