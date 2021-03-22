#include<stdio.h>
#include<string.h>

void main()
{
int n;
scanf("%d",&n);
printf("No of teams are %d \n",n);

float b=(n/2);
float c= (n-1)*b;
int y=(int)c;
printf("%d \n",y);

float i;

for(i=0;i<y;i++)
{
char teams[100];
scanf("%[^\n]",teams);
printf("%s",teams);
}

}

