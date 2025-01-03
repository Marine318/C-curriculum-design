#include "common.h"
//这个文件只需要取Astar1()函数，其他函数都是为Astar1准备的；
void dmove1(Drone *D,Pos destination,int color,int order,FILE *p1);     //the process from the start to the end 
void move1(Pos e,int color,int order,FILE *p1);      //step by step to move
void Astar1(int startx,int starty,int endx,int endy,int color,int order,FILE *p1);  // input the start and the end  and move the drone

void dmove1(Drone *D,Pos destination,int color,int order,FILE *p1)     //the process from the start to the end 
{
   Drone p;  //as a temp;
   Pos current; 
   Pos next;
   do{
	 D=around(D,destination,&p);//在周围八点搜索，选取代价最低值返回
     next.x=p.x;  next.y=p.y;
	  move1(next,color,order,p1);
   }while(D->H!=0);
}

void move1(Pos e,int color,int order,FILE *p1)      //step by step to move   and record the step  //移动，然后存储数据；
{
   char string[10];
   char X[10],Y[10];
   char COLOR[5];
   if(order<10)
   {
      string[0]='0'; string[1]='0';
      itoa(order,string+2,10);//itoa函数（欲转化的数据，目标字符串的地址，转化后的进制数）；
   }
   else if(order<100)
   {
      string[0]='0';
      itoa(order,string+1,10);
   }
   else itoa(order,string,10);       //order

         if(e.y<10)
         {
            Y[0]='0';Y[1]='0';
            itoa(e.y,Y+2,10);
         }
         else if(e.y<100&&e.y>=10)
         {
               Y[0]='0';
               itoa(e.y,Y+1,10);      
         }
         else    itoa(e.y,Y,10);
         if(e.x<10)
         {
            X[0]='0';X[1]='0';
            itoa(e.x,X+2,10);
         }
         else if(e.x<100&&e.x>=10)
         {
               X[0]='0';
               itoa(e.x,X+1,10);      
         }
         else    itoa(e.x,X,10);


         if(color<10)   
         {
            COLOR[0]='0';
            itoa(color,COLOR+1,10);
         }
         else   itoa(color,COLOR,10);
         fputs(string,p1);  fputc(':',p1);
         fputc('R',p1); fputs(Y,p1);
         fputc('C',p1); fputs(X,p1);
         fputs(COLOR,p1);   fputc('\n',p1); 
}

void Astar1(int startx,int starty,int endx,int endy,int color,int order,FILE *p1)  // input the start and the end  and move the drone
{
	Drone *start;
   Pos end;  end.x=endx; end.y=endy;

   if((start=(Drone*)malloc(sizeof(Drone)))==NULL)
   {
	  printf("1not enough memory!");
      exit(1);
   }
   else
   {
    start->x=startx; start->y=starty; 
	start->G=0;  get_H(start,end);  get_F(start);
   }                                                          //init the start point
    dmove1(start,end,color,order,p1);
    free(start);  start=NULL;
}


