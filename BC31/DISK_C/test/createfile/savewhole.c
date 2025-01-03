#include"common.h"
#include"CREATE.h"
//该函数作用：将起点文件到终点文件的最佳路径坐标全部输入第三个文件
//终点文件第一个坐标的实现多点路径
//即总文件中有的是多个001，多个002……
void save_whole(const char *fileformer,const char*filelatter,const char*filewhole)
{
	FILE *fp;//->fileformer
	FILE *fp1;//->filelatter
	FILE *fp2;//->filewhole
	char *strstp="000:0000000000";
	char string[15];//每一行的字符串
	int x,y,color;
	int i,j;//循环参数
	int temp;//排序中间值
	int k;
	long int min;//斜边的平方
	char X[10],Y[10];//容纳坐标字符串
	int X1[SIZE1],Y1[SIZE1],COLOR1[SIZE1];//容纳fp坐标和颜色
	int X2[SIZE2],Y2[SIZE2],COLOR2[SIZE2];//容纳fp1坐标和颜色
	fp=fopen(fileformer,"rt");
	if((fp=fopen(filewhole,"wt"))==NULL);
	
	for(i=0;i<SIZE/*641*/;i++)
	{
		fgets(string,15,fp);
		Y[0]=string[5];
		Y[1]=string[6];
		Y[2]=string[7];
		X[0]=string[9];
		X[1]=string[10];
		X[2]=string[11];
		color=10*(string[12]-'0')+string[13]-'0';
		X1[i]=atoi(X);
		Y1[i]=atoi(Y);
		COLOR1[i]=color;
	}
	fclose(fp);
	
	if((fp1=fopen(filelatter,"rt"))==NULL);
	for(i=0;i<SIZE2/*312*/;i++)//对终点图形的检索
	{
		fgets(string,15,fp1);fgetc(fp1);
		Y[0]=string[5];
		Y[1]=string[6];
		Y[2]=string[7];
		X[0]=string[9];
		X[1]=string[10];
		X[2]=string[11];
		color=10*(string[12]-'0')+string[13]-'0';
		X2[i]=atoi(X);//容纳fp1整型的X坐标
		Y2[i]=atoi(Y);//容纳fp1整型的Y坐标
		COLOR2[i]=color;//容纳颜色的ASCII值
		
		for(j=i;j<SIZE1/*641*/;j++)//在终点图形的检索下对初始图的检索
		{
			min=pow(X2[i]-X1[j],2)+pow(Y2[i]-Y1[j],2);
			for(k=0;k<SIZE1;k++)//初始图的又一次检索
			{
				if((pow(X2[i]-X1[k],2)+pow(Y2[i]-Y1[k],2)<min))
				{
					temp=X1[k];
					X1[k]=X1[j];
					X1[j]=temp;
					temp=Y1[k];
					Y1[k]=Y1[j];
					Y1[j]=temp;
				}
			}
		}
		x=X1[i];
		y=Y1[i];						//实现对终点的一个位置找到初始位置到这个终点位置的最短的坐标
		Astar1(x,y,X2[i],Y2[i],COLOR2[i],i+1,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	fp2=fopen(filewhole,"at");
	fputs(strstp,fp2);
}