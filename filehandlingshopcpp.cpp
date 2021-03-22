#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char c[10],i[10],date[15],z;
int j,p,q,total,t=0;
cout<<"Enter customer name";
cin>>c;
cout<<"Enter date";
cin>>date;
j=0;
ofstream a("list.txt",ios::app);
a<<"\n Customer name :"<<c;
a<<"\n date :"<<date;
while(j==0)
{
cout<<"Enter item";
cin>>i;
a<<"\n Item\t"<<i;
cout<<"Enter item price";
cin>>p;
a<<"\n price\t"<<p;
cout<<"Enter quantity";
cin>>q;
a<<"\tQuantity\t"<<q;
total=p*q;
cout<<"total :"<<total;
a<<"\nTotal"<<total;
t=t+total;
cout<<"Do you want ot continue \n enter 0 for yes and 1 for no";
cin>>j;

}
cout<<"Grand Total"<<t;
a<<"\n Grand Total"<<t;
a.close();		
return 0;	
}
