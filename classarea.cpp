#include<iostream>
using namespace std;
class tri
{
private :
int len,bre;	
public:
void getdata()
{
cout<<"Enter len and breadth";
cin>>len>>bre;	
}
void setdata(int l,int b)
{
len=l;
bre=b;
}	
void peri()
{
cout<<"Perimeter is";	
cout<<(2*(len+bre));	
}
};
int main()
{
tri z,x,*s;
x.setdata(4,5);
x.peri();

z.getdata();
z.peri();	
s=&z;
s->peri();

return 0;	
}
