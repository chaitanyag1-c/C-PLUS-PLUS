#include<iostream>
using namespace std;
int main()
{
int n=13,i;	
for(i=2;i<n;i++)	
{

if(n%i==0)	
{
cout<<"not prime";
break;
}	
else
{
cout<<"Prime no";
break;
}	

}
return 0;	
}
