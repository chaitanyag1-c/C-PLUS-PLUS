#include <stdio.h>
void main()
{
float sum,i,a,b,d=0,e;

 for(a=1;a<=7;a++)
 {
 b=1;
         for(i=1;i<=a;i++)
        {
	     b=b*i;	
        }
 printf(" \n %f %f",a,b);
 float c=a/b;

 printf(" \n %f",c);
sum=0;
for(i=1;i<=a;i++)
{

sum=sum+c;

}
printf("\n %f",sum);
 }

}


	
