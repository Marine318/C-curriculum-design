#include"common.h"

void Fileread(const char *filename)
{
	FILE *fp;
	char *string;
	int x,y;
	int color;
	char *X;
	char *Y;
	if((fp=fopen(filename,"rt"))==NULL)
		rewind(fp);

	if((string=(char *)malloc(15))==NULL)
	{
		printf("not enough memory!");
		//getch();
		exit(1);
	}

	if((X=(char *)malloc(4))==NULL)
	{
		printf("not enough memory!");
		//getch();
		exit(1);
	}
	if((Y=(char *)malloc(4))==NULL)
	{
		printf("not enough memory!");
		//getch();
		exit(1);
	}


	while(1)
	{
		fgets(string,15,fp); fgetc(fp);
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
		  color=10*(string[12]-'0')+string[13]-'0';  //color
		  x=atoi(X); y=atoi(Y);
		  initdot(x,y,color);
		}
		
	}
	free(X);X=NULL;
	free(Y);Y=NULL;
	free(string); 
	string=NULL;
}