#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char n[10];
cout<<"Enter name";
cin>>n;
ofstream b("c.txt",ios::app);
b<<"Name"<<endl<<n;
b.close();

ifstream z("c.txt",ios::app);
z>>n;
cout<<n;
z.close();
return 0;	
}
