#include<stdio.h>
void main()
{
struct a
{
int r;
char c;	
};
struct a z[3];
int i;
for(i=0;i<3;i++)	
{
scanf("%d %c",&z[i].r,&z[i].c);
}
for(i=0;i<3;i++)	
{
printf("\n %d %c",z[i].r,z[i].c);
}

}
