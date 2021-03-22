#include<iostream>
using namespace std;
class sample{
private:
static int index; 	
int count;
public:
sample()
{
index++;
count++;	
}	
void show()
{
cout<<endl<<"index ="<<index;
cout<<endl<<"count ="<<count;	
}	


};

int sample::index=0;

int main()
{
sample s1,s2,s3;
s1.show();
s2.show();
s3.show();	
return 0;	
}
