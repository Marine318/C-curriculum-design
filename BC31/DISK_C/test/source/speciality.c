#include"common.h"
void studyplay(void)
{
    int i;
    for(i=0;i<=5;i++)
    {
		
        Filetool("..\\..\\picture5.txt",i);
        Filerdelete("..\\..\\picture5.txt",i);
	
    }
    for(i=5;i>=-10;i--)
    {
	
        Filetool("..\\..\\picture5.txt",i);
        Filerdelete("..\\..\\picture5.txt",i);
	
    }
    for(i=-10;i<=0;i++)
    {
	
        Filetool("..\\..\\picture5.txt",i);
        Filerdelete("..\\..\\picture5.txt",i);
	
    }
}
void Filetool(const char *filename,int movey)    //a tool to carry experiment in the drone
{
	 FILE *fp;
	 char  *string;
	      int color;
	 int x;   int y;  //as a temptation to save the position
     char *X;  char *Y;
     if((fp=fopen(filename,"rt"))==NULL);
	  rewind(fp);
	  
     if((string=(char*)malloc(15))==NULL)
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
	   if(feof(fp)!=0)   //if the file is in the end  //not 0 end//0 not end
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
		  x=atoi(X); y=atoi(Y)+4*movey;////move faster//as he4*movey
		  Lpixel(x,y,color);
		 //delay(10);
	   }
	 }
	 free(X); X=NULL;
	  free(Y); Y=NULL;
	 free(string); string=NULL;
}


void Filerdelete(const char *filename,int movey)  //delete the former picture
{
	 FILE *fp;
	char  *string;
	  int x;   int y;  //as a temptation to save the position
     char *X;  char *Y;
     if((fp=fopen(filename,"rt"))==NULL);
	  rewind(fp);

     if((string=(char*)malloc(15))==NULL)
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
	   if(feof(fp)!=0)   //if the file is in the end  //not 0 end//0 not end
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
		  x=atoi(X); y=atoi(Y)+4*movey;   //move faster//as he4*movey
		  Lpixel(x,y,DARKGRAY);//set the color bk to delete
	   }
	 }
	 free(X); X=NULL;
	  free(Y); Y=NULL;
	 free(string); string=NULL;
}

