#include"common.h"
int Draw()
{
	int page=0;
	int state=0,pre_state=0;
	clrmous(MouseX,MouseY);
	delay(100);
	//程序开始
	zbsr();
	
	while(1)
    {
    	mou_pos(&MouseX,&MouseY,&press);
		if(mouse_press(550,400,625,440) == 1)
		{
			 delay(100);
			page = 1;
			break;
		}
		//处理高亮

		  //MAIN框
			if(mouse_press(550,400,625,440) == 2)//鼠标在返回框中，且未点击
				{
					pre_state=state;
					state=1;
				
					if(pre_state!=1)//防止重复标亮
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(550,400,625,440);
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
							setcolor(LIGHTGRAY);
							setlinestyle(0,0,1);
							rectangle(550,400,625,440);
							break;	
					}
				}
	}
	return page;
	
}