#include"common.h"
#include"CREATE.h"
void create()
{
	int gd=VGA,gm=VGAHI;
    initgraph(&gd,&gm,"C:\\BORLANDC\\BGI");
    ct_path1_50();
 	ct_path51_100();
 	ct_path101_150();
 	ct_path151_200();
 	ct_path201_250();
 	ct_path251_300();
 	ct_path301_350();
 	ct_path351_400();
 	save_whole("c:\\picture1.txt","c:\\picture2.txt","c:\\path1.txt");
 	          //(前一个无人机编队，后一个无人机编队，保存整个路径于...)
 	
	break1_50("c:\\path1.txt");/*将整个路径保存的文件*/
	supply_file1("c:\\picture2.txt");/*后一个想要达到的无人机编队*/
	break51_100("c:\\path1.txt");
	supply_file2("c:\\picture2.txt");
	break101_150("c:\\path1.txt");
	supply_file3("c:\\picture2.txt");
	break151_200("c:\\path1.txt");
	supply_file4("c:\\picture2.txt");
	break201_250("c:\\path1.txt");
	supply_file5("c:\\picture2.txt");
	break251_300("c:\\path1.txt");
	supply_file6("c:\\picture2.txt");
	break301_350("c:\\path1.txt");
	supply_file7("c:\\picture2.txt");
	break351_400("c:\\path1.txt");
	supply_file8("c:\\picture2.txt");
	}