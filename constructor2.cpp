#include<iostream>
using namespace std;
class chiku{
private:	
int i;
public:	
chiku()
{
i=10;	
}
void showdata()
{
cout<<"Value of i= "<<i<<endl;	
}
};
int main()
{
chiku a1;
a1.showdata();


chiku a2;
a1=a2;
a2.showdata();

chiku *a3;
a3=&a1;
a3->showdata();
return 0;	
}
