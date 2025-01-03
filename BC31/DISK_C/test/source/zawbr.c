#include"common.h"

void puthz(int x, int y,char *s,int flag,int part,int color);
void wwdrone(float x,float y);
void Amove(float *x,float *y,float k1,float b1);
void zawbr()
    {
        int i,j;
        
        int zaw[65][65],zaw1[65][65];//,zaw2[65][65],zaw3[65][65]
        unsigned int size;
        
        void *pt_addr;
        int X0,Y0;
        float x01,y01;
        int x,y,zaw_x,zaw_y,zaw_x1,zaw_y1;//,zaw_x2,zaw_y2,zaw_x3,zaw_y3
        int X1,Y1;
        float *x0=&x01,*y0=&y01,x1,y1;
        int k;
        int b;
        int map=0;
        float k1,b1;
        int key=0;
        int S=10;
        int state1=0; 
        int hzpd;
        
        setfillstyle(1,DARKGRAY);
     	bar(0,0,640,480);
        
     
        X0=10;
        Y0=10;
        wwdrone(X0,X0);
        size=imagesize(X0-6,Y0-6,X0+6,Y0+6);
        pt_addr=malloc(size);
        getimage(X0-6,Y0-6,X0+6,Y0+6,pt_addr);
        cleardevice();
        
        setfillstyle(1,LIGHTGRAY);
		bar(550,400,625,440);//MAIN
    	setcolor(BLACK);
		settextstyle(1,0,3);//··
    	outtextxy(585,420,"MAIN");
        
        setfillstyle(1,LIGHTGRAY);
        bar(0,0,680,480);
        //1
        setfillstyle(1,WHITE);
        bar(100,100,260,220);
        setfillstyle(1,BLUE);
        bar(100+(150/4),100+(150/4),100+(150/4)+15,100+(150/4)+15);//z1
        setfillstyle(1,BLUE);
        bar(100+(260/4),100+(260/4),100+(260/4)+15,100+(260/4)+15);//z2
        /* setfillstyle(1,BLUE);
        bar(100+(250/4),100+(140/4),100+(250/4)+15,100+(140/4)+15);//z3
        setfillstyle(1,BLUE);
        bar(100+(400/4),100+(280/4),100+(400/4)+15,100+(280/4)+15);//z4 */
        //2
        setfillstyle(1,WHITE);
        bar(420,100,580,220);
        setfillstyle(1,BLUE);
        bar(420+(150/4),100+(150/4),420+(150/4)+15,100+(150/4)+15);//z1
        setfillstyle(1,BLUE);
        bar(420+(150/4),100+(260/4),420+(150/4)+15,100+(260/4)+15);//z2
        /* setfillstyle(1,BLUE);
        bar(420+(320/4),100+(150/4),420+(320/4)+15,100+(150/4)+15);//z3
        setfillstyle(1,BLUE);
        bar(420+(320/4),100+(260/4),420+(320/4)+15,100+(260/4)+15);//z4 */
        //3
        setfillstyle(1,WHITE);
        bar(100,320-50,260,440-50);
        setfillstyle(1,BLUE);
        bar(100+(100/4),320+(150/4)-50,100+(100/4)+15,320+(150/4)+15-50);//z1
        setfillstyle(1,BLUE);
        bar(100+(180/4),320+(260/4)-50,100+(180/4)+15,320+(260/4)+15-50);//z2
        /* setfillstyle(1,BLUE);
        bar(100+(300/4),320+(140/4)-50,100+(300/4)+15,320+(140/4)+15-50);//z3
        setfillstyle(1,BLUE);
        bar(100+(300/4),320+(280/4)-50,100+(300/4)+15,320 +(280/4)+15-50);//z4 */
        //4
        setfillstyle(1,WHITE);
        bar(420,320-50,580,440-50);
        setfillstyle(1,BLUE);
        bar(420+(100/4),320+(150/4)-50,420+(100/4)+15,320+(150/4)+15-50);//z1
        setfillstyle(1,BLUE);
        bar(420+(260/4),320+(260/4)-50,420+(260/4)+15,320+(260/4)+15-50);//z2
       /* setfillstyle(1,BLUE);
        bar(420+(250/4),320+(140/4)-50,420+(250/4)+15,320+(140/4)+15-50);//z3
        setfillstyle(1,BLUE);
        bar(420+(400/4),320+(280/4)-50,420+(400/4)+15,320+(280/4)+15-50);//z4
 */
        setfillstyle(1,LIGHTBLUE);
	    bar(20,400,150+4,450);
	    setfillstyle(1,WHITE);
	    bar(22,402,150-2+4,450-2);
	    settextstyle(SMALL_FONT,HORIZ_DIR,7);
	    puthz(23,403,"ʹ��˵��",32,32,BLUE);
	
	    setfillstyle(1,LIGHTGRAY);
		bar(550,400,625,440);//MAIN
    	setcolor(BLACK);
		settextstyle(1,0,3);//··
    	outtextxy(585,420,"MAIN");
    	
	    hzpd=0;
        //mouseinit();

        do
        {
            mou_pos(&MouseX,&MouseY,&press);
            if(mouse_press(550,400,625,440) == 1)
		{ 
		    delay(100);
			//page = 1;
			goto state;//直接跳到函数结尾
			
		}
            if(mouse_press(100,100,260,220) == 2)//高亮
				{
					
					
					if(state1!=1)//闃叉閲嶅鏍囦�?
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(100,100,260,220);
					}
					state1=1;
					
				}//1 
            else if(mouse_press(420,100,580,220) == 2)//榧犳爣鍦ㄧ櫥褰曟涓紝涓旀湭鐐瑰嚮
				{
					
					
					if(state1!=1)//闃叉閲嶅鏍囦�?
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(420,100,580,220);
					}
					state1=1;
					
				}//2 
            else if(mouse_press(100,320-50,260,440-50) == 2)//榧犳爣鍦ㄧ櫥褰曟涓紝涓旀湭鐐瑰嚮
				{
					
					
					if(state1!=1)//闃叉閲嶅鏍囦�?
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(100,320-50,260,440-50);
					}
					state1=1;
					
				}//3 
            else if(mouse_press(420,320-50,580,440-50) == 2)//榧犳爣鍦ㄧ櫥褰曟涓紝涓旀湭鐐瑰嚮
				{
					
					
					if(state1!=1)//闃叉閲嶅鏍囦�?
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(420,320-50,580,440-50);
					}
					state1=1;
					
				}//4 
            else if(mouse_press(22,402,150-2+4,450-2) == 2)//使用说明高亮
				{
					
					
					if(state1!=1)//闃叉閲嶅鏍囦�?
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(22,402,150-2+4,450-2);
					}
					state1=1;
					
				}//
			else if(mouse_press(550,400,625,440) == 2)//使用说明高亮
				{
					
					
					if(state1!=1)//闃叉閲嶅鏍囦�?
					{
						clrmous(MouseX,MouseY);
						delay(5);
						
						setcolor(RED);
						setlinestyle(0,0,1);
						rectangle(550,400,625,440);
					}
					state1=1;
					
				}//main
            else if(state1==1)
                {
                    setcolor(WHITE);
					setlinestyle(0,0,1);
					rectangle(100,100,260,220);//1
                    setcolor(WHITE);
					setlinestyle(0,0,1);
					rectangle(420,100,580,220);//2
                    setcolor(WHITE);
					setlinestyle(0,0,1);
					rectangle(100,320-50,260,440-50);//3
                    setcolor(WHITE);
					setlinestyle(0,0,1);
					rectangle(420,320-50,580,440-50);//4
					setcolor(WHITE);
					setlinestyle(0,0,1);
					rectangle(550,400,625,440);//main
                    state1=0;
                }

        if(MouseX>20 && MouseX<150 && MouseY>400 && MouseY<450 && hzpd==0)
        {
        	
        	setfillstyle(1,GREEN);
			bar(180-1-10,178-1,360+100+11,255+1);
        	setfillstyle(1,WHITE);
			bar(180-10,178,360+100+10,255);
        	puthz(180,180,"��ͨ�����ѡ���ͼ",16,16,BLUE);
        	settextstyle(SMALL_FONT,HORIZ_DIR,7);
        	puthz(180,205,"�����ͼ����ͨ�����ѡ���յ�",16,16,BLUE);
        	settextstyle(SMALL_FONT,HORIZ_DIR,7);
			puthz(180,210+20,"���˻����Զ�Ѱַ�ӱ���ʻ���յ�",16,16,BLUE);
			
        	hzpd=1;
        	
		}

        if((MouseX<20 || MouseX>150 || MouseY<400 || MouseY>450)  && hzpd==1)
        {
            hzpd=0;
        setfillstyle(1,WHITE);
        bar(0,0,680,480);

        setfillstyle(1,LIGHTGRAY);
        bar(0,0,680,480);
        //1
        setfillstyle(1,WHITE);
        bar(100,100,260,220);
        setfillstyle(1,BLUE);
        bar(100+(150/4),100+(150/4),100+(150/4)+15,100+(150/4)+15);//z1
        setfillstyle(1,BLUE);
        bar(100+(260/4),100+(260/4),100+(260/4)+15,100+(260/4)+15);//z2
        /* setfillstyle(1,BLUE);
        bar(100+(250/4),100+(140/4),100+(250/4)+15,100+(140/4)+15);//z3
        setfillstyle(1,BLUE);
        bar(100+(400/4),100+(280/4),100+(400/4)+15,100+(280/4)+15);//z4 */
        //2
        setfillstyle(1,WHITE);
        bar(420,100,580,220);
        setfillstyle(1,BLUE);
        bar(420+(150/4),100+(150/4),420+(150/4)+15,100+(150/4)+15);//z1
        setfillstyle(1,BLUE);
        bar(420+(150/4),100+(260/4),420+(150/4)+15,100+(260/4)+15);//z2
        /* setfillstyle(1,BLUE);
        bar(420+(320/4),100+(150/4),420+(320/4)+15,100+(150/4)+15);//z3
        setfillstyle(1,BLUE);
        bar(420+(320/4),100+(260/4),420+(320/4)+15,100+(260/4)+15);//z4 */
        //3
        setfillstyle(1,WHITE);
        bar(100,320-50,260,440-50);
        setfillstyle(1,BLUE);
        bar(100+(100/4),320+(150/4)-50,100+(100/4)+15,320+(150/4)+15-50);//z1
        setfillstyle(1,BLUE);
        bar(100+(180/4),320+(260/4)-50,100+(180/4)+15,320+(260/4)+15-50);//z2
        /* setfillstyle(1,BLUE);
        bar(100+(300/4),320+(140/4)-50,100+(300/4)+15,320+(140/4)+15-50);//z3
        setfillstyle(1,BLUE);
        bar(100+(300/4),320+(280/4)-50,100+(300/4)+15,320 +(280/4)+15-50);//z4 */
        //4
        setfillstyle(1,WHITE);
        bar(420,320-50,580,440-50);
        setfillstyle(1,BLUE);
        bar(420+(100/4),320+(150/4)-50,420+(100/4)+15,320+(150/4)+15-50);//z1
        setfillstyle(1,BLUE);
        bar(420+(260/4),320+(260/4)-50,420+(260/4)+15,320+(260/4)+15-50);//z2
        /* setfillstyle(1,BLUE);
        bar(420+(250/4),320+(140/4)-50,420+(250/4)+15,320+(140/4)+15-50);//z3
        setfillstyle(1,BLUE);
        bar(420+(400/4),320+(280/4)-50,420+(400/4)+15,320+(280/4)+15-50);//z4
 */
        setfillstyle(1,LIGHTBLUE);
	    bar(20,400,150+4,450);
	    setfillstyle(1,WHITE);
	    bar(22,402,150-2+4,450-2);
	    settextstyle(SMALL_FONT,HORIZ_DIR,7);
	    puthz(23,403,"ʹ��˵��",32,32,BLUE);
	    
	    setfillstyle(1,LIGHTGRAY);
		bar(550,400,625,440);//MAIN
    	setcolor(BLACK);
		settextstyle(1,0,3);//··
    	outtextxy(585,420,"MAIN");
	    
        }
            if((mouse_press(100,100,260,220) == 1))
            {
            	clrmous(MouseX,MouseY);
						delay(5);
                delay(100);
                map=1;
                break;
            }
            if((mouse_press(420,100,580,220) == 1))
            {
            	clrmous(MouseX,MouseY);
						delay(5);
                delay(100);
                map=2;
                break;
            }
            if((mouse_press(100,320,260,440) == 1))
            {
            	clrmous(MouseX,MouseY);
						delay(5);
                delay(100);
                map=3;
                break;
            }
            if((mouse_press(420,320,580,440) == 1))
            {
            	clrmous(MouseX,MouseY);
						delay(5);
                delay(100);
                map=4;
                break;
            }
        }while(1);
        
        if(map==1)
        {
        zaw_x=150;
        zaw_y=150;
        zaw_x1=260;
        zaw_y1=260;
        //zaw_x2=250;
        //zaw_y2=140;
        //zaw_x3=400;
        //zaw_y3=280;
        }
        if(map==2)
        {
        zaw_x=150;
        zaw_y=150;
        zaw_x1=150;
        zaw_y1=260;
        //zaw_x2=320;
        //zaw_y2=150;
        //zaw_x3=320;
        //zaw_y3=260;
        }
        if(map==3)
        {
        zaw_x=100;
        zaw_y=150;
        zaw_x1=180;
        zaw_y1=260;
        //zaw_x2=300;
        //zaw_y2=140;
        //zaw_x3=300;
        //zaw_y3=280;
        }
        if(map==4)
        {
        zaw_x=100;
        zaw_y=150;
        zaw_x1=200;
        zaw_y1=260;
        //zaw_x2=250;
        //zaw_y2=140;
        //zaw_x3=400;
        //zaw_y3=280;
        }
        //设置障碍�?
        for(i=0;i<61;i++)
            for(j=0;j<61;j++)
                {
                    zaw[i][j]=0;
                }

        for(i=1;i<=60;i++)
            for(j=1;j<=60;j++)
                {
                    zaw[i][j]=100;
                }

        //障碍�?0

        for(i=0;i<61;i++)
            for(j=0;j<61;j++)
                {
                    zaw1[i][j]=0;
                }

        for(i=1;i<=60;i++)
            for(j=1;j<=60;j++)
                {
                    zaw1[i][j]=100;
                }
        
        //障碍�?1

        /* for(i=0;i<61;i++)
            for(j=0;j<61;j++)
                {
                    zaw2[i][j]=0;
                }

        for(i=1;i<=60;i++)
            for(j=1;j<=60;j++)
                {
                    zaw2[i][j]=100;
                }

        //障碍�?2

        for(i=0;i<61;i++)
            for(j=0;j<61;j++)
                {
                    zaw3[i][j]=0;
                }

        for(i=1;i<=60;i++)
            for(j=1;j<=60;j++)
                {
                    zaw3[i][j]=100;
                } */

        //障碍�?3
        //障碍物地图初始化
      	cleardevice();
      	setfillstyle(1,LIGHTGRAY);
        bar(0,0,680,480);
        setcolor(BLUE);
        setfillstyle(1,BLUE);
        bar(zaw_x+12+1,zaw_y+12+1,zaw_x+60,zaw_y+60);//1
        setfillstyle(1,BLUE);
        bar(zaw_x1+12+1,zaw_y1+12+1,zaw_x1+60,zaw_y1+60);//2
        /* setfillstyle(1,BLUE);
        bar(zaw_x2+10,zaw_y2+10,zaw_x2+60,zaw_y2+60);//3
        setfillstyle(1,BLUE);
        bar(zaw_x3+10,zaw_y3+10,zaw_x3+60,zaw_y3+60);//4 */
        setfillstyle(1,WHITE);
		bar(550,400,625,440);//MAIN
    	setcolor(BLUE);
		settextstyle(1,0,3);//··
    	outtextxy(585,420,"MAIN");
        
        
       
        do
        {
            mou_pos(&MouseX,&MouseY,&press);
            if(mouse_press(550,400,625,440) == 1)
			{
				
				goto state;//直接跳到函数结尾
			}
           else if(press==1)
            {
                X1=MouseX;
                Y1=MouseY;
                break;
            }
        } while (1);
        
        *x0=(float)X0;
        *y0=(float)Y0;
        
        x1=(float)X1;
        y1=(float)Y1;
        
        clrmous(MouseX,MouseY);
        wwdrone(X1,Y1);//无人机初始化
        
     
        do
        {
            
            delay(50);
            k1=(*y0-y1)/(*x0-x1);
            b1=y1-k1*x1;
            x=(int)(*x0);
            y=(int)(*y0);
            //wwdrone(x,y);
            putimage(x,y,pt_addr,XOR_PUT);
            if(x+1>=zaw_x1 && x-1<zaw_x1+61 && y+1>=zaw_y1 && y-1<zaw_y1+61)//
            {
           
                if (zaw1[x+1-zaw_x1][y+1-zaw_y1]>S || zaw1[x+1-zaw_x1][y-zaw_y1]>S || zaw1[x-zaw_x1][y+1-zaw_y1]>S)
                {
                if (zaw1[x+1-zaw_x1][y-zaw_y1]<S)
                {
                    (*x0)++;
                }
                else
                {
                    (*y0)++; 
                }
                } 
                else
                {
                    Amove(x0,y0,k1,b1); 
                }
            }
            else if(x+1>=(zaw_x) && x-1<zaw_x+61 && y+1>=zaw_y && y-1<zaw_y+61)//&& y>=zaw_y-1 && y<zaw_y
            {
                
                if (zaw[x+1-zaw_x][y+1-zaw_y]>S || zaw[x+1-zaw_x][y-zaw_y]>S || zaw[x-zaw_x][y+1-zaw_y]>S)
                {
                if (zaw[x+1-zaw_x][y-zaw_y]<S)
                {
                    (*x0)++;
                }
                else
                { 
                    (*y0)++; 
                }
                } 
                else
                {
                    Amove(x0,y0,k1,b1); 
                }
           
            }
            /* else if(x+1>=(zaw_x2) && x-1<zaw_x2+61 && y+1>=zaw_y2 && y-1<zaw_y2+61)//&& y>=zaw_y-1 && y<zaw_y
            {
               
                if (zaw2[x+1-zaw_x2][y+1-zaw_y2]>S || zaw2[x+1-zaw_x2][y-zaw_y2]>S || zaw2[x-zaw_x2][y+1-zaw_y2]>S)
                {
                if (zaw2[x+1-zaw_x2][y-zaw_y2]<S)
                {
                    (*x0)++;
                }
                else
                { 
                    (*y0)++; 
                }
                } 
                else
                {
                    Amove(x0,y0,k1,b1); 
                }
           
            }//3
            else if(x+1>=(zaw_x3) && x-1<zaw_x3+61 && y+1>=zaw_y3 && y-1<zaw_y3+61)//&& y>=zaw_y-1 && y<zaw_y
            {
                // if(k1>=0)
                //{
                if (zaw3[x+1-zaw_x3][y+1-zaw_y3]>S || zaw3[x+1-zaw_x3][y-zaw_y3]>S || zaw3[x-zaw_x3][y+1-zaw_y3]>S)
                {
                if (zaw3[x+1-zaw_x3][y-zaw_y3]<S)
                {
                    (*x0)++;
                }
                else
                { 
                    (*y0)++; 
                }
                } 
                else
                {
                    Amove(x0,y0,k1,b1); 
                }//4
           
            } */
            else
            {
                if(k1==1.0)
                {
                    (*x0)++;
                // y++;
                    (*y0)=k1*(*x0)+b1; 
                }
                else if(k1<1.0)
                {
                    (*x0)++;
                }
                else if(k1>1.0)
                {
                    (*y0)++;
                }  
            
            }
            x=(int)(*x0);
            y=(int)(*y0);
            putimage(x,y,pt_addr,XOR_PUT);
            //cleardevice();
            if(x==X1)
                key=1;
        } while (key==0);
        //closegraph();
        state:
        delay(100);
        free(pt_addr);
     	
    }

void Amove(float *x,float *y,float k1,float b1)
{
    if(k1==1.0)
                {
                    (*x)++;
                    // y++;
                    *y=k1*(*x)+b1; 
                }
                else if(k1<1.0)
                {
                    (*x)++;
                }
                else if(k1>1.0)
                {
                    (*y)++;
                }  
} //无人机运动判�?
void wwdrone(float x,float y)
    {
        int x1=x;
        int y1=y;
        putpixel(x,y,BLUE);
        putpixel(x,y-2,RED);
        putpixel(x,y+2,RED);
        putpixel(x-2,y,RED);
        putpixel(x+2,y,RED);
        putpixel(x-2,y-2,GREEN);
        putpixel(x+2,y+2,GREEN);
        putpixel(x-2,y+2,GREEN);
        putpixel(x+2,y-2,GREEN);
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
