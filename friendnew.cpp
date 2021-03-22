#include<iostream>
using namespace std;
class Distance{
private:
int meter;
public:
Distance(){
	meter=0;
}	
void showdata(){
	
cout<<"The value of meter is "<<meter<<endl;	
}
friend void dada(Distance &d);
};

void dada(Distance &d)
{
cout<<"Friend fucntion"<<endl;
d.meter+=5;
}
int main()
{
	Distance d1;
	d1.showdata();
	cout<<endl<<endl;
	dada(d1);
	d1.showdata();
return 0;
}
