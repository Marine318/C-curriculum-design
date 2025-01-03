#include "common.h"
#include "main.h"
#define SIZE 10
void main(void)
{
	/***********各种初始�?*****************/
	/*设定初始页面
	调试的时候可以改变page的初始设定，直接跳转到需要调试的页面
	*/
	int page = 0;
	//VGA画图的初始化
    int graphdriver = VGA;
    int	graphmode = VGAHI;
    initgraph(&graphdriver, &graphmode, "c:\\BORLANDC\\bgi");
	//鼠标的初始化
	mouseinit();
	
	/*
	*********页面跳转循环***********
	每一个页面对应一个page值，
	在各个页面的程序中，每一次有需要跳转页面的时候，就改变page值，且回到主程序
	在主程序的循环中，通过page值的改变，跳转到相应页面
	*/
	while(1)
	{
		switch(page)
		{
			case 0://页面1（初始页面）
			    page = p1();
				break;
				
			case 1://页面2
			    page = p2();
				break;
				
			case 2://退出程�?
				closegraph();//关闭画图
			    exit(0);//退出程�?
			case 3:
				page=g_p1();//以下九个是功能一的展示图�?
				break;
			case 4:
				page=g_p2();
				break;
			case 5:
				page=g_p3();
				break;
			case 6:
				
				page=g_p4();
				break;
			case 7:
				page=g_p5();
				break;
			case 8:
				page=g_p6();
				break;
			case 9:
				page=g_p7();
				break;
			case 10:
				page=g_p8();
				break;
			case 11:
				page=g_p9();
				break;
			case 12:
				page=s_play();//功能2的页�?
				break;
			case 13:
				page=path();//创意功能——路径模�?
				break;
			case 14:
				page=avoid();//创意功能——躲避障�?
				break;
			case 15:
				page=Draw();//创意功能——画图飞�?
				break;
			case 16:
				page=use();//创意功能——画图飞�?
				break;
				
		}
	}
}
		
				
