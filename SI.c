#include<stdio.h>
void main()
{
float p,r,t,s;
char a,l;
char n='y';
printf("Enter s if S.I is unknown\n Enter t if t is unknown \n Enter r if r is unknown \n Enter p if P is unknown \n");
scanf("\n %c",&a);



switch(a)
{
case 's':
printf("Enter Value of P,R,T ");	
scanf("%f  %f  %f ",&p,&r,&t);
s=(p*r*t)/100;
printf("S.I : %f ",s);
break;

	
case 't':
printf("Enter Value of P,R,S ");	
scanf("%f  %f  %f",&p,&r,&s);
t=(s*100)/(p*r);
printf("time : %f ",t);
break;

case 'r':
printf("Enter Value of P,t,S ");	
scanf("%f  %f  %f",&p,&t,&s);
r=(s*100)/(p*t);
printf("rate : %f ",r);
break;


default:
	printf("Enter VALID NUMBER");
break;
}







}
