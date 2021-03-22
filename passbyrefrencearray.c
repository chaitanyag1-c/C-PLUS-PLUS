#include<stdio.h>
void main()
{
int i;
int marks[]={12,13,14};
for(i=0;i<=3;i++)
display(&marks[i]);	
}
display(int *m)
{
printf("%d",*m);	
}
