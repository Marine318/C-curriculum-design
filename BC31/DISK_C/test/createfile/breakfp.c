#include"common.h"
#include"CREATE.h"

void break1_50(const char *WHOLE)
{
	FILE *fp;
	FILE *p;
	char string[15];
	int order;
	char o[4];
	int times[SIZE]={0};
	int i,j,k;
	char X[4],Y[4];
	if((fp=fopen(WHOLE,"rt"))==NULL)
	{
		printf("can't");
	 	exit(1);
	}
	rewind(fp);
	
	for(i=0;feof(fp)==0;i++)//直到完全检索完结束
	{
		fgets(string,15,fp);	fgetc(fp);
		for(k=0;k<3;k++)	o[k]=string[k];
		for(j=0;j<SIZE;j++)
		{
			if(atoi(o)==j+1)
			{
				times[j]=times[j]+1;
				if(times[j]==1)
				{
					p=fopen(file1,"at");
					fputs(string,p);
					fputc('\n',p);
					fclose(p);
				}
				else if(times[j]==2)
         		{
          		 	p=fopen(file2,"at");
           			fputs(string,p); fputc('\n',p);
           			fclose(p);
        		 }
         		else if(times[j]==3)
         {
          p=fopen(file3,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==4)
         {
          p=fopen(file4,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==5)
         {
          p=fopen(file5,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==6)
         {
          p=fopen(file6,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==7)
         {
          p=fopen(file7,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==8)
         {
          p=fopen(file8,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==9)
         {
          p=fopen(file9,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==10)
         {
          p=fopen(file10,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);  
         }
         else if(times[j]==11)
         {
          p=fopen(file11,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==12)
         {
          p=fopen(file12,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==13)
         {
          p=fopen(file13,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==14)
         {
          p=fopen(file14,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==15)
         {
          p=fopen(file15,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==16)
         {
          p=fopen(file16,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==17)
         {
          p=fopen(file17,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==18)
         {
          p=fopen(file18,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==19)
         {
          p=fopen(file19,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==20)
         {
          p=fopen(file20,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==21)  
         {
          p=fopen(file21,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==22)
         {
          p=fopen(file22,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==23)
         {
          p=fopen(file23,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==24)
         {
          p=fopen(file24,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==25)
         {
          p=fopen(file25,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==26)
         {
          p=fopen(file26,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==27)
         {
          p=fopen(file27,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==28)
         {
          p=fopen(file28,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==29)
         {
          p=fopen(file29,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==30)
         {
          p=fopen(file30,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
        else if(times[j]==31)  
         {
          p=fopen(file31,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==32)
         {
          p=fopen(file32,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==33)
         {
          p=fopen(file33,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==34)
         {
          p=fopen(file34,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==35)
         {
          p=fopen(file35,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==36)
         {
          p=fopen(file36,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==37)
         {
          p=fopen(file37,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==38)
         {
          p=fopen(file38,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==39)
         {
          p=fopen(file39,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==40)
         {
          p=fopen(file40,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		    else if(times[j]==41)
         {
          p=fopen(file41,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==42)
         {
          p=fopen(file42,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==43)
         {
          p=fopen(file43,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==44)
         {
          p=fopen(file44,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==45)
         {
          p=fopen(file45,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==46)
         {
          p=fopen(file46,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==47)
         {
          p=fopen(file47,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==48)
         {
          p=fopen(file48,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==49)
         {
          p=fopen(file49,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==50)
         {
          p=fopen(file50,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
						
			}
		}
	}
	fclose(fp);
}



void break51_100(const char *WHOLE)  
{
	 FILE *fp;   FILE *p; 
	 char  string[15];
    int order;   char O[4]; //read the order
    int times[SIZE]={0};//the times the  string  occurs
     int i; int j; int k;
     char X[4];  char Y[4];
	 if((fp=fopen(WHOLE,"rt"))==NULL)
	 {
	 printf("can't");
	 exit(1);
	 }
	
     rewind(fp);
    for(i=0;feof(fp)==0;i++)
    {
       fgets(string,15,fp);   fgetc(fp);
       for(k=0;k<3;k++)  O[k]=string[k];
       O[3]=0;
      for(j=0;j<SIZE;j++)
      { 
       if(atoi(O)==j+1)    
       {
         times[j]=times[j]+1;     //judge the jth string 's occurence times
	     if(times[j]==51)  
         {
          p=fopen(file51,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==52)
         {
          p=fopen(file52,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==53)
         {
          p=fopen(file53,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==54)
         {
          p=fopen(file54,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==55)
         {
          p=fopen(file55,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==56)
         {
          p=fopen(file56,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==57)
         {
          p=fopen(file57,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==58)
         {
          p=fopen(file58,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==59)
         {
          p=fopen(file59,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==60)
         {
          p=fopen(file60,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==61)
         {
          p=fopen(file61,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==62)
         {
          p=fopen(file62,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==63)
         {
          p=fopen(file63,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==64)
         {
          p=fopen(file64,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==65)
         {
          p=fopen(file65,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==66)
         {
          p=fopen(file66,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==67)
         {
          p=fopen(file67,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==68)
         {
          p=fopen(file68,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==69)
         {
          p=fopen(file69,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==70)
         {
          p=fopen(file70,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==71)
         {
          p=fopen(file71,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==72)
         {
          p=fopen(file72,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==73)
         {
          p=fopen(file73,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==74)
         {
          p=fopen(file74,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==75)
         {
          p=fopen(file75,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==76)
         {
          p=fopen(file76,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==77)
         {
          p=fopen(file77,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==78)
         {
          p=fopen(file78,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==79)
         {
          p=fopen(file79,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==80)
         {
          p=fopen(file80,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==81)  
         {
          p=fopen(file81,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==82)
         {
          p=fopen(file82,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==83)
         {
          p=fopen(file83,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==84)
         {
          p=fopen(file84,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==85)
         {
          p=fopen(file85,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==86)
         {
          p=fopen(file86,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==87)
         {
          p=fopen(file87,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==88)
         {
          p=fopen(file88,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==89)
         {
          p=fopen(file89,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==90)
         {
          p=fopen(file90,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==91)
         {
          p=fopen(file91,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==92)
         {
          p=fopen(file92,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==93)
         {
          p=fopen(file93,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==94)
         {
          p=fopen(file94,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==95)
         {
          p=fopen(file95,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==96)
         {
          p=fopen(file96,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==97)
         {
          p=fopen(file97,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==98)
         {
          p=fopen(file98,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==99)
         {
          p=fopen(file99,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==100)
         {
          p=fopen(file100,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
	   }
	}
 }
    fclose(fp);
}




void break101_150(const char *WHOLE)   
{
	char  string[15];
    int order;   char O[4]; //read the order
    int times[SIZE]={0};//the times the  string  occurs
    int i; int j; int k;

	 FILE *fp;   FILE *p;
	 if((fp=fopen(WHOLE,"rt"))==NULL)
	 {
	 printf("can't");
	
	 exit(1);
	 }
	 rewind(fp);

	for(i=0;feof(fp)==0;i++)
    {
       fgets(string,15,fp);   fgetc(fp);
       for(k=0;k<3;k++)  O[k]=string[k];
       O[3]=0;
      for(j=0;j<SIZE;j++)
      { 
       if(atoi(O)==j+1)    
       {
         times[j]=times[j]+1;     //judge the jth string 's occurence times
		 if(times[j]==101)  
         {
          p=fopen(file101,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==102)
         {
          p=fopen(file102,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==103)
         {
          p=fopen(file103,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==104)
         {
          p=fopen(file104,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==105)
         {
          p=fopen(file105,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         
        else if(times[j]==106)
         {
          p=fopen(file106,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==107)
         {
          p=fopen(file107,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==108)
         {
          p=fopen(file108,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==109)
         {
          p=fopen(file109,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==110)
         {
          p=fopen(file110,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==111)
         {
          p=fopen(file111,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==112)
         {
          p=fopen(file112,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==113)
         {
          p=fopen(file113,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==114)
         {
          p=fopen(file114,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==115)
         {
          p=fopen(file115,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==116)
         {
          p=fopen(file116,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==117)
         {
          p=fopen(file117,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==118)
         {
          p=fopen(file118,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==119)
         {
          p=fopen(file119,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==120)
         {
          p=fopen(file120,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==121)  
         {
          p=fopen(file121,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==122)
         {
          p=fopen(file122,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==123)
         {
          p=fopen(file123,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==124)
         {
          p=fopen(file124,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==125)
         {
          p=fopen(file125,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==126)
         {
          p=fopen(file126,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==127)
         {
          p=fopen(file127,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==128)
         {
          p=fopen(file128,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==129)
         {
          p=fopen(file129,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==130)
         {
          p=fopen(file130,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
        else if(times[j]==131)  
         {
          p=fopen(file131,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==132)
         {
          p=fopen(file132,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==133)
         {
          p=fopen(file133,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==134)
         {
          p=fopen(file134,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==135)
         {
          p=fopen(file135,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==136)
         {
          p=fopen(file136,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==137)
         {
          p=fopen(file137,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==138)
         {
          p=fopen(file138,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==139)
         {
          p=fopen(file139,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==140)
         {
          p=fopen(file140,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==141)  
         {
          p=fopen(file141,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==142)
         {
          p=fopen(file142,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==143)
         {
          p=fopen(file143,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==144)
         {
          p=fopen(file144,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==145)
         {
          p=fopen(file145,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==146)
         {
          p=fopen(file146,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==147)
         {
          p=fopen(file147,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==148)
         {
          p=fopen(file148,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==149)
         {
          p=fopen(file149,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==150)
         {
          p=fopen(file150,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
	   }
	}
 }
    fclose(fp);
}
   
   
   
   
void break151_200(const char *WHOLE)
{
	char  string[15];
    int order;   char O[4]; //read the order
    int times[SIZE]={0};//the times the  string  occurs
    int i; int j; int k;
    char X[4];  char Y[4];
	 FILE *fp;  FILE *p;
	 if((fp=fopen(WHOLE,"rt"))==NULL)
	 {
	 printf("can't");
	 exit(1);
	 }
	
    // string[4]='R';
     rewind(fp);
    for(i=0;feof(fp)==0;i++)
    {
       fgets(string,15,fp);   fgetc(fp);
       for(k=0;k<3;k++)  O[k]=string[k];
       O[3]=0;
      for(j=0;j<SIZE;j++)
      { 
       if(atoi(O)==j+1)    
       {
         times[j]=times[j]+1;     //judge the jth string 's occurence times
	     if(times[j]==151)  
         {
          p=fopen(file151,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==152)
         {
          p=fopen(file152,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==153)
         {
          p=fopen(file153,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==154)
         {
          p=fopen(file154,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==155)
         {
          p=fopen(file155,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==156)
         {
          p=fopen(file156,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==157)
         {
          p=fopen(file157,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==158)
         {
          p=fopen(file158,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==159)
         {
          p=fopen(file159,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==160)
         {
          p=fopen(file160,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==161)
         {
          p=fopen(file161,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==162)
         {
          p=fopen(file162,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==163)
         {
          p=fopen(file163,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==164)
         {
          p=fopen(file164,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==165)
         {
          p=fopen(file165,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==166)
         {
          p=fopen(file166,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==167)
         {
          p=fopen(file167,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==168)
         {
          p=fopen(file168,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==169)
         {
          p=fopen(file169,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==170)
         {
          p=fopen(file170,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==171)
         {
          p=fopen(file171,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==172)
         {
          p=fopen(file172,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==173)
         {
          p=fopen(file173,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==174)
         {
          p=fopen(file174,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==175)
         {
          p=fopen(file175,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==176)
         {
          p=fopen(file176,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==177)
         {
          p=fopen(file177,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==178)
         {
          p=fopen(file178,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==179)
         {
          p=fopen(file179,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==180)
         {
          p=fopen(file180,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==181)
         {
          p=fopen(file181,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==182)
         {
          p=fopen(file182,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==183)
         {
          p=fopen(file183,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==184)
         {
          p=fopen(file184,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==185)
         {
          p=fopen(file185,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==186)
         {
          p=fopen(file186,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==187)
         {
          p=fopen(file187,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==188)
         {
          p=fopen(file188,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==189)
         {
          p=fopen(file189,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==190)
         {
          p=fopen(file190,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==191)
         {
          p=fopen(file191,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==192)
         {
          p=fopen(file192,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==193)
         {
          p=fopen(file193,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==194)
         {
          p=fopen(file194,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==195)
         {
          p=fopen(file195,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==196)
         {
          p=fopen(file196,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==197)
         {
          p=fopen(file197,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==198)
         {
          p=fopen(file198,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==199)
         {
          p=fopen(file199,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==200)
         {
          p=fopen(file200,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
	   }
	}
 }
    fclose(fp);
}      





void break201_250(const char *WHOLE)
{
	 char  string[15];
    int order;   char O[4]; //read the order
    int times[SIZE]={0};//the times the  string  occurs
     int i; int j; int k;
     char X[4];  char Y[4];
	 FILE *fp;   FILE *p; 
	 if((fp=fopen(WHOLE,"rt"))==NULL)
	 {
	 printf("can't");
	 exit(1);
	 }
   rewind(fp);
	 
    for(i=0;feof(fp)==0;i++)
    {
       fgets(string,15,fp);   fgetc(fp);
       for(k=0;k<3;k++)  O[k]=string[k];
       O[3]=0;
      for(j=0;j<SIZE;j++)
      { 
       if(atoi(O)==j+1)    
       {
         times[j]=times[j]+1;     //judge the jth string 's occurence times
		     if(times[j]==201)
         {
           p=fopen(file201,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==202)
         {
           p=fopen(file202,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==203)
         {
          p=fopen(file203,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==204)
         {
          p=fopen(file204,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==205)
         {
          p=fopen(file205,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==206)
         {
          p=fopen(file206,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==207)
         {
          p=fopen(file207,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==208)
         {
          p=fopen(file208,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==209)
         {
          p=fopen(file209,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==210)
         {
          p=fopen(file210,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);  
         }
         else if(times[j]==211)
         {
          p=fopen(file211,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==212)
         {
          p=fopen(file212,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==213)
         {
          p=fopen(file213,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==214)
         {
          p=fopen(file214,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==215)
         {
          p=fopen(file215,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==216)
         {
          p=fopen(file216,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==217)
         {
          p=fopen(file217,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==218)
         {
          p=fopen(file218,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==219)
         {
          p=fopen(file219,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==220)
         {
          p=fopen(file220,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==221)  
         {
          p=fopen(file221,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==222)
         {
          p=fopen(file222,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==223)
         {
          p=fopen(file223,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==224)
         {
          p=fopen(file224,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==225)
         {
          p=fopen(file225,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==226)
         {
          p=fopen(file226,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==227)
         {
          p=fopen(file227,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==228)
         {
          p=fopen(file228,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==229)
         {
          p=fopen(file229,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==230)
         {
          p=fopen(file230,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
        else if(times[j]==231)  
         {
          p=fopen(file231,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==232)
         {
          p=fopen(file232,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==233)
         {
          p=fopen(file233,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==234)
         {
          p=fopen(file234,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==235)
         {
          p=fopen(file235,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==236)
         {
          p=fopen(file236,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==237)
         {
          p=fopen(file237,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==238)
         {
          p=fopen(file238,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==239)
         {
          p=fopen(file239,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==240)
         {
          p=fopen(file240,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		    else if(times[j]==241)
         {
          p=fopen(file241,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==242)
         {
          p=fopen(file242,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==243)
         {
          p=fopen(file243,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==244)
         {
          p=fopen(file244,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==245)
         {
          p=fopen(file245,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==246)
         {
          p=fopen(file246,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==247)
         {
          p=fopen(file247,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==248)
         {
          p=fopen(file248,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==249)
         {
          p=fopen(file249,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==250)
         {
          p=fopen(file250,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
	   }
	}
 }
    fclose(fp);
}




void break251_300(const char *WHOLE)
{
	 FILE *fp;   FILE *p; 
	 char  string[15];
    int order;   char O[4]; //read the order
    int times[SIZE]={0};//the times the  string  occurs
    int i; int j; int k;
    char X[4];  char Y[4];
	 if((fp=fopen(WHOLE,"rt"))==NULL)
	 {
	 printf("can't");
	 exit(1);
	 }
	
    rewind(fp);
    for(i=0;feof(fp)==0;i++)
    {
       fgets(string,15,fp);   fgetc(fp);
       for(k=0;k<3;k++)  O[k]=string[k];
       O[3]=0;
      for(j=0;j<SIZE;j++)
      { 
       if(atoi(O)==j+1)    
       {
         times[j]=times[j]+1;     //judge the jth string 's occurence times
	     if(times[j]==251)  
         {
          p=fopen(file251,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==252)
         {
          p=fopen(file252,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==253)
         {
          p=fopen(file253,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==254)
         {
          p=fopen(file254,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==255)
         {
          p=fopen(file255,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==256)
         {
          p=fopen(file256,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==257)
         {
          p=fopen(file257,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==258)
         {
          p=fopen(file258,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==259)
         {
          p=fopen(file259,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==260)
         {
          p=fopen(file260,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==261)
         {
          p=fopen(file261,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==262)
         {
          p=fopen(file262,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==263)
         {
          p=fopen(file263,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==264)
         {
          p=fopen(file264,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==265)
         {
          p=fopen(file265,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==266)
         {
          p=fopen(file266,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==267)
         {
          p=fopen(file267,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==268)
         {
          p=fopen(file268,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==269)
         {
          p=fopen(file269,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==270)
         {
          p=fopen(file270,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==271)
         {
          p=fopen(file271,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==272)
         {
          p=fopen(file272,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==273)
         {
          p=fopen(file273,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==274)
         {
          p=fopen(file274,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==275)
         {
          p=fopen(file275,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==276)
         {
          p=fopen(file276,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==277)
         {
          p=fopen(file277,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==278)
         {
          p=fopen(file278,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==279)
         {
          p=fopen(file279,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==280)
         {
          p=fopen(file280,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==281)  
         {
          p=fopen(file281,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==282)
         {
          p=fopen(file282,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==283)
         {
          p=fopen(file283,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==284)
         {
          p=fopen(file284,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==285)
         {
          p=fopen(file285,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==286)
         {
          p=fopen(file286,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==287)
         {
          p=fopen(file287,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==288)
         {
          p=fopen(file288,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==289)
         {
          p=fopen(file289,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==290)
         {
          p=fopen(file290,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==291)
         {
          p=fopen(file291,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==292)
         {
          p=fopen(file292,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==293)
         {
          p=fopen(file293,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==294)
         {
          p=fopen(file294,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==295)
         {
          p=fopen(file295,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==296)
         {
          p=fopen(file296,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==297)
         {
          p=fopen(file297,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==298)
         {
          p=fopen(file298,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==299)
         {
          p=fopen(file299,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==300)
         {
          p=fopen(file300,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
	   }
	}
 }
    fclose(fp);
}




void break301_350(const char *WHOLE)
{
	 FILE *fp;   FILE *p; 
	 char  string[15];
    int order;   char O[4]; //read the order
    int times[SIZE]={0};//the times the  string  occurs
     int i; int j; int k;
     char X[4];  char Y[4];
	 if((fp=fopen(WHOLE,"rt"))==NULL)
	 {
	 printf("can't");
	 exit(1);
	 }
   rewind(fp);
	  
    for(i=0;feof(fp)==0;i++)
    {
       fgets(string,15,fp);   fgetc(fp);
       for(k=0;k<3;k++)  O[k]=string[k];
       O[3]=0;
      for(j=0;j<SIZE;j++)
      { 
       if(atoi(O)==j+1)    
       {
         times[j]=times[j]+1;     //judge the jth string 's occurence times
		     if(times[j]==301)
         {
           p=fopen(file301,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==302)
         {
           p=fopen(file302,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==303)
         {
          p=fopen(file303,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==304)
         {
          p=fopen(file304,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==305)
         {
          p=fopen(file305,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==306)
         {
          p=fopen(file306,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==307)
         {
          p=fopen(file307,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==308)
         {
          p=fopen(file308,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==309)
         {
          p=fopen(file309,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==310)
         {
          p=fopen(file310,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);  
         }
         else if(times[j]==311)
         {
          p=fopen(file311,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==312)
         {
          p=fopen(file312,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==313)
         {
          p=fopen(file313,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==314)
         {
          p=fopen(file314,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==315)
         {
          p=fopen(file315,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==316)
         {
          p=fopen(file316,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==317)
         {
          p=fopen(file317,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==318)
         {
          p=fopen(file318,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==319)
         {
          p=fopen(file319,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==320)
         {
          p=fopen(file320,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==321)  
         {
          p=fopen(file321,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==322)
         {
          p=fopen(file322,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==323)
         {
          p=fopen(file323,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==324)
         {
          p=fopen(file324,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==325)
         {
          p=fopen(file325,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==326)
         {
          p=fopen(file326,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==327)
         {
          p=fopen(file327,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==328)
         {
          p=fopen(file328,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==329)
         {
          p=fopen(file329,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==330)
         {
          p=fopen(file330,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
        else if(times[j]==331)  
         {
          p=fopen(file331,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==332)
         {
          p=fopen(file332,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==333)
         {
          p=fopen(file333,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==334)
         {
          p=fopen(file334,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==335)
         {
          p=fopen(file335,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==336)
         {
          p=fopen(file336,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==337)
         {
          p=fopen(file337,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==338)
         {
          p=fopen(file338,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==339)
         {
          p=fopen(file339,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==340)
         {
          p=fopen(file340,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		    else if(times[j]==341)
         {
          p=fopen(file341,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==342)
         {
          p=fopen(file342,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==343)
         {
          p=fopen(file343,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==344)
         {
          p=fopen(file344,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==345)
         {
          p=fopen(file345,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==346)
         {
          p=fopen(file346,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==347)
         {
          p=fopen(file347,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==348)
         {
          p=fopen(file348,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==349)
         {
          p=fopen(file349,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==350)
         {
          p=fopen(file350,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
	   }
	}
 }
    fclose(fp);
}




void break351_400(const char *WHOLE)
{
	 FILE *fp;   FILE *p; 
	 char  string[15];
    int order;   char O[4]; //read the order
    int times[SIZE]={0};//the times the  string  occurs
     int i; int j; int k;
     char X[4];  char Y[4];
	 if((fp=fopen(WHOLE,"rt"))==NULL)
	 {
	 printf("can't");
	 exit(1);
	 }
	  
     rewind(fp);
    for(i=0;feof(fp)==0;i++)
    {
       fgets(string,15,fp);   fgetc(fp);
       for(k=0;k<3;k++)  O[k]=string[k];
       O[3]=0;
      for(j=0;j<SIZE;j++)
      { 
       if(atoi(O)==j+1)    
       {
         times[j]=times[j]+1;     //judge the jth string 's occurence times
	     if(times[j]==351)  
         {
          p=fopen(file351,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==352)
         {
          p=fopen(file352,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==353)
         {
          p=fopen(file353,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==354)
         {
          p=fopen(file354,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==355)
         {
          p=fopen(file355,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==356)
         {
          p=fopen(file356,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==357)
         {
          p=fopen(file357,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==358)
         {
          p=fopen(file358,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==359)
         {
          p=fopen(file359,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==360)
         {
          p=fopen(file360,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==361)
         {
          p=fopen(file361,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==362)
         {
          p=fopen(file362,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==363)
         {
          p=fopen(file363,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==364)
         {
          p=fopen(file364,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==365)
         {
          p=fopen(file365,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==366)
         {
          p=fopen(file366,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==367)
         {
          p=fopen(file367,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==368)
         {
          p=fopen(file368,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==369)
         {
          p=fopen(file369,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==370)
         {
          p=fopen(file370,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==371)
         {
          p=fopen(file371,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==372)
         {
          p=fopen(file372,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==373)
         {
          p=fopen(file373,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==374)
         {
          p=fopen(file374,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==375)
         {
          p=fopen(file375,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==376)
         {
          p=fopen(file376,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==377)
         {
          p=fopen(file377,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==378)
         {
          p=fopen(file378,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==379)
         {
          p=fopen(file379,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==380)
         {
          p=fopen(file380,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==381)  
         {
          p=fopen(file381,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==382)
         {
          p=fopen(file382,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==383)
         {
          p=fopen(file383,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==384)
         {
          p=fopen(file384,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==385)
         {
          p=fopen(file385,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==386)
         {
          p=fopen(file386,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==387)
         {
          p=fopen(file387,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==388)
         {
          p=fopen(file388,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==389)
         {
          p=fopen(file389,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==390)
         {
          p=fopen(file390,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==391)
         {
          p=fopen(file391,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==392)
         {
          p=fopen(file392,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==393)
         {
          p=fopen(file393,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==394)
         {
          p=fopen(file394,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==395)
         {
          p=fopen(file395,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==396)
         {
          p=fopen(file396,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==397)
         {
          p=fopen(file397,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==398)
         {
          p=fopen(file398,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
         else if(times[j]==399)
         {
          p=fopen(file399,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
		 else if(times[j]==400)
         {
          p=fopen(file400,"at");
           fputs(string,p); fputc('\n',p);
           fclose(p);
         }
	   }
	}
 }
    fclose(fp);
}
    