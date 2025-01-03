#include "common.h"
#include "page1.h"
#define SIZE 10
//因为需要返回page值，所以页面的函数需是int型
int p1(void)
{
	int page = 0;
	void *pt_addr;
 	int x,y,maxx,maxy,midx,midy,i;
 	unsigned int size;
 	int state=0,pre_state=0;

	//防止鼠标在跳转页面时留痕
	clrmous(MouseX,MouseY);
	delay(100);
	cleardevice();//把以前的页面清屏
	
	maxx=getmaxx();//取允许的最大 x 值
 	maxy=getmaxy();//取允许的最大 y 值
 	midx=maxx/2;//获得 x 轴的中间值
 	x=0;
 	midy=maxy/2;//获得 y 轴的中间值
 	y=maxy/2;
 	setcolor(YELLOW);//设置画笔颜色为黄色
 	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);//设置文本输出的字形、方向和大小
 	settextjustify(CENTER_TEXT,CENTER_TEXT);//设置文本输出的位置
 	outtextxy(midx,50,"Drone Light Show");//输出文本
 	setbkcolor(BLACK);//设置背景色
 	
 	//初始页面画框
	setcolor(RED);
	setfillstyle(SOLID_FILL, BLUE);//设定蓝色框
	bar(50, 350, 250, 350+60);//跳转页面
	setcolor(WHITE);
	settextstyle(1,0,3);
	outtextxy(50+100,350+25,"Begin");

	setfillstyle(SOLID_FILL, RED);//设定红色框
	bar(400, 350, 400+200, 350+60);//退出程序
	outtextxy(400+100,350+25,"Exit");
	
 	
 	setcolor(LIGHTBLUE);//设置画笔颜色
 	for(i=0;i<13;i++)//画地球
 	{
 	ellipse(midx,midy,0,360,100,100-8*i);
 	ellipse(midx,midy,0,360,100-8*i,100);
 	}
 	
 	draw_image(x,y);//画卫星
 	size=imagesize(x,y-SIZE,x+(4*SIZE),y+SIZE);//获得存储卫星图像所需字节数
 	pt_addr=malloc(size);//开辟一块内存区域
 	getimage(x,y-SIZE,x+(4*SIZE),y+SIZE,pt_addr);//保存卫星图像
 	putpixel_demo();//画星星
 	setcolor(WHITE);//设置画笔颜色
 	setlinestyle(SOLID_LINE,0,NORM_WIDTH);//设置线型
 	rectangle(0,0,maxx,maxy);//画一矩形框
 	
	 while(page==0)
 	{
		//防止鼠标在跳转页面时留痕
	//clrmous(MouseX,MouseY);
	//登录框
        delay(1);
	    mou_pos(&MouseX,&MouseY,&press);
		if(mouse_press(50, 350, 250, 350+60) == 2)//鼠标在登录框中，且未点击
				{
					pre_state=state;
					state=1;
					if(pre_state!=1)//防止重复标亮
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(50, 350, 250, 350+60);
					}
				}
				
		else if(mouse_press(50, 350, 250, 350+60) == 1)//鼠标在登录框中，且点击
		{
				page = 1;//返回1到主函数的页面跳转循环
		}
		
		//注册框
				else if(mouse_press(400, 350, 400+200, 350+60) == 2)//鼠标在返回框中，且未点击
				{
					pre_state=state;
					state=2;
				
					if(pre_state!=2)//防止重复标亮
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(YELLOW);
						setlinestyle(0,0,1);
						rectangle(400, 350, 400+200, 350+60);
					}
				}
				else if(mouse_press(400, 350, 400+200, 350+60) == 1)//鼠标在返回框中，且点击
				{
					page = 2;//返回2到主函数的页面跳转循环
				}
				
//无操作状态
		else
		{
			pre_state=state;
			state=0;
		}	
		
		//鼠标
	//点击跳转页面框，跳转到页面2界面
	/*	if(mouse_press(50, 350, 250, 350+60) == 1)
		{
			page = 1;//返回1到主函数的页面跳转循环
		}
		
		//点击退出程序框
		else if(mouse_press(400, 350, 400+200, 350+60) == 1)
		{
			page = 2;//返回2到主函数的页面跳转循环
		}
	*/	
		//如果状态发生改变，且之前不是无操作状态，则可能需清除标亮
		if(pre_state!=state && pre_state!=0)
		{
			clrmous(MouseX,MouseY);
			delay(5);
			
				switch(pre_state)
				{
					case 1:
						setcolor(WHITE);//原来边框的颜色
						setlinestyle(0,0,1);
						rectangle(50, 350, 250, 350+60);	
						break;
					case 2:
						setcolor(WHITE);
						setlinestyle(0,0,1);
						rectangle(400, 350, 400+200, 350+60);
						break;					
				}
		}
		
			
 
	
		
		//点击跳转页面框，跳转到页面2界面
		if(mouse_press(50, 350, 250, 350+60) == 1)
		{
			page = 1;//返回1到主函数的页面跳转循环
		}
		
		//点击退出程序框
		else if(mouse_press(400, 350, 400+200, 350+60) == 1)
		{
			page = 2;//返回2到主函数的页面跳转循环
		}
    
 	putimage(x,y-SIZE,pt_addr,XOR_PUT);//移动卫星图像
 	x=x+5;
 	if(x>maxx)
 	x=0;
 	putimage(x,y-SIZE,pt_addr,XOR_PUT);
 	delay(100);//延时
    }
 	free(pt_addr);//释放内存空间
	
	/*循环，不停地监测异动，当异动导致page值改变，跳转页面*/

	return page;
}

//绘制页面1界面
void page1_screen(void)
{
    void *pt_addr;
 	int x,y,maxx,maxy,midx,midy,i;
 	unsigned int size;
	cleardevice();//把以前的页面清屏
	maxx=getmaxx();//取允许的最大 x 值
 	maxy=getmaxy();//取允许的最大 y 值
 	midx=maxx/2;//获得 x 轴的中间值
 	x=0;
 	midy=maxy/2;//获得 y 轴的中间值
 	y=maxy/2;
 	setcolor(YELLOW);//设置画笔颜色为黄色
 	settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);//设置文本输出的字形、方向和大小
 	settextjustify(CENTER_TEXT,CENTER_TEXT);//设置文本输出的位置
 	outtextxy(midx,400,"COMPUTER WORLD");//输出文本
 	setbkcolor(BLACK);//设置背景色
 	setcolor(LIGHTBLUE);//设置画笔颜色
 	for(i=0;i<13;i++)//画地球
 	{
 	ellipse(midx,midy,0,360,100,100-8*i);
 	ellipse(midx,midy,0,360,100-8*i,100);
 		}
 	draw_image(x,y);//画卫星
 	size=imagesize(x,y-SIZE,x+(4*SIZE),y+SIZE);//获得存储卫星图像所需字节数
 	pt_addr=malloc(size);//开辟一块内存区域
 	getimage(x,y-SIZE,x+(4*SIZE),y+SIZE,pt_addr);//保存卫星图像
 	putpixel_demo();//画星星
 	setcolor(WHITE);//设置画笔颜色
 	setlinestyle(SOLID_LINE,0,NORM_WIDTH);//设置线型
 	rectangle(0,0,maxx,maxy);//画一矩形框
 	
 	//初始页面画框
	setcolor(RED);
	setfillstyle(SOLID_FILL, BLUE);//设定蓝色框
	bar(180, 220, 180+280, 220+60);//跳转页面
	setcolor(WHITE);
	settextstyle(1,0,3);
	outtextxy(180+100,220+15,"Begin");

	setfillstyle(SOLID_FILL, RED);//设定红色框
	bar(180, 220+60+40, 180+280, 220+60+40+60);//退出程序
	outtextxy(180+100,220+100+15,"Exit");
	
	
	
	 while(!kbhit())//移动卫星图像
 	{
		//防止鼠标在跳转页面时留痕
	clrmous(MouseX,MouseY);
	delay(100);
    
 	putimage(x,y-SIZE,pt_addr,XOR_PUT);
 	x=x+5;
 	if(x>maxx)
 	x=0;
 	putimage(x,y-SIZE,pt_addr,XOR_PUT);
 	delay(100);//延时
	 }
 	free(pt_addr);//释放内存空间
 }

 void draw_image(int x,int y)//画卫星
 {
 moveto(x+10,y);
 setcolor(14);
 setfillstyle(1,4);//设置填充模式和填充颜色
 //画卫星天线 linerel(-3*10,2*10);
 moveto(x+10,y);
 linerel(-3*10,-2*10);
  moveto(x+10,y);
 linerel(-3*10,2*10);
 moveto(x+25,y);
 linerel(-5*10,0);
 fillellipse(x+13,y,8,8);//画本体 }
}

void putpixel_demo(void)//画星星{
{
 	int i,dotx,doty,h,w,color,maxcolor;
 	maxcolor=getmaxcolor();//得到当前最大颜色数
 	w=getmaxx();//获得 x 轴和 y 轴的最大值
 	h=getmaxy();
 	for(i=0;i<5000;++i)
 	{
 	dotx=1+random(w-1);
 	doty=1+random(h-1);
 	color=random(maxcolor);
 	putpixel(dotx,doty,color);//用点表示星星
 	}
 }
	