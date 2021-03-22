#include<stdio.h>
void main()
{
int i=3;
int *j;
j=&i;
printf("Address of i %u",&i);
printf("\n Address of i %u",j);
printf("\n VALUE OF I%d",i);
printf("\n VALUE OF I%d",*(&i));
printf("\n value pf i %d",*j);
}
