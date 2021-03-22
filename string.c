#include<stdio.h>
#include<string.h>
void main()
{
int z,i;
char a[]="CHIKU";
z=strlen(a);

for(i=z-1;i>=0;i--)
{

printf("%c",a[i]);
}
}
