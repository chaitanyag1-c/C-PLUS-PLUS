#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
FILE *p;
char s[30];
//ofstream a("c.txt",ios::app);
p=fopen("c.txt","r");
while(fgets(s,29,p)!=NULL)
{
printf("%s",s);
}	
fclose(p);
return 0;	
}
//http://www.codezclub.com/cpp-read-write-student-details-using-file-handling/
