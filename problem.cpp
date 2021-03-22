#include<iostream>
using namespace std;

int main()
{
int n,m,d,r1,r2,rev;	
cout<<"Enter month";
cin>>m;
cout<<"Enter date";
cin>>d;



if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
{
if(d>=1&&d<=31)
{
cout<<"Entered date is"<<endl<<d<<"/"<<m;	
cout<<"Enter rate of tv room ,without tv room";
cout<<"Enter rate of room with tv and without tv";
cin>>r1,r2;
}
else
{
cout<<"Enter valid date";	
}
}	
if(m==4||m==6||m==8||m==7||m==9||m==11)
{
if(d>=1&&d<=30)
{
cout<<"Entered date is"<<endl<<d<<"/"<<m;	
}	
else
{
cout<<"Enter valid date";
}
}

return 0;
}
