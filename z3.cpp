#include<iostream>
using namespace std;
int main()
{

//************POWER OF A NUMBER***************

//int n,p,i,a=1;
//cout<<"Enter number";
//cin>>n;
//cout<<"Enter power";
//cin>>p;
//
//for(i=1;i<=p;i++)
//{
//	a=a*n;
//}
//cout<<"Power:"<<a;


//******FIBONACCI*********

//int a=1,b=2,c,i;
//for(i=0;i<5;i++)
//{
//c=a+b;
//cout<<c<<"\n";
//
//	a=b;
//	b=c;	
//}

// ******************Prime no within a range*********
//int a,n,i,j;
//
//for(i=100;i<200;i++)
//{
//
//for(j=2;j<i;j++)
//{
//a=i%j;
//
//if(a==0)
//{
////	cout<<i<<"\n";
//	break;
//	}	
//	
//
//}
//if(j==i)
//	{
//		cout<<i<<",";
//	}	
//}
//
//return 0;	


//***********FACTORIAL RECURSION***********
//int n,z;
//int rec(int x);
//cout<<"Enter Number";
//cin>>n;
//z=rec(n);
//cout<<z;
//}
//
//
//rec(int x){
//	int p;
//	if(x==1)
//	{
//		return 1;
//	}
//	else
//	{
//		p=x*rec(x-1);
//		return p;
//	}
//	
//}



int n,p,z;
cout<<"Enter n";
cin>>n;
cout<<"Enter p";
cin>>p;
int pow(int,int);

z=pow(n,p);

cout<<z;

}

pow(int x,int y)
{
int f;

if(y==0)
{
	return 1;
}
else
{
	f=(x*pow(x, (y-1) ) );	
	return f;
}	

}









