#include"common.h"


//void initdot11(int a,int b,int c);
void initdot1(int a,int b,int c);
void bmove(float *x,float *y,float k1,float b1);
void jdt1(int x);
void puthz(int x, int y, char *s, int flag, int part, int color);
void zbsr()
{
	struct wrj
{
	int num;
	int x0;//起始点-x
	int y0;//起始点—y
	int x1;//终点——x
	int y1;//终点——y
	int x[400];//运动记录x
	int y[400];//运动记录y
	int sum;//计数器
};
/* 	struct zdzb
{
	int num;
	int x;
	int y;
	int key;
};  */
    int i,j,gdriver,gmode,X0,Y0,key=0,sum=0;
	static int X[40],Y[40];
	int state1;
	int ljt;
	int hz_x;
	char wrj_stop;
	int wrj_hs;
	int wrj_sum;
	float x01,y01;
	float *wrjyd_x=&x01,*wrjyd_y=&y01;
	float wrjyd_k,wrjyd_b;
	float wrjyd_x1,wrjyd_y1;
	int xx,yy;
	int max=0;//最大值判断
	static struct wrj a[30];
	//struct zdzb b[30];
	int temp=0;//过渡器
	int num;//计量器
	FILE *fp;
	cleardevice();
	delay(100);
    setbkcolor(WHITE);
    //mouseinit();ILGHTBLUE
	sum=0;


	if((fp=fopen("c:\\test\\test1.txt","w+"))==NULL)
	{
		printf("nonono");
		exit(1);
	}//打开文件覆写

	
	setfillstyle(1,DARKGRAY);
	bar(400,0,680,480);
	setfillstyle(1,WHITE);
	bar(400,240-1,680,240+1);
	setfillstyle(1,LIGHTGRAY);
	bar(400,0,680,239);
	setfillstyle(1,DARKGRAY);
	bar(0,400,680,480);
	setfillstyle(1,LIGHTGRAY);
	bar(550,400,625,440);//MAIN
    setcolor(BLACK);
	settextstyle(1,0,3);//路路
    outtextxy(585,420,"MAIN");


	/* setfillstyle(1,LIGHTBLUE);
	bar(20,400,150+4,450);
	setfillstyle(1,WHITE);
	bar(22,402,150-2+4,450-2);
	puthz(23,403,"使用说明",32,32,BLUE); */
	
	/* settextstyle(SMALL_FONT,HORIZ_DIR,3);
	outtextxy(420,20,"0"); */ 
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			initdot1(2+5*j,2+5*i,LIGHTGRAY);
			temp++;
			if(temp==30)
			{
				break;
			}
		}
	}
	i=0;
	j=0;
    do
    {
	mou_pos(&MouseX,&MouseY,&press);

	if(mouse_press(550,400,625,440) == 2)//浣跨敤璇存槑楂樹寒
				{
					
					
					if(state1!=1)//闂冨弶顒涢柌宥咁槻閺嶅洣瀵?
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
					rectangle(550,400,625,440);//main
                    state1=0;
                }

	if(mouse_press(550,400,625,440) == 1)
		{ 
		    delay(100);
			//page = 1;
			goto state;//鐩存帴璺冲埌鍑芥暟缁撳熬
			
		}
	else if(mouse_press(400,0,680,480) == 1)
	{
		continue;
	}
	else if(mouse_press(0,400,680,480) == 1)
	{
		continue;
	}
	else if(press==1)
	{
         //initdot1(MouseX,MouseY,RED);
		 delay(200);
         sum++;
		 X[sum]=MouseX;
		 Y[sum]=MouseY;
	}


	if(sum!=0)
	{
	initdot1(X[sum],Y[sum],LIGHTGRAY);
	}

	if(sum!=0 && press==1)
	{
	//initdot11(400+(2+5*i)*8,240+(2+5*j)*8,RED);
	initdot1(400+X[sum]/2,0+Y[sum]/2,RED);
	initdot1(2+5*i,2+5*j,RED);
	i++;
	if(i==6)
	{
		i=0;
		j++;
	}
	}
    if(sum!=0 && press==1)
	{
            
	   fprintf(fp,"%d,%d,%d\n",sum,X[sum],Y[sum]);
	}

	if(sum==30)
	{
		key=1;
	}
	if(kbhit())
	{
		getch();
		wrj_stop=getch();
		if(wrj_stop=='r')
		{
			key=1;
		}
	}//使用键盘暂停；
    }while(key==0);
	//手动绘制图案

	fclose(fp);//关闭文件
    setfillstyle(1,LIGHTBLUE);
	bar(180-2,120-2,460+2,280+2);
    setfillstyle(1,WHITE);
	bar(180,120,460,280);
	puthz(240,160,"读取信息中",32,32,BLUE);
	hz_x=200;
	key=0;
	do
	{
		jdt1(hz_x);
		delay(5);
		hz_x++;
		  if(hz_x==440)
		{
			key=1;
        } 
    } while (key==0);
	delay(100);
	cleardevice();

	if((fp=fopen("c:\\test\\test1.txt","r"))==NULL)
	{
		printf("nonono");
		exit(1);
	}
	wrj_hs=sum/6;//行数
	if(sum%6!=0)
	wrj_hs++;

	wrj_sum=0;
	for(j=0;j<wrj_hs;j++)
	{
	for(i=0;i<6;i++)
	{
		a[wrj_sum].num=wrj_sum+1;
		a[wrj_sum].x0=2+5*i;
		a[wrj_sum].y0=2+5*j;
		wrj_sum++;
		if(wrj_sum==sum) 
		break;
	}
	}//无人机方阵初始化

	for(i=0;i<sum;i++)
	{
		initdot1(a[i].x0,a[i].y0,LIGHTGRAY);
	}//画无人机方阵


	delay(500);
	rewind(fp);

	for(i=0;i<sum;i++)
	{
		fscanf(fp,"%d,%d,%d\n",&ljt,&a[i].x1,&a[i].y1);
	}//读入终点坐标

	fclose(fp);

	/* for(i=0;i<sum;i++)
	  	b[i].key=0;
	for(i=0;i<sum;i++)
	{
		temp=500;
		for(j=0;j<sum;j++)
		{
			if((b[j].x-a[i].x0+b[j].y-a[i].y0)<temp && b[j].key==0)
			{
				temp=b[j].x-a[i].x0+b[j].y-a[i].y0;
				b[j].num=i+1;
				num=j;
			}
		}
		b[num].key=1;
	}//最短路径判断


	for(i=0;i<sum;i++)
	{
		for(j=0;j<sum;j++)
		{
			if(b[j].num==a[i].num)
			{
				a[i].x1=b[j].x;
				a[i].y1=b[j].y;
			}
		}
	} */ 
	 
	for(i=0;i<sum;i++)
	{
		*wrjyd_x=(float)a[i].x0;
        *wrjyd_y=(float)a[i].y0;
        
        wrjyd_x1=(float)a[i].x1;
        wrjyd_y1=(float)a[i].y1;
		a[i].sum=0;
		do
		{
			
			wrjyd_k=(*wrjyd_y-wrjyd_y1)/(*wrjyd_x-wrjyd_x1);
			wrjyd_b=wrjyd_y1-wrjyd_k*wrjyd_x1;
			bmove(wrjyd_x,wrjyd_y,wrjyd_k,wrjyd_b);
			xx=(int)*wrjyd_x;
			yy=(int)*wrjyd_y;
			a[i].x[a[i].sum]=xx;
			a[i].y[a[i].sum]=yy;
			a[i].sum++;
			ljt=(int)(*wrjyd_x);
			if(ljt==a[i].x1)
			break;
		}while(1);
	}


	for(i=0;i<sum;i++)
	{
		if(a[i].sum>=max)
		  max=a[i].sum;
	}//算出最大路径步数


for(i=0;i<sum;i++)
	{
		initdot1(a[i].x0,a[i].y0,RED);
		delay(100);
	}//点亮无人机方阵


delay(50);
for(j=0;j<max;j++)
{
	cleardevice();
	
	/* setfillstyle(1,LIGHTGRAY);
	bar(400,0,680,480); */
	for(i=0;i<sum;i++)
	{
		if(a[i].sum>j)
		{
		initdot1(a[i].x[j],a[i].y[j],RED);
		}
		else
		{
		initdot1(a[i].x1,a[i].y1,RED);
		}
	}
	
	delay(50);
}//无人机运动
delay(100);

for(i=1;i<=20;i++)
{
	for(j=0;j<sum;j++)
	{
		initdot1(a[j].x1,a[j].y1,i);
	}
	delay(300);
}

 for(j=max-1;j>=0;j--)
{
	cleardevice();
	
	
	for(i=0;i<sum;i++)
	{
		if(a[i].sum>j)
		{
		initdot1(a[i].x[j],a[i].y[j],RED);
		}
		else
		{
		initdot1(a[i].x1,a[i].y1,RED);
		}
	}
	
	delay(50);
}//无人机运动 返航

cleardevice();
temp=0;
for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			initdot1(2+5*j,2+5*i,RED);
			temp++;
			if(temp==sum)
			{
				break;
			}
		}
		if(temp==sum)
			{
				break;
			}
	}

delay(300);
temp=0;
for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			initdot1(2+5*j,2+5*i,LIGHTGRAY);
			temp++;
			if(temp==sum)
			{
				break;
			}
			delay(50);
		}
		if(temp==sum)
			{
				break;
			}
	}	
	setfillstyle(1,LIGHTGRAY);
	bar(550,400,625,440);//MAIN
	clrmous(MouseX,MouseY);
    setcolor(BLACK);
	settextstyle(1,0,3);//路路
    outtextxy(585,420,"MAIN");
	state:


}
void jdt1(int x)
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
void bmove(float *x,float *y,float k1,float b1)
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
} 
void initdot1(int a,int b,int c)
{
    setfillstyle(1,c);
    bar(a,b,a+2,b+2);
}
/* void initdot11(int a,int b,int c)
{
    setfillstyle(1,c);
    bar(a,b,a+6,b+6);
} */
