
#include<iostream>
using namespace std;
int main()
{
int t,i,total,n;
cout<<"Enter t";
cin>>t;

while(t-->0)
{
int total=0;
int count=0;	
cout<<"Enter N";
cin>>n;
for(i=1;i<=n;i++)
{
if(total<n)
count++;
total=total+i;
}
cout<<count;	
}	

return 0;	
}
