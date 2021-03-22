#include<stdio.h>
void main()
{
int n,p,c,i;
printf("Enter number");
scanf("%d",&n);
printf("Enter power");
scanf("%d",&p);
int a=n;
for(i=1;i<=p-1;i++)
{
c=a*n;
n=c;
}
printf("%d",c);

}


