#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
int MouseX;
int MouseY;
int MouseS;
int press;
void *buffer;
union REGS regs;
int flag=0;
int mouse_press(int x1, int y1, int x2, int y2);
void mouse(int,int);
void mouseinit(void);
void mou_pos(int*,int*,int*);
void mread(int *,int *,int*);
void save_bk_mou(int x,int y);
void clrmous(int x,int y);
void drawmous(int x,int y);
void initdot(int a,int b,int c);
void bmove(float *x,float *y,float k1,float b1);
void jdt(int x);
void puthz_zbsr(int x, int y, char *s, int flag, int part, int color);
void main()
{
    int i,j,gdriver,gmode,X[300],Y[300],C[300],X0,Y0,key=0,sum=0;
	int ljt;
    char wrj_stop;
	int ht_key=0;
	int hz_x;
    int color=WHITE;
	int color1=WHITE;
    int tp;
    FILE *fp;
    gdriver =VGA;
	gmode =VGAHI;
    printf("choose the map:");
    scanf("%d",&tp);
	initgraph(&gdriver,&gmode,"c:\\BORLANDC\\bgi");
	mouseinit();
	setbkcolor(LIGHTGRAY);
    if(tp==1)
    {
    if((fp=fopen("c:\\code\\test\\path11.txt","w+"))==NULL)
	{
		printf("nonono");
		exit(1);
	}
    }
    else if(tp==2)
    {
    if((fp=fopen("c:\\code\\test\\path12.txt","w+"))==NULL)
	{
		printf("nonono");
		exit(1);
	}
    }
    else if(tp==3)
    {
    if((fp=fopen("c:\\code\\test\\path13.txt","w+"))==NULL)
	{
		printf("nonono");
		exit(1);
	}
    }
    else if(tp==4)
    {
    if((fp=fopen("c:\\code\\test\\path14.txt","w+"))==NULL)
	{
		printf("nonono");
		exit(1);
	}
    }
	else if(tp==5)
    {
    if((fp=fopen("c:\\code\\test\\path15.txt","w+"))==NULL)
	{
		printf("nonono");
		exit(1);
	}
    }
    else if(tp==6)
    {
    if((fp=fopen("c:\\code\\test\\path16.txt","w+"))==NULL)
	{
		printf("nonono");
		exit(1);
	}
    }
    else if(tp==7)
    {
    if((fp=fopen("c:\\code\\test\\path17.txt","w+"))==NULL)
	{
		printf("nonono");
		exit(1);
	}
    }
    else if(tp==8)
    {
    if((fp=fopen("c:\\code\\test\\path18.txt","w+"))==NULL)
	{
		printf("nonono");
		exit(1);
	}
    }
	setfillstyle(1,RED);
	bar(0,0,50,30);
	setfillstyle(1,color);
	bar(0,0,48,28);

	for(i=1;i<=13;i++)
	{
	
	setfillstyle(1,i);
	bar(0+(i-1)*50,450,40+(i-1)*50,480);
	}

	setfillstyle(1,WHITE);
	bar(0+(7-1)*50,450,40+(7-1)*50,480);
    do
    {
	mou_pos(&MouseX,&MouseY,&press);
	if(ht_key==1)
	{
		setfillstyle(1,color);
		bar(0,0,47,27);
		ht_key=0;
	}
	if(mouse_press(0,450,40,480) == 1)
	{
		color=1;
		ht_key=1;
	}
	else if(mouse_press(0+50,450,40+50,480) == 1)
	{
		color=2;
		ht_key=1;
	}
	else if(mouse_press(0+50*2,450,40+50*2,480) == 1)
	{
		color=3;
		ht_key=1;
	}
	else if(mouse_press(0+50*3,450,40+50*3,480) == 1)
	{
		color=4;
		ht_key=1;
	}
	else if(mouse_press(0+50*4,450,40+50*4,480) == 1)
	{
		color=5;
		ht_key=1;
	}
	else if(mouse_press(0+50*5,450,40+50*5,480) == 1)
	{
		color=6;
		ht_key=1;
	}
	else if(mouse_press(0+50*6,450,40+50*6,480) == 1)
	{
		color=WHITE;
		ht_key=1;
	}
	else if(mouse_press(0+50*7,450,40+50*7,480) == 1)
	{
		color=8;
		ht_key=1;
	}
	else if(mouse_press(0+50*8,450,40+50*8,480) == 1)
	{
		color=9;
		ht_key=1;
	}
	else if(mouse_press(0+50*9,450,40+50*9,480) == 1)
	{
		color=10;
		ht_key=1;
	}
	else if(mouse_press(0+50*10,450,40+50*10,480) == 1)
	{
		color=11;
		ht_key=1;
	}
	else if(mouse_press(0+50*11,450,40+50*11,480) == 1)
	{
		color=12;
		ht_key=1;
	}
	else if(mouse_press(0+50*12,450,40+50*12,480) == 1)
	{
		color=13;
		ht_key=1;
	}
	else if(press==1)
	{
         //initdot(MouseX,MouseY,RED);
		 delay(200);
		 color1=color;
         sum++;
		 X[sum]=MouseX;
		 Y[sum]=MouseY;
		 C[sum]=color;
	}
	if(sum!=0 && ht_key!=1)
	{
	initdot(X[sum],Y[sum],color1);
	}
    if(sum!=0 && press==1 && ht_key!=1)
	{
    	
	   fprintf(fp,"%d,%d,%d,%d\n",sum,X[sum],Y[sum],C[sum]);
	}
	if(kbhit())
	{
		getch();
		wrj_stop=getch();
		if(wrj_stop=='r')
		{
			key=1;
		}
	}//ʹ�ü�����ͣ��
    }while(key==0);
    fclose(fp);
    closegraph();
}
void initdot(int a,int b,int c)
{
    setfillstyle(1,c);
    bar(a,b,a+2,b+2);
}
void mouseinit()//初始�?
{
	int retcode;
	int xmin,xmax,ymin,ymax,x_max=625,y_max=480;
	int size;

	xmin=2;
	xmax=x_max-1;
	ymin=8;
	ymax=y_max-2;
	regs.x.ax=0;
	int86(51,&regs,&regs);
	retcode=regs.x.ax;
	if(retcode==0)
	{
		printf("Mouse or Mouse Driver Obsent,Please Install!");
		delay(5000);
	}
	else
	{
		regs.x.ax=7;
		regs.x.cx=xmin;
		regs.x.dx=xmax;
		int86(51,&regs,&regs);
		regs.x.ax=8;
		regs.x.cx=ymin;
		regs.x.dx=ymax;
		int86(51,&regs,&regs);
	}
	MouseS = 0;
	MouseX=320,MouseY=240;
	save_bk_mou(320,240);
	mouse(MouseX,MouseY);
	flag=1;
}


/*****************************
FUNCTION: mouse
DESCRIPTION: 画不同形态的鼠标
INPUT: x,y
RETURN: �?
******************************/
void mouse(int x,int y)
{
	
	switch(MouseS)
	{
		case 1:                                  //手势鼠标
		{
				setcolor(WHITE);
				setlinestyle(0,0,1);
				line(x-1,y+9,x-1,y+8);
				line(x,y+7,x,y+11);
				line(x+1,y+6,x+1,y+13);
				line(x+2,y+8,x+2,y+14);
				line(x+3,y-1,x+3,y+15);
				arc(x+4,y-1,0,180,1);
				line(x+4,y-2,x+4,y+15);
				line(x+5,y-1,x+5,y+16);
				arc(x+6,y+3,0,180,1);
				line(x+6,y+2,x+6,y+16);
				line(x+7,y+3,x+7,y+17);
				arc(x+8,y+5,0,180,1);
				line(x+8,y+4,x+8,y+17);
				line(x+9,y+5,x+9,y+16);
				arc(x+10,y+7,0,180,1);
				line(x+10,y+6,x+10,y+16);
				line(x+11,y+7,x+11,y+13);

				setcolor(DARKGRAY);
				line(x-1,y+9,x-1,y+8);
				line(x-1,y+8,x+1,y+6);
				line(x+1,y+6,x+3,y+10);
				line(x+3,y+10,x+3,y-1);
				arc(x+4,y-1,0,180,1);
				line(x+5,y-1,x+5,y+5);
				arc(x+6,y+3,0,180,1);
				line(x+7,y+3,x+7,y+7);
				arc(x+8,y+5,0,180,1);
				line(x+9,y+5,x+9,y+9);
				arc(x+10,y+7,0,180,1);
				line(x+11,y+7,x+11,y+13);
				arc(x+7,y+13,-90,0,4);
				line(x+7,y+17,x+3,y+15);
				line(x+3,y+15,x+1,y+13);
				line(x+1,y+13,x-1,y+9);
		}
			break;
		case 2:                        //光标
		{
			setcolor(DARKGRAY);
			setlinestyle(0,0,1);
			line(x+1,y-1,x+9,y-1);
			line(x+1,y+15,x+9,y+15);
			line(x+5,y-1,x+5,y+15);
		}
			break;
		case 3:                        //十字
		{
			setcolor(WHITE);
			setlinestyle(0,0,1);
			line(x-1,y+7,x+11,y+7);
			line(x+5,y-1,x+5,y+15);
		}
			break;
		default:              //默认鼠标
		{
			setlinestyle(0,0,1);
			setcolor(WHITE);
			line(x,y,x,y+13);
			line(x+1,y+1,x+1,y+12);
			line(x+2,y+2,x+2,y+11);
			line(x+3,y+3,x+3,y+10);
			line(x+4,y+4,x+4,y+12);
			line(x+5,y+5,x+5,y+9);
			line(x+5,y+11,x+5,y+14);
			line(x+6,y+6,x+6,y+9);
			line(x+6,y+13,x+6,y+15);
			line(x+7,y+7,x+7,y+9);
			line(x+8,y+8,x+8,y+9);
			line(x+9,y+9,x+9,y+9);
			setcolor(DARKGRAY);
			line(x-1,y-1,x-1,y+14);
			line(x-1,y+14,x+3,y+11);
			line(x+3,y+11,x+3,y+12);
			line(x+3,y+12,x+4,y+13);
			line(x+4,y+13,x+4,y+14);
			line(x+4,y+14,x+7,y+17);
			line(x+7,y+17,x+7,y+13);
			line(x+7,y+13,x+6,y+12);
			line(x+6,y+12,x+6,y+11);
			line(x+6,y+11,x+5,y+10);
			line(x+5,y+10,x+11,y+10);
			line(x+11,y+10,x-1,y-2);
		}
		break;
	}
}

/*void mou_pos(int *nx,int *ny,int*nbuttons)//更改鼠标位置
{
	int x0=*nx,y0=*ny;

	mread(nx,ny,nbuttons);
	clrmous(x0,y0);
	save_bk_mou(*nx,*ny);
	drawmous(*nx,*ny);
}

void mread(int *nx,int *ny,int*nbuttons)//改坐标不�?
{
	int x0=*nx,y0=*ny,buttons0=*nbuttons;
	int xnew,ynew,buttonsnew;

	do{
	regs.x.ax=3;
	int86(51,&regs,&regs);
	buttonsnew=regs.x.bx;
	delay(10);
	regs.x.ax=3;
	int86(51,&regs,&regs);
	if(regs.x.bx==buttonsnew)
		*nbuttons=regs.x.bx;
	else
		*nbuttons=buttons0;
	xnew=regs.x.cx;
	ynew=regs.x.dx;
	}while(xnew==x0&&ynew==y0&&*nbuttons==0);
	*nx=xnew;
	*ny=ynew;
}
*/

/***************************************
FUNCTION: mread
DESCRIPTION: 获取新的寄存器信�?
INPUT: nx,ny,nbuttons
RETURN: �?
****************************************/
void mread(int *nx,int *ny,int *nbuttons)  
{
	regs.x.ax=3;
	int86(51,&regs,&regs);
	*nx = regs.x.cx;
	*ny = regs.x.dx;
	*nbuttons = regs.x.bx;
}

/*******************************************
FUNCTION: newmouse
DESCRIPTION: 鼠标状态发生变化则更新鼠标
INPUT: nx,ny,nbuttons
RETURN: �?
********************************************/
void mou_pos(int *nx,int *ny,int *nbuttons)
{
	int xn,yn,buttonsn;
	int x0=*nx,y0=*ny,buttons0=*nbuttons;
	mread(&xn,&yn,&buttonsn);
	*nx = xn;
	*ny = yn;
	*nbuttons = buttonsn;
	if(buttons0 == *nbuttons)
		*nbuttons = 0;    //使得能连续按�?
	if(xn == x0 && yn == y0 && buttonsn == buttons0)
	{
		return; 
		}           //鼠标状态不变则直接返回S
	clrmous(x0,y0);        //说明鼠标状态发生了改变
	save_bk_mou(*nx,*ny);
	drawmous(*nx,*ny);
}

void save_bk_mou(int nx,int ny)//存鼠标背�?
{
	int size;

	size=imagesize(nx-1,ny-2,nx+11,ny+17);
	buffer=malloc(size);
	if(buffer!=NULL)
		getimage(nx-1,ny-2,nx+11,ny+17,buffer);
	else
		printf("Error");
}

void clrmous(int nx,int ny)//清除鼠标
{
	if(flag==1)
	{
		setwritemode(XOR_PUT); 
		mouse(nx,ny);
		putimage(nx-1,ny-2,buffer,COPY_PUT);
		free(buffer);
		flag=0;
		setwritemode(COPY_PUT);
	}
}
void drawmous(int nx,int ny)
{
	if(flag==0)
	{
		setwritemode(COPY_PUT);
	    mouse(nx,ny);
		flag=1;
	}
}



//如果在框中点击，则返�?1；在框中未点击，则返�?2；不在框中则返回0
int mouse_press(int x1, int y1, int x2, int y2)
{
	//在框中点击，则返�?1
	if(MouseX > x1 
	&&MouseX < x2
	&&MouseY > y1
	&&MouseY < y2
	&&press == 1)
	{
		return 1;
	}
	
	//在框中未点击，则返回2
	else if(MouseX > x1 
	&&MouseX < x2
	&&MouseY > y1
	&&MouseY < y2
	&&press == 0)
	{
		return 2;
	}
	
	//在框中点击右键，则返�?3
	else if(MouseX > x1 
	&&MouseX < x2
	&&MouseY > y1
	&&MouseY < y2
	&&press == 2)
	{
		return 3;
	}
	
	else
	{
		return 0;
	}
}