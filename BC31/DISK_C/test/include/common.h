#ifndef _COMMON_H_
#define _COMMON_H_

#include "stdio.h"
#include "graphics.h"
#include "stdlib.h"
#include "mouse.h"
//#include "hanzi.h"
#include "bios.h"
#include "string.h"
#include "conio.h"
#include "math.h"
#include "dos.h"
typedef struct DRONE
{
  int G;
  int F;
  int H;
  int x;
  int y;
  // int color;
}Drone;

typedef struct POS
{
   int x;
   int y;
}Pos;


void Fileread(const char *filename);
void initdot(int x,int y,int color);
int g_p1();
int g_p2();
int g_p3();
int g_p4();
int g_p5();
int g_p6();
int g_p7();
int g_p8();
int g_p9();

//A-star相关函数
int ab_dist(int a,int b);
void get_G(Drone *father,Drone *son);
void get_H(Drone *current,Pos destination);
void get_F(Drone *x);
void Lpixel(int x,int y,int color);
Drone *around(Drone *current,Pos destination,Drone *next);
void Astar(int startx,int starty,int endx,int endy,int color);
void dmove(Drone *D,Pos destination,int color);
void move(Pos s,Pos e,int color);

void filelig();
int filereadparts(FILE *fp);
void filereadfirst(FILE *fp);
void filefast(const char *filename); 
void Filereadfast(const char *filename);

void d1_2(void);
void dd1_2_1(void);
void dd1_2_2(void);
void dd1_2_3(void);
void dd1_2_4(void);
void dd1_2_5(void);
void dd1_2_6(void);
void dd1_2_7(void);
void dd1_2_8(void);


void d2_3(void);
void dd2_3_1(void);
void dd2_3_2(void);
void dd2_3_3(void);
void dd2_3_4(void);
void dd2_3_5(void);
void dd2_3_6(void);
void dd2_3_7(void);
void dd2_3_8(void);

void d3_4(void);
void dd3_4_1(void);
void dd3_4_2(void);
void dd3_4_3(void);
void dd3_4_4(void);
void dd3_4_5(void);
void dd3_4_6(void);
void dd3_4_7(void);
void dd3_4_8(void);

//about the drone4_5 part
void d4_5(void);
void dd4_5_1(void);
void dd4_5_2(void);
void dd4_5_3(void);
void dd4_5_4(void);
void dd4_5_5(void);
void dd4_5_6(void);
void dd4_5_7(void);
void dd4_5_8(void);

void d5_6(void);
void dd5_6_1(void);
void dd5_6_2(void);
void dd5_6_3(void);
void dd5_6_4(void);
void dd5_6_5(void);
void dd5_6_6(void);
void dd5_6_7(void);
void dd5_6_8(void);

void d6_7(void);
void dd6_7_1(void);
void dd6_7_2(void);
void dd6_7_3(void);
void dd6_7_4(void);
void dd6_7_5(void);
void dd6_7_6(void);
void dd6_7_7(void);
void dd6_7_8(void);

void d7_8(void);
void dd7_8_1(void);
void dd7_8_2(void);
void dd7_8_3(void);
void dd7_8_4(void);
void dd7_8_5(void);
void dd7_8_6(void);
void dd7_8_7(void);
void dd7_8_8(void);

void d8_9(void);
void dd8_9_1(void);
void dd8_9_2(void);
void dd8_9_3(void);
void dd8_9_4(void);
void dd8_9_5(void);
void dd8_9_6(void);
void dd8_9_7(void);
void dd8_9_8(void);

void studyplay(void);
void Filetool(const char *filename,int movey);
void Filerdelete(const char *filename,int movey);

//创意功能——路径模仿
void wdrone(int x,int y);
void jpsr();

//创意功能——躲避障碍物
void wwdrone(float x,float y);
void Amove(float *x,float *y,float k1,float b1);
void zawbr();

//创意功能——画图寻径

void zbsr();
void initdot1(int a,int b,int c);
void bmove(float *x,float *y,float k1,float b1);
void jdt1(int x);
void puthz_zbsr(int x, int y, char *s, int flag, int part, int color);





#endif