#include<iostream>
using namespace std;

class chiku{//parent class
public :
char c[20]="Chiku is great";
void display()
{
cout<<"Radhe Radhe"<<endl;
}
};

class chiku1 :public chiku{//derive class
public :
char d[30]="Chiku is the greatest";
	
};
int main()
{
chiku1 z;
z.display();

cout<<z.c<<endl<<z.d;
return 0;	
}

