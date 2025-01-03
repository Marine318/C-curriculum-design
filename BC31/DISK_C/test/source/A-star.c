#include"common.h"

int ab_dist(int a,int b)//a,b坐标的距离
{
	int d;
	d=a-b;
	if(d<0) return -d;
	else return d;
}

void get_G(Drone *father,Drone *son)//斜对角无人机的代价
{
	if(son->x==father->x+1&&son->y==father->y-1)
		son->G=father->G+14;
	else if(son->x==father->x+1&&son->y==father->y+1)
		son->G=father->G+14;
	else if(son->x==father->x-1&&son->y==father->y-1)
		son->G=father->G+14;
	else if(son->x==father->x-1&&son->y==father->y+1)
		son->G=father->G+14;
	else son->G=father->G+10;
}

void get_H(Drone *current,Pos destination)//起点到终点的曼哈顿距离代价
{
	current->H=10*ab_dist(current->x,destination.x)+10*ab_dist(current->y,destination.y);
}

void get_F(Drone *x)//无人机的总代价F
{
	x->F=x->H+x->G;
}

void Lpixel(int x,int y,int color) //画更大的像素点
{
      putpixel(x,y,color);
      putpixel(x-1,y-1,color);
      putpixel(x,y-1,color);
      putpixel(x+1,y-1,color);
      putpixel(x-1,y,color);
      putpixel(x+1,y,color);
      putpixel(x-1,y+1,color);
	  putpixel(x,y+1,color);
	  putpixel(x+1,y+1,color);
}

Drone *around(Drone *current,Pos destination,Drone *next)//周围创建八个无人机并赋值，
{                                                        //然后选取代价最低的无人机返回
	int i,j;
	Drone temp;
	Drone d[8];
	d[0].x=current->x-1;d[0].y=current->y-1;
	d[1].x=current->x;d[0].y=current->y-1;
	d[2].x=current->x+1;d[0].y=current->y-1;
	d[3].x=current->x-1;d[0].y=current->y;
	d[4].x=current->x+1;d[0].y=current->y;
	d[5].x=current->x-1;d[0].y=current->y+1;
	d[6].x=current->x;d[0].y=current->y+1;
	d[7].x=current->x+1;d[0].y=current->y+1;//周围八个无人机
	for(i=0;i<8;i++)
	{
		get_G(current,&d[i]);
		get_H(&d[i],destination);
		get_F(&d[i]);
	}//给周围八个无人机的三种代价赋值
	 for(i=0;i<8;i++)
      {
       for(j=i+1;j<8;j++)
       {
         if(d[j].F<d[i].F)
         {
             temp=d[i];
             d[i]=d[j];
             d[j]=temp;
         }
       }
      }//根据起点终点的曼哈顿距离代价从小到大排序
      	next->G=d[0].G;
        next->F=d[0].F;
        next->H=d[0].H;
        next->x=d[0].x;
        next->y=d[0].y;
        return next;
}

void Astar(int startx,int starty,int endx,int endy,int color)//在一个位置创建初始无人机
   					//再在周围创建八个无人机并赋值，然后不断点亮随后的像素；
{
	Pos end;
	Drone *start;
	end.x=endx;
	end.y=endy;

	if((start=(Drone*)malloc(sizeof(Drone)))==NULL)
	{
	  printf("1not enough memory!");
      exit(1);
   }
   else
   {
   	start->x=startx;//初始化最开始的点（无人机）
   	start->y=starty;
   	start->G=0;
   	get_H(start,end);
   	get_F(start);
   }
   dmove(start,end,color);
   free(start);
   start=NULL;
}
void dmove(Drone *D,Pos destination,int color)
{
	Drone temp;
	Pos current;
	Pos next;
	do{
		current.x=D->x;
		current.y=D->y;
		D=around(D,destination,&temp);
		next.x=temp.x;
		next.y=temp.y;
		move(current,next,color);
	}while(D->F!=0);
}
void move(Pos s,Pos e,int color)
{
	Lpixel(s.x,s.y,BLACK);
    Lpixel(e.x,e.y,color);
    delay(30);
}

void move1(int startx,int starty,int endx,int endy,int color)      //step by step to move
{
   Lpixel(startx,starty,BLACK);
   Lpixel(endx,endy,color);
   delay(30);
}
	
	
	
	
	
	
	
	