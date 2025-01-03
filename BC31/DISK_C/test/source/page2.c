#include "common.h"
#include "page2.h"
#define Key_Up 0x4800
#define Key_Down 0x5000
#define Key_Right 0x4d00
#define Key_Left 0x4b00
//#include "image.h"
void puthz(int x, int y, char *s, int flag, int part, int color);
void jdt2(int x);
void initpeople(int x,int y);
void clearpeople(int x,int y);
int p2(void)
{
	int page = 0;
	int state=0,pre_state=0;
	int hz_x,key;
	int pp_x,pp_y;
	int key1;
	int x=3,y=10;
	char a;
	int map[12][16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
					 0,2,2,2,3,3,3,3,4,4,4,4,5,5,5,0,
					 0,2,2,2,3,3,3,3,4,4,4,4,5,5,5,0,
					 0,2,2,2,1,1,1,1,1,1,1,1,1,1,1,0,
					 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
					 0,1,1,1,1,0,0,0,0,1,1,1,1,1,1,0,
					 0,1,1,1,1,0,0,0,0,1,1,6,6,6,6,0,
					 0,1,1,1,1,0,0,0,0,1,1,6,6,6,6,0,
					 0,1,1,1,1,1,1,1,1,1,1,6,6,6,6,0,
					 0,1,1,1,1,1,1,1,1,1,1,7,7,7,7,0,
					 0,8,8,1,1,1,1,1,1,1,1,7,7,7,7,0,
					 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	//闃叉榧犳爣鍦ㄨ烦杞〉闈㈡椂鐣欑棔
	clrmous(MouseX,MouseY);
	cleardevice();
	setfillstyle(1,WHITE);
	bar(0,0,640,480);
	setcolor(BLUE);
	rectangle(140,140,480,250);
	puthz(150,150,"无人机编队灯光秀制作",32,32,BLUE);
	puthz(230,200,"中控室加载中",32,32,BLUE);
	hz_x=590;
	key=0;
	do
	{
		jdt2(hz_x);
		delay(5);
		hz_x--;
		  if(hz_x==50)
		{
			key=1;
        } 
    } while (key==0);

	

	page2_screen();
	pp_x=x;
	pp_y=y;
	/*寰幆锛屼笉鍋滃湴鐩戞祴寮傚姩锛屽綋寮傚姩瀵艰嚧page鍊兼敼鍙橈紝璺宠浆椤甸潰*/
	while(1)
	{
		initpeople(x,y);
		if(kbhit())
		{
			//getch();
			a=getch();
			if(a=='w')
			{
				pp_y--;
			}
			else if(a=='a')
			{
				pp_x--;
			}
			else if(a=='s')
			{
				pp_y++;
			}
			else if(a=='d')
			{
				pp_x++;
			}
			

			if(map[pp_y][pp_x]==1)
			{
				clearpeople(x,y);
				x=pp_x;
				y=pp_y;
			}
			else if(map[pp_y][pp_x]==2)
			{
				page=16;
				break;
			}
			else if(map[pp_y][pp_x]==3)
			{
				page=3;
				break;
			}
			else if(map[pp_y][pp_x]==4)
			{
				page=12;
				break;
			}
			else if(map[pp_y][pp_x]==5)
			{
				page=15;
				break;
			}
			else if(map[pp_y][pp_x]==6)
			{
				page=13;
				break;
			}
			else if(map[pp_y][pp_x]==7)
			{
				page=14;
				break;
			}
			else if(map[pp_y][pp_x]==8)
			{
				page=0;
				break;
				x=3;
				y=10;
				pp_x=x;
				pp_y=y;
			}
			else
			{
				pp_x=x;
				pp_y=y;
			}
		}






		//鑾峰彇榧犳爣鐨勪綅缃拰鐘舵�?
		mou_pos(&MouseX,&MouseY,&press);
		
		//鐐瑰嚮閫�鍑篍XIT妗?
		if(mouse_press(20,400,120,460) == 1)
		{
			page = 0;
			break;
		}
		//使用说明
	    if(mouse_press(20,20,150,150) == 1)
		{
			page=16;
			break;
		}
		//Formation
		if(mouse_press(150,20,310,120) == 1)
		{
			page=3;
			break;
		}
		//Perform
		if(mouse_press(310,20,470,120) == 1)
		{
			page=12;
			break;
		}
		//imitation
		if(mouse_press(440,240,620,360) == 1)
		{
			page=13;
			break;
		}
		//Avoid
		if(mouse_press(440,360,620,460) == 1)
		{
			page=14;
			break;
		}
		//Draw
		if(mouse_press(480,20,620,120) == 1)
		{
			page=15;
			break;
		}
		
		//澶勭悊楂樹寒
		//EXIT妗?
		if(mouse_press(20,400,120,460) == 2)//榧犳爣鍦ㄧ櫥褰曟涓紝涓旀湭鐐瑰嚮
				{
					pre_state=state;
					state=1;
					if(pre_state!=1)//闃叉閲嶅鏍囦寒
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(20,400,120,460);
					}
				}
				
		
		//操作指南妗?
				else if(mouse_press(20,20,150,150) == 2)//榧犳爣鍦ㄨ繑鍥炴涓紝涓旀湭鐐瑰嚮
				{
					pre_state=state;
					state=2;
				
					if(pre_state!=2)//闃叉閲嶅鏍囦寒
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(20,20,150,150);
					}
				}
			
		//Formation妗?
			else if(mouse_press(150,20,310,120) == 2)//榧犳爣鍦ㄨ繑鍥炴涓紝涓旀湭鐐瑰嚮
				{
					pre_state=state;
					state=3;
				
					if(pre_state!=3)//闃叉閲嶅鏍囦寒
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(150,20,310,120);
					}
				}
		//Perform妗?	
					else if(mouse_press(310,20,470,120) == 2)//榧犳爣鍦ㄨ繑鍥炴涓紝涓旀湭鐐瑰嚮
				{
					pre_state=state;
					state=4;
				
					if(pre_state!=4)//闃叉閲嶅鏍囦寒
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(310,20,470,120);
					}
				}
		//imitation妗?
					else if(mouse_press(440,240,620,360) == 2)//榧犳爣鍦ㄨ繑鍥炴涓紝涓旀湭鐐瑰嚮
				{
					pre_state=state;
					state=5;
				
					if(pre_state!=5)//闃叉閲嶅鏍囦寒
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(440,240,620,360);
					}
				}
		//Avoid妗?	
				else if(mouse_press(440,360,620,460) == 2)//榧犳爣鍦ㄨ繑鍥炴涓紝涓旀湭鐐瑰嚮
				{
					pre_state=state;
					state=6;
				
					if(pre_state!=6)//闃叉閲嶅鏍囦寒
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(440,360,620,460);
					}
				}	
		//Draw妗?
				else if(mouse_press(480,20,620,120) == 2)//榧犳爣鍦ㄨ繑鍥炴涓紝涓旀湭鐐瑰嚮
				{
					pre_state=state;
					state=7;
				
					if(pre_state!=7)//闃叉閲嶅鏍囦寒
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(480,20,620,120);
					}
				}	
				
//鏃犳搷浣滅姸鎬?
		else
		{
			pre_state=state;
			state=0;
		}	
		

		//濡傛灉鐘舵�佸彂鐢熸敼鍙橈紝涓斾箣鍓嶄笉鏄棤鎿嶄綔鐘舵�侊紝鍒欏彲鑳介渶娓呴櫎鏍囦寒
		if(pre_state!=state && pre_state!=0)
		{
			clrmous(MouseX,MouseY);
			delay(5);
			
				switch(pre_state)
				{
					case 1:
						setcolor(BLUE);//鍘熸潵杈规鐨勯鑹?
						setlinestyle(0,0,1);
						rectangle(20,400,120,460);	
						break;
					case 2:
						setcolor(BLUE);
						setlinestyle(0,0,1);
						rectangle(20,20,150,150);
						break;	
					case 3:
						setcolor(BLUE);
						setlinestyle(0,0,1);
						rectangle(150,20,310,120);
						break;	
					case 4:
						setcolor(BLUE);
						setlinestyle(0,0,1);
						rectangle(310,20,470,120);
						break;	
					case 5://imitation妗?
						setcolor(BLUE);
						setlinestyle(0,0,1);
						rectangle(440,240,620,360);
						break;
					case 6://Avoid妗?
						setcolor(BLUE);
						setlinestyle(0,0,1);
						rectangle(440,360,620,460);
						break;
					case 7://Draw妗?
						setcolor(BLUE);
						setlinestyle(0,0,1);
						rectangle(480,20,620,120);
						break;
				
				}
		}
		
    }
	return page;
}

void page2_screen(void)
{
	cleardevice();//鎶婁互鍓嶇殑椤甸潰娓呭睆
	
	setbkcolor(BLUE);//鑳屾櫙鑹茶缃?
	setfillstyle(1,GREEN);
	bar(20,20,620,460);
	setfillstyle(1,LIGHTBLUE);
	bar(40,40,600,440);
	
   setcolor(BLUE);
   setfillstyle(1,LIGHTGRAY);
  bar(150,20,310,120);//Formation鏂规
  rectangle(150,20,310,120);

   setfillstyle(1,LIGHTGRAY);
  bar(310,20,470,120);//Perform鏂规
  rectangle(310,20,470,120);
  
   setfillstyle(1,LIGHTGRAY);  
  bar(440,240,620,360);//imitation鏂规
  rectangle(440,240,620,360);
  
   setfillstyle(1,LIGHTGRAY);  
  bar(440,360,620,460);//Avoid鏂规
  rectangle(440,360,620,460);
  
	setfillstyle(1,LIGHTGRAY);  
  bar(480,20,620,120);//Draw鏂规
  rectangle(480,20,620,120);
  
  
    setfillstyle(1,LIGHTGRAY);
  bar(20,400,120,460);//EXIT鏂规
  rectangle(20,400,120,460);
  
    setfillstyle(1,LIGHTGRAY);
  bar(20,20,150,150);//操作指南
  rectangle(20,20,150,150);

  setfillstyle(1,DARKGRAY);
  bar(200,200,350,320);
  //中控室

  
  
   setcolor(BLACK);
   settextstyle(3,0,3);
   outtextxy(60,420,"EXIT");
   
   setcolor(BLACK);
   settextstyle(3,0,3);
  
  //命名
	 puthz(30, 45, "中控室", 32, 32, RED);
	 puthz(22, 80, "操作指南", 32, 32, RED);
	puthz(170, 50, "队形展示", 32, 32, RED);
	puthz(340, 50, "灯光秀", 32, 32, RED);
	puthz(500, 30, "实时控制", 32, 32, RED);
	puthz(460, 260, "路径模仿系统", 32, 32, RED);
	puthz(460, 370, "避障试验系统", 32, 32, RED);
   puthz(220, 250, "中控室", 32, 32, BLUE);
   //outtextxy(420,340,"Creation");//鍒涙剰
}

void jdt2(int x)//进度条画函数
{
    int y;
    y=300;
    putpixel(x,y,BLUE);
    putpixel(x,y+1,BLUE);
    putpixel(x,y+2,BLUE);
    putpixel(x,y+3,BLUE);
    putpixel(x,y+4,BLUE);
    putpixel(x,y+5,BLUE);
    putpixel(x,y+6,BLUE);
    putpixel(x,y+7,BLUE);
    putpixel(x,y+8,BLUE);
	putpixel(x,y+9,BLUE);
    putpixel(x,y+10,BLUE);
	putpixel(x,y+11,BLUE);
	putpixel(x,y+12,BLUE);
	putpixel(x,y+13,BLUE);
	putpixel(x,y+14,BLUE);
	putpixel(x,y+15,BLUE);
	putpixel(x,y+16,BLUE);
	putpixel(x,y+17,BLUE);
	putpixel(x,y+18,BLUE);
	putpixel(x,y+19,BLUE);
	putpixel(x,y+20,BLUE);
	putpixel(x,y+21,BLUE);
	putpixel(x,y+22,BLUE);
	putpixel(x,y+23,BLUE);
}

void initpeople(int x,int y)
{
	 int unit = 40;
	setfillstyle(SOLID_FILL, LIGHTRED);
    bar(x * unit + 5, y * unit + 5, (x + 1) * unit - 5, (y + 1) * unit - 5); //锟斤拷色锟斤拷锟斤拷
}

void clearpeople(int x,int y)
{
	int unit=40;
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	 bar(x * unit + 5, y * unit + 5, (x + 1) * unit - 5, (y + 1) * unit - 5);
}