#include"common.h"

void initdot(int x,int y,int color)
{
	setfillstyle(1,color);
	bar(x,y,x+3,y+3);
}