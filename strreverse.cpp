#include<iostream>
#include<bits.h>
#include<vector>
using namespace std;

//STRING REVERSE

//string a="Chiku";
//
//for(int i=a.length()-1;i>=0;i--)
//{
//	cout<<a[i];
//}
//
//	
//	cout<<endl;
	
//String Word REPLACE	
//	string b[]={"Chiku", "Ji", "Galande"};
//	int n=sizeof(b)/sizeof(b[0]);
//	string ans="";
//	for(int i=n-1;i>=0;i--)
//	{
//		ans+=b[i]+" ";
//	}
//	cout<<ans;
//	

//class Bubble{
//public:
//void sort(int a[],int m){
//for(int j=0;j<m-1;j++)
//{
//	for(int k=0;k<m-j-1;k++)
//	{
//		if(a[k]>a[k+1])
//		{
//			swap(&a[k],&a[k+1]);
//		}
//	}
//}	
//}
//	
//void swap(int *x,int *y)
//{
//	
//int temp;
//
//temp=*x;
//*x=*y;
//*y=temp;	
//	
//}
//
//void print(int a[],int m){
//for(int i=0;i<m;i++)	{
//	cout<<a[i]<<" ";
//}
//}
//};
//int main(){
//int a[]={1,5,3,1,89,56};
//int m=sizeof(a)/sizeof(a[0]);
//Bubble z;
//z.sort(a,m);
//z.print(a,m);

class Reverse{
public:
void areverse(int a[],int start,int end)
{
while(start<end)	
{
int temp=a[start];
a[start]=a[end];
a[end]=temp;
start++;
end--;
}
	
}

void print(int a[],int n)
{
for(int i=0;i<n;i++)	
{
	cout<<" "<<a[i];
}
}
};
int main(){
	
int a[]={1,1,2,2,3,5,7,9};
vector<int> v;

int i;

//int n=sizeof(a)/sizeof(a[0]);
//for(int i = 0; i < n; i++) {  
//        for(int j = i + 1; j < n; j++) {  
//            if(a[i] == a[j])  
//                printf("%d\n", a[j]);  
//        }  
//    }  

Reverse r;
r.areverse(a,0,n-1);
r.print(a,n);
//for(i=n-1;i>=0;i--)
//{
//	v.push_back(a[i]);
//}
//for(i=0;i<n;i++)
//{
//	cout<<" "<<v[i];
//}


return 0;	
}
