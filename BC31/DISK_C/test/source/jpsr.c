#include"common.h"
//#include"hz.h"
void jdt(int x);
void puthz(int x, int y,char *s,int flag,int part,int color);
void jpsr()
{
    int i,j,gdriver,gmode,X[600],Y[600],X1[600],Y1[600],X0,Y0,key=0,sum=0,a,tx,ty,now,speed,over;
    unsigned int size;
    int x,y,hzpd,hz_x;
    int x0,y0;//鏃犱汉鏈鸿繍鍔ㄨ捣濮嬬偣
    void *pt_addr;
    long start;
    int state=0;
   
    //setbkcolor(DARKGRAY);
    setfillstyle(1,DARKGRAY);
	bar(0,0,680,480);
    wdrone(10+320,10);
    size=imagesize(5+320,5,15+320,15);
    pt_addr=malloc(size);
    getimage(5+320,5,15+320,15,pt_addr);
	
	/* 鐢诲浘 */
	
	setlinestyle(0,0,2);
	moveto(0,50);
	lineto(480,50);
	setlinestyle(0,0,3);
	moveto(320,50);
	lineto(320,500);
	setfillstyle(1,DARKGRAY);
	bar(0,0,680,480);
	setfillstyle(1,LIGHTGRAY);
	bar(0,0,680,50);
	setfillstyle(1,WHITE);
	bar(318,50,322,480);
	settextstyle(SMALL_FONT,HORIZ_DIR,30);
	outtextxy(300,20," CUSTOM LINE DEMONSTRATION");
	
	/////
	
	setfillstyle(1,LIGHTGRAY);
	bar(550,400,625,440);//MAIN
    setcolor(BLACK);
	settextstyle(1,0,3);//路路
    outtextxy(585,420,"MAIN");
	
	
  
	for(i=0;i<600;i++)
		{
			X[i]=0;
			Y[i]=0;
		}//鍒濆?嬪寲
	sum=0;
	speed = 100;
	mouseinit();
	
	setfillstyle(1,LIGHTBLUE);
	bar(20,400,150+4,450);
	setfillstyle(1,WHITE);
	bar(22,402,150-2+4,450-2);
	puthz(23,403,"使用说明",32,32,BLUE);
	
	hzpd=0;
    do
    {
        mou_pos(&MouseX,&MouseY,&press);
         if(mouse_press(550,400,625,440) == 1)
		{ 
		    delay(150);
			
			goto state;//鐩存帴璺冲埌鍑芥暟缁撳熬
			
		}
		else if(mouse_press(550,400,625,440) == 2)//榧犳爣鍦ㄧ櫥褰曟?嗕腑锛屼笖鏈?鐐瑰嚮
				{
					
					
					if(state!=1)//闃叉?㈤噸澶嶆爣浜?
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(550,400,625,440);
					}
					state=1;
					
				}
		
		else if(MouseX>20 && MouseX<150 && MouseY>400 && MouseY<450 && hzpd==0)
        {
        	setcolor(DARKGRAY);
			setlinestyle(0,0,1);
			rectangle(550,400,625,440);
        	setfillstyle(1,GREEN);
			bar(180-1-10,178-1,360+100+11,255+1);
        	setfillstyle(1,WHITE);
			bar(180-10,178,360+100+10,255);
        	puthz(180,180,"使用鼠标点击确定无人机出发位置",16,16,BLUE);
        	settextstyle(SMALL_FONT,HORIZ_DIR,7);
        	puthz(180,205,"通过",16,16,BLUE);
        	setcolor(RED);
			outtextxy(190+25+5+40,185+25,"W A S D");
			puthz(265+40,185+20,"键画出无人机路径",16,16,BLUE);
			puthz(180,210+20,"画完后，使用键盘上",16,16,BLUE);
			outtextxy(330,208+23,"R");
			puthz(340,210+20,"暂停",16,16,BLUE);
        	hzpd=1;
        	state=0;
		}
        else if(press==1)
        {
            X0=MouseX;
            Y0=MouseY;
            sum=1;
        }
        
        if(mouse_press(20,400,154,450) == 2)//榧犳爣鍦ㄧ櫥褰曟?嗕腑锛屼笖鏈?鐐瑰嚮
				{
					
					
					if(state!=1)//闃叉?㈤噸澶嶆爣浜?
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(20,400,154,450);
					}
					state=1;
				}
			
		if((MouseX<550 || MouseX>625 || MouseY<400 || MouseY>440)  && state==1)
		{
			state=0;
			setcolor(DARKGRAY);
			setlinestyle(0,0,1);
			rectangle(550,400,625,440);
		}
        if((MouseX<20 || MouseX>150 || MouseY<400 || MouseY>450)  && hzpd==1)
        {
        	state=0;
        	cleardevice();
        	hzpd=0;
        	
        	setcolor(DARKGRAY);
			setlinestyle(0,0,1);
			rectangle(550,400,625,440);
        	setcolor(DARKGRAY);
			setlinestyle(0,0,1);
			rectangle(20,400,154,450);
        	setfillstyle(1,DARKGRAY);
			bar(0,0,680,480);
        	setfillstyle(1,LIGHTGRAY);
			bar(0,0,680,50);
			setfillstyle(1,WHITE);
			bar(319,50,321,480);
			
			setfillstyle(1,LIGHTBLUE);
			bar(20,400,150+4,450);
			setfillstyle(1,WHITE);
			bar(22,402,150-2+4,450-2);
			puthz(23,403,"使用说明",32,32,BLUE);
			
			setfillstyle(1,LIGHTGRAY);
			bar(550,400,625,440);//MAIN
    		setcolor(BLACK);
			settextstyle(1,0,3);//路路
    		outtextxy(585,420,"MAIN");
	
			settextstyle(SMALL_FONT,HORIZ_DIR,30);
			outtextxy(300,20," CUSTOM LINE DEMONSTRATION");
			hzpd=0;
		}
    }while(sum==0);
    x0=X0;
    y0=Y0;
    clrmous(MouseX,MouseY);

	//鍒濆�艰?剧疆


    wdrone(X0,Y0);
	do
	  {
	   //delay(100);
        mou_pos(&MouseX,&MouseY,&press);
		putpixel(X0,Y0,WHITE);
		X0=X0+X[sum];
		Y0=Y0+Y[sum];
		X1[sum]=X0;
		Y1[sum]=Y0;
		over=1;

		if(over)
			{
				getch();
				a= getch();
				sum++;
			}
		if(a=='w')
			{
				X[sum]=0;
				Y[sum]=-1;
			}
		if(a=='d')
			{
				X[sum]=1;
				Y[sum]=0;
			}
		if(a=='s')
			{
				X[sum]=0;
				Y[sum]=1;
			}
		if(a=='a')
			{
				X[sum]=-1;
				Y[sum]=0;
			}
		if(a=='r')
			{
				break;
			}

	}while(1);

    wdrone(X0,Y0);

	//鎵嬬敾璺?绋? 閫氳繃w,a,s,d鎿嶆帶锛宺鏆傚仠锛?

	setfillstyle(1,LIGHTBLUE);
	bar(180-2,120-2,460+2,280+2);
    setfillstyle(1,WHITE);
	bar(180,120,460,280);
    puthz(240,160,"路径读取中",32,32,BLUE);
    hz_x=200;
    do
    {
        jdt(hz_x);
        delay(10);
        hz_x++;
          if(hz_x==440)
        {
            key=1;
        } 
    } while (key==0);
	delay(100);
	cleardevice();
	/*  鐢诲浘  */
	setfillstyle(1,DARKGRAY);
	bar(0,0,680,480);
	setfillstyle(1,LIGHTGRAY);
	bar(0,0,680,50);
	
	setfillstyle(1,WHITE);
	bar(319,50,321,480);
	
	setfillstyle(1,LIGHTBLUE);
	bar(20,400,150+4,450);
	setfillstyle(1,WHITE);
	bar(22,402,150-2+4,450-2);
	puthz(23,403,"使用说明",32,32,BLUE);
    
	settextstyle(SMALL_FONT,HORIZ_DIR,30);
	outtextxy(300,20," CUSTOM LINE DEMONSTRATION");
	
	setfillstyle(1,LIGHTGRAY);
	bar(550,400,625,440);//MAIN
    setcolor(BLACK);
	settextstyle(1,0,3);//路路
    outtextxy(585,420,"MAIN");
    
    /*setfillstyle(1,LIGHTBLUE);
	bar(20,400,150+4,450);
	setfillstyle(1,WHITE);
	bar(22,402,150-2+4,450-2);
	puthz(23,403,"浣跨敤璇存槑",32,32,BLUE);*/

	x=x0;
	y=y0;
	for(i=0;i<=sum;i++)
        {
            //mou_pos(&MouseX,&MouseY,&press);
            setfillstyle(1,WHITE);
			bar(x,y,x+1,y+1);
			x=x+X[i];
            y=y+Y[i];
        }

	x=x0-5+320;
	y=y0-5;//涓轰粈涔堟槸鍑?5锛?
    for(i=0;i<=sum;i++)
        {
        	mou_pos(&MouseX,&MouseY,&press);
            putimage(x,y,pt_addr,XOR_PUT);
            x=x+X[i];
            y=y+Y[i];
            putimage(x,y,pt_addr,XOR_PUT);
            delay(speed);
            
        }
    state:
    //delay(500);
    free(pt_addr);
}
void wdrone(int x,int y)
    {
        putpixel(x,y,BLUE);
        putpixel(x,y-2,RED);
        putpixel(x,y+2,RED);
        putpixel(x-2,y,RED);
        putpixel(x+2,y,RED);
        putpixel(x-3,y-3,GREEN);
        putpixel(x+3,y+3,GREEN);
        putpixel(x-3,y+3,GREEN);
        putpixel(x+3,y-3,GREEN);
        putpixel(x,y-4,RED);
        putpixel(x,y+4,RED);
        putpixel(x-4,y,RED);
        putpixel(x+4,y,RED);
        putpixel(x-4,y-4,GREEN);
        putpixel(x+4,y+4,GREEN);
        putpixel(x-4,y+4,GREEN);
        putpixel(x+4,y-4,GREEN);
    }
    
void jdt(int x)
{
    int y;
    y=240;
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
         
}

