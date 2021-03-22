#include<stdio.h>
void main()
{
struct emp
{
char name[10];
int age;	
};	

struct emp e1={"Naanu",24};
printf("%s\n %d",e1.name,e1.age);	
}
