#include<iostream>
using namespace std;
class Weight
{
private:
int kg;
public:
Weight(){
	kg=0;
}	

Weight operator ++()
{
	Weight temp;
	temp.kg=++kg;	
	return temp;
}

void operator ++(int)
{
kg++;	
}

void print(){
cout<<"Weight is "<<kg<<endl;	
}

};
int main()
{
Weight w1;
++w1;	
w1.print();
w1++;
w1.print();

Weight w2;
w2=++w1;
w2.print();
return 0;	
}
