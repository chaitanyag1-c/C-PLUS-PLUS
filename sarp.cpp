#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
const int width=20;
const int height=20;
bool gameover;
int x,y,fruitx,fruity,score;
int tailx[80],taily[80];
int ntail;
enum edirections{STOP=0,LEFT,RIGHT,UP,DOWN};
edirections dir;
void setup()
{
gameover=false;
x=width/2;
y=height/2;
fruitx=rand()%width;
fruity=rand()%height;	
}
void draw()
{
int i,j,k;
system("cls");
for(i=0;i<width;i++)
cout<<"#";
cout<<endl;

for(i=0;i<height;i++)
{
for(j=0;j<width;j++)
{
if(j==width-1||j==0)
{
cout<<"#";	
}
else if(i==x&&j==y)
{
cout<<"O";	
}
else if(j==fruitx&&i==fruity)
{
cout<<"F";	
}
else
cout<<" ";	
}
cout<<endl;	
}

for(i=0;i<width;i++)
cout<<"#";
cout<<endl;
cout<<"SCORE"<<score;
}

void input()
{
while(_kbhit())
{
switch(_getch())
{
case 'w':
{
dir=UP;	
break;
}	
case 'a':
{
dir=LEFT;	
break;
}
case 's':
{
dir=DOWN;	
break;
}

case 'd':
{
dir=RIGHT;	
break;
}

}	
}
}
void logic()
{

switch(dir)
{
case UP:{
	x--;
	break;
}	
case DOWN:{
	x++;
	break;
}	
case RIGHT:{
	y++;
	break;
}
case LEFT:{
	y--;
	break;
}
}
if(x>width-1)x=0;else if(x<0)x=width-1;
if(y>height-1)y=0;else if(y<0)y=height-1;

if(x==fruitx&&y==fruity)
{
fruitx=rand()%width;
fruity=rand()%height;
score+=10;	
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
