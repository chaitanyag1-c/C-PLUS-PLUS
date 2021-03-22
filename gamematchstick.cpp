#include<iostream>
using namespace std;
int main()
{
int c,u,t=21;	
cout<<"Please enter number between 1-4";




while(t!=1)	
{
cout<<endl<<"Enter user number";	
cin>>u;

if(u>4||u<1)
{
cout<<"Enter valid number";
continue;
}


if(u<=4&&u>=1)
{
c=5-u;	
cout<<"Computer entered "<<c<<endl;	

t=t-u-c;
cout<<"Remaining matchsticks :"<<t<<endl;
}

}	
cout<<"You lost";


return 0;
}
