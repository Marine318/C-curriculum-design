#include"common.h"

int filereadparts(FILE *fp)
{
	 char  *string;
	
	 int x;   int y;
     char *X;  char *Y;
	 int color;  int i=0;  
	 int flag=0;// a flag to judge if the fp is in the end of the file //0:not end;1:end
     if((string=(char *)malloc(15))==NULL)
     {
        printf("not enough memory");
        exit(1);
     }
     
     if((X=(char *)malloc(4))==NULL)
     {
        printf("not enough memory");
        exit(1);
     }
     if((Y=(char *)malloc(4))==NULL)
     {
        printf("not enough memory");       
        exit(1);
     }
     
	 while(1)
	 {
	   i=i+1;
	   fgets(string,15,fp); fgetc(fp);  
	   if(feof(fp)!=0||i==51)  //50 by 50 read  //not the same as the first
	   {
		 if(feof(fp)!=0)  flag=1;
		// fclose(fp);
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
		  Lpixel(x,y,color);
		 //delay(10);
	   }

	 }
     free(X); X=NULL;
	  free(Y); Y=NULL;
	 free(string); string=NULL;
	 return flag;  //the symbol to judge if the file is in the end
}

void filereadfirst(FILE *fp)  //need rewind the file to start the part
{

	 char  *string;
	 char c;
	int color; int i=0;
	int x;   int y;
     char *X;  char *Y;
    rewind(fp);
     if((string=(char *)malloc(15))==NULL)
     {
        printf("not enough memory");
        exit(1);
     }
     
     if((X=(char *)malloc(4))==NULL)
     {
        printf("not enough memory");
        exit(1);
     }
     if((Y=(char *)malloc(4))==NULL)
     {
        printf("not enough memory");
        exit(1);
     }
 
	 while(1)
	 {
	   fgets(string,15,fp); fgetc(fp);
       i=i+1;
	   if(i==50)//if(feof(fp)!=0)  //the first time we read the file  so it can't be in the end
	   {
		 //fclose(fp);
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
		  Lpixel(x,y,color);
	   }
	   
	   
	   
	 }
     free(X); X=NULL;
	  free(Y); Y=NULL;
	 free(string); string=NULL;
} 


void filefast(const char *filename) 
{
	 int flag;//1:end   0:not end
	  FILE *fp;
	   char c;
     if((fp=fopen(filename,"rt"))==NULL)
	 {
		 printf("can't open the file");
		 exit(1);
	 }
	 filereadfirst(fp);  //the first part //role :rewind fp
	 do{
        flag=filereadparts(fp);
		if(kbhit())//通过键盘空格实现暂停
	   {
	   		c=getch();
	   		if(c==' ')
	   		{
				delay(50);
	   			c=getch();
				if(c==' ')
				break;	
			}
	   }
	 }while(flag!=1);
	 fclose(fp);
}