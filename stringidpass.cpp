#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char u[20],p[20];	
int a,b;
cout<<"Enter username";
cin>>u;
cout<<"Enter password";
cin>>p;
a=strcmp(u,"chiku");
b=strcmp(p,"12345");

if(a==0&&b==0);
{
cout<<"correct id password";	
}	


return 0;	
}
