#include"common.h"

void filelig()//点亮图形一
{
	FILE *fp;
	char string[15];
	int x,y;
	int i;
	char X[4],Y[4];
	int color;
	fp=fopen("..\\..\\picture1.txt","rt");
	while(1)
	{
		fgets(string,15,fp);
		fgetc(fp);
		if(feof(fp)!=0)
		{
			fclose(fp);
			break;
		}
		else
		{
		  Y[0]=string[5];
		  Y[1]=string[6];
		  Y[2]=string[7];  Y[3]=0;  // y
		  X[0]=string[9];
		  X[1]=string[10];
		  X[2]=string[11]; X[3]=0;// x
		  //color=10*(string[12]-'0')+string[13]-'0';  //color
		  x=atoi(X); y=atoi(Y);
		  Lpixel(x,y,LIGHTRED);
		  delay(8);	
		}
	}

}