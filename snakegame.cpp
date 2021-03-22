
#include<iostream>
#include<conio.h>
#include <cstdlib>

using namespace std;
bool gameover;
const int width=20;
const int height=20;
int x,y,fruitx,fruity,score;

enum edirection{stop=0,LEFT,RIGHT,UP,DOWN};
edirection dir;

int tailx[100],taily[100];
int ntail;

void setup()
{
gameover=false;
dir=stop;
x=width/2;
y=height/2;
fruitx=rand()%width;
fruity=rand()%height;
score=0;
}
void draw()
{
int i,j,k;
system("cls");
for(i=0;i<width;i++)
     cout<<"C";
cout<<endl;

for(i=0;i<height;i++)
{
for(j=0;j<width;j++)
{
if(j==0|| j==width-1)
cout<<"H";
if(i==y&&j==x)
cout<<"O";
else if(i==fruity&&j==fruitx)
cout<<"F";
else
{
bool print=false;
for(k=0;k<ntail;k++)
{
	
if(tailx[k]==j&&taily[k]==i	)
{
cout<<"o";	
print=true;
}

}
if(!print)
cout<<" "; 	
}

}
cout<<endl;
}

for(i=0;i<width;i++)

cout<<"U";
cout<<endl;

cout<<"Score:"<<score<<endl;
cout<<"Snake Game"<<endl<<"By Chiku";
}
void input()
{
if(_kbhit())
{
switch(_getch())	
{
case 'w':
dir=UP;
break;

case 'a':
dir=LEFT;
break;

case 's':
dir=DOWN;
break;

case 'd':
dir=RIGHT;
break;	
}
}
}
void logic()
{
int i;


for(i=ntail-1;i>0;i--)
{
tailx[i]=tailx[i-1];
taily[i]=taily[i-1];	
}
tailx[0]=x;
taily[0]=y;
switch(dir){
case LEFT:
x--;
break;
case RIGHT:
x++;
break;
case UP:
y--;
break;
case DOWN:
y++;
break;	
}	
//if(x>width || x<0 || y>height || y< 0)
//{
//gameover=true;	
//}
if(x>width) x=0; else if(x<0) x=width-1;
if(y>height) y=0; else if(y<0) y=height-1;
for(i=0;i<ntail;i++)
{
if(tailx[i]==x&&taily[i]==y)
{
cout<<endl<<"GAMEOVER";	
gameover=true;	
}	
}
if(x==fruitx&&y==fruity)
{
score+=10;	
fruitx=rand()%width;	
fruity=rand()%height;
ntail++;
}
}

int main()
{
	setup();
	while(!gameover)
	{
	draw();
	input();
	logic();	
	}
	
return 0;	
}
