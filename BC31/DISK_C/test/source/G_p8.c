#include"common.h"

int g_p8()
{
	int page=0;
	int state=0,pre_state=0;
	clrmous(MouseX,MouseY);
	delay(100);
	cleardevice();//把以前的页面清屏
	Fileread("..\\..\\picture8.txt");
	setfillstyle(1,LIGHTGRAY);
	bar(550,400,625,440);//next
	bar(550,340,625,380);//LAST
	bar(25,400,100,440);//MAIN
    setcolor(BLACK);
	settextstyle(1,0,3);//··
    outtextxy(585,420,"NEXT");
    outtextxy(585,360,"LAST");
    outtextxy(60,420,"MAIN");
	while(1)
    {
    	mou_pos(&MouseX,&MouseY,&press);
    	if(mouse_press(25,400,100,440) == 1)
		{
			delay(100);
			page = 1;
			break;
		}
		if(mouse_press(550,400,625,440) == 1)
		{
			page = 11;
			break;
		}
		if(mouse_press(550,340,625,380) == 1)
		{
			page = 9;
			break;
		}
		//处理高亮
	    //MAIN框
				if(mouse_press(25,400,100,440) == 2)//鼠标在登录框中，且未点击
				{
					pre_state=state;
					state=1;
					if(pre_state!=1)//防止重复标亮
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(25,400,100,440);
					}
				}
		//NEXT框
				else if(mouse_press(550,400,625,440) == 2)//鼠标在返回框中，且未点击
				{
					pre_state=state;
					state=2;
				
					if(pre_state!=2)//防止重复标亮
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(550,400,625,440);
					}
				}
		//LAST框
				else if(mouse_press(550,340,625,380) == 2)//鼠标在返回框中，且未点击
				{
					pre_state=state;
					state=3;
				
					if(pre_state!=3)//防止重复标亮
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(550,340,625,380);
					}
				}
		
		//无操作状态
				else
				{
					pre_state=state;
					state=0;
				}	
		//如果状态发生改变，且之前不是无操作状态，则可能需清除标亮
				if(pre_state!=state && pre_state!=0)
				{
					clrmous(MouseX,MouseY);
					delay(5);
			
					switch(pre_state)
					{
						case 1:
							setcolor(LIGHTGRAY);//原来边框的颜色
							setlinestyle(0,0,1);
							rectangle(25,400,100,440);	
							break;
						case 2:
							setcolor(LIGHTGRAY);
							setlinestyle(0,0,1);
							rectangle(550,400,625,440);
							break;
						case 3:
							setcolor(LIGHTGRAY);
							setlinestyle(0,0,1);
							rectangle(550,340,625,380);
							break;	
					}
				}
	}
	return page;
}