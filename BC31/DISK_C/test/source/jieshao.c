#include"common.h"

void jieshao()
{
    int chat_page;
    cleardevice();

	setbkcolor(BLACK);	
	setfillstyle(SOLID_FILL, LIGHTBLUE);
    bar(0, 0, 640, 480);
    setfillstyle(SOLID_FILL,BLUE);
    bar(40, 250, 600, 380);
    setfillstyle(SOLID_FILL,WHITE);
    bar(50, 260, 590, 370);


    setfillstyle(1,LIGHTGRAY);
	bar(550,400,625,440);//MAIN
    setcolor(BLACK);
	settextstyle(1,0,3);//路路
    outtextxy(585,420,"MAIN");

	puthz(400-10, 400-50, "点击框内任意处进行对话",16,16,DARKGRAY);

    while(1)		//鼠标点击进行动画
	{
		mou_pos(&MouseX,&MouseY,&press);
        if(mouse_press(550,400,625,440)== 1)
        {
            delay(150);
            break;
        }
		else if(mouse_press(50, 320, 590, 430)== 1)
		{
            delay(200);
			setbkcolor(BLACK);	
	        setfillstyle(SOLID_FILL, LIGHTBLUE);
	        bar(0, 0, 640, 480);
	        setfillstyle(SOLID_FILL,BLUE);
            bar(40, 250, 600, 380);
            setfillstyle(SOLID_FILL,WHITE);
            bar(50, 260, 590, 370);
            puthz(400-10, 400-50, "点击框内任意处进行对话",16,16,DARKGRAY);

            
            setfillstyle(1,LIGHTGRAY);
	        bar(550,400,625,440);//MAIN
            setcolor(BLACK);
	        settextstyle(1,0,3);//路路
            outtextxy(585,420,"MAIN");
			if(chat_page == 0)
			{
				
				puthz(60, 300 - 8, "你好长官，这里是无人机灯光秀中控室", 16, 16, BLACK);
				
			}

			else if(chat_page == 1)									///////////////////////////////////锟斤拷锟斤拷CFidint锟斤拷锟斤拷锟斤拷锟接︼拷牟锟酵?医锟斤拷
			{
				puthz(60, 300 - 8, "很高兴在这里见到你", 16, 16, BLACK);
				
			}
			else if (chat_page == 2)
			{
				//outtextxy(60, 300-8, "yisheng: womendexitonghaimeijilunidexuehao, qingnigaosuwonidexuehao.");
				puthz(60, 300 - 8, "请允许我为你介绍这里的情况", 16, 16, BLACK);	
			}

			else if(chat_page == 3)
			{
				puthz(60, 300 - 8, "在“队形展示”功能中", 16, 16, BLACK);
			}

			else if(chat_page == 4)
			{
				puthz(60, 300 - 8, "你可以浏览目前以及编排好的无人机演示队形", 16, 16, BLACK);
			}
            else if(chat_page == 5)
			{
				puthz(60, 300 - 8, "在“灯光秀”功能中", 16, 16, BLACK);
			}
			else if(chat_page == 6)
			{
				puthz(60, 300 - 8, "你可以观赏无人机灯光秀的最终演示效果", 16, 16, BLACK);
			}
            else if(chat_page == 7)
			{
				puthz(60, 300 - 8, "在“实时控制”功能中", 16, 16, BLACK);
			}
            else if(chat_page == 8)
			{
				puthz(60, 300 - 8, "你可以自己设计想要的图案，无人机小编队会依据您的设计进行演示", 16, 16, BLACK);
			}
            else if(chat_page == 9)
			{
				puthz(60, 300 - 8, "在“路径模仿系统”功能中", 16, 16, BLACK);
			}
            else if(chat_page == 10)
			{
				puthz(60, 300 - 8, "您可以为单个无人机的运动设计运动路线", 16, 16, BLACK);
			}
            else if(chat_page == 11)
			{
				puthz(60, 300 - 8, "在“避障实验系统”功能中", 16, 16, BLACK);
			}
            else if(chat_page == 12)
			{
				puthz(60, 300 - 8, "我们将用单个无人机演示避障功能", 16, 16, BLACK);
			}
            else if(chat_page == 13)
            {
                puthz(60, 300 - 8, "以上就是中控室的全部功能了", 16, 16, BLACK);
            }
			else if(chat_page == 14)
            {
                puthz(60, 300 - 8, "点击开启你的无人机设计之旅吧！", 16, 16, BLACK);
            }
			else
			{
				break;
			}
			chat_page++;
		}
}
}