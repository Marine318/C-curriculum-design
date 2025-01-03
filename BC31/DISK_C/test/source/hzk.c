#include"common.h"

void puthz(int x, int y,char *s,int flag,int part,int color)
{
	FILE *hzk_p=NULL;                                       //鐎规矮绠熷Ч澶婄摟鎼存挻鏋冩禒鑸靛瘹闁?
	unsigned char quma,weima;                 //鐎规矮绠熷Ч澶婄摟閻ㄥ嫬灏惍浣告嫲娴ｅ秶鐖?
	unsigned long offset;                          //鐎规矮绠熷Ч澶婄摟閸︺劌鐡ф惔鎾茶厬閻ㄥ嫬浜哥粔濠氬櫤
	unsigned char mask[] = {0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};  //閸旂喕鍏橀弫鎵矋閿涘瞼鏁ゆ禍搴㈡▔缁€鐑樼溄鐎涙鍋ｉ梼鍏歌厬閻ㄥ嫪瀵掗悙?
	int i,j,pos;


	switch(flag)    //娑撳秴鎮撻惃鍒ag鐎电懓绨叉稉宥呮倱閻ㄥ嫭鐪界€涙绨遍敍灞界杽閻滈绨″Ч澶婄摟閻ㄥ嫬銇囩亸蹇撳讲閺嶈宓侀棁鈧憰浣规暭閸?
	{
		case 16 :
				  {
					 char mat[32];   //16*16閻ㄥ嫭鐪界€涙娓剁憰?2娑擃亜鐡ч懞鍌滄畱閺佹壆绮嶉弶銉ョ摠閸?
					int y0=y;
					int x0=x;
					 hzk_p = fopen("HZK\\HZ16","rb");            //娴ｈ法鏁ら惄绋款嚠鐠侯垰绶?
					 if(hzk_p==NULL)
					 {
						settextjustify(LEFT_TEXT,TOP_TEXT);          //瀹革箓鍎寸€靛綊缍堥敍宀勩€婇柈銊ヮ嚠姒?
						settextstyle(GOTHIC_FONT,HORIZ_DIR,1);					//姒涙垳缍嬬粭鏂垮灊鏉堟挸鍤敍灞炬寜楠炲疇绶崙鐚寸礉24*24閻愬綊妯€
						outtextxy(10,10,"Can't open hzk16 file!Press any key to quit...");
						 getch();
						 exit(1);

					}
					while(*s!=NULL)
					{
						while (x<580-flag && (*s!=NULL))
						{
							y=y0;
							quma=s[0]-0xa0;                      //濮瑰倸鍤崠铏圭垳
							weima=s[1]-0xa0;                     //濮瑰倸鍤担宥囩垳
							offset=(94*(quma-1)+(weima-1))*32L;   //濮瑰倸鍤憰浣规▔缁€铏规畱濮瑰鐡ч崷銊ョ摟鎼存挻鏋冩禒鏈佃厬閻ㄥ嫬浜哥粔?
							fseek(hzk_p,offset,SEEK_SET);         //闁插秴鐣炬担宥嗘瀮娴犺埖瀵氶柦?
							fread (mat,32,1,hzk_p);            //鐠囪鍤拠銉︾溄鐎涙娈戦崗铚傜秼閻愬綊妯€閺佺増宓?1娑撻缚顩︾拠璇插弳閻ㄥ嫰銆嶉弫?

							for(i=0;i<16;i++)
							{
								pos=2*i;       //16*16閻晠妯€娑擃厽婀佸В蹇庣鐞涘本婀佹稉銈咁樆鐎涙濡?
								for(j=0;j<16;j++)    //娑撯偓鐞涘奔绔寸悰灞芥勾閹殿偅寮块敍灞界殺娴ｅ秳绗傛稉杞扮啊1閻ㄥ嫮鍋ｉ弰鍓с仛閸戠儤娼?
								{
									if((mask[j%8]&mat[pos+j/8])!=NULL)   //j%8閸欘亣鍏橀崷?閳?娑斿妫垮顏嗗箚閿涘/8閸?閿?娑斿妫垮顏嗗箚
									{
										putpixel(x+j,y,color);

									}

								}
								y++;


							}
							/*====================================================
								娴犮儰绗傞弰顖欑娑擃亝鐪界€涙妯夌粈鍝勭暚
							====================================================*/
							x+=part;        //缂佹獰 娑撯偓娑擃亜浜哥粔濠氬櫤part
							s+=2;           //濮瑰鐡ч柌灞界摠閺€鍓ф畱閺勵垰鍞撮惍渚婄礉2娑擃亜鐡ч懞鍌︾礉閹碘偓娴犮儴顩﹂崝?

						}
						x=x0;y0+=flag+10; //娑撯偓鐞涘本鐪界€涙妯夌粈鍝勭暚閸?闁插秵鏌婃禒搴′箯娓氀冪磻婵绶崙鐑樼溄鐎涙绱濈紒妾℃稉鈧稉顏勪焊缁夊鍣?
					}

					break;

				 }


		case 24 :
				  {
					char mat[72];   //24*24閻晠妯€鐟?2娑擃亜鐡ч懞鍌涙降鐎涙ê鍋?
					 int y0=y;
					 int x0=x;
					hzk_p = fopen("HZK\\Hzk24k","rb");
					if (hzk_p==NULL)
					{
						settextjustify(LEFT_TEXT,TOP_TEXT);          //瀹革箓鍎寸€靛綊缍堥敍宀勩€婇柈銊ヮ嚠姒?
						settextstyle(GOTHIC_FONT,HORIZ_DIR,3);					//姒涙垳缍嬬粭鏂垮灊鏉堟挸鍤敍灞炬寜楠炲疇绶崙鐚寸礉24*24閻愬綊妯€
						outtextxy(10,10,"Can't open hzk24 file!Press any key to quit...");
						getch();
						exit(1);

					}
					while(*s!=NULL)
					{
						while(x<565-flag && (*s!=NULL))
						{
							y=y0;
							quma=s[0]-0xa0;                      //濮瑰倸鍤崠铏圭垳
							weima=s[1]-0xa0;                     //濮瑰倸鍤担宥囩垳
							offset=(94*(quma-1)+(weima-1))*72L;
							fseek(hzk_p,offset,SEEK_SET);
							fread (mat,72,1,hzk_p);
							for (i=0;i<24;i++)
							{
								pos=3*i;   //閻晠妯€娑擃厽鐦℃稉鈧悰灞炬箒娑撳閲滅€涙濡?
								for (j=0;j<24;j++)   // 濮ｅ繋绔寸悰灞炬箒24娴?
								{
									if ((mask[j%8]&mat[pos+j/8])!=NULL)
										putpixel(x+j,y,color);

								}
								y++;

							}
							x+=part;
							s+=2;
						}
						x=x0;y0+=flag+10;
					}
						break;
				}

		case 32 :
				  {
					 char mat[128];   //32*32閻ㄥ嫭鐪界€涙娓剁憰?28娑擃亜鐡ч懞鍌滄畱閺佹壆绮嶉弶銉ョ摠閸?
					int y0=y;
					int x0=x;
					 hzk_p = fopen("HZK\\HZK32S","rb");
					 if(hzk_p==NULL)
					 {
						settextjustify(LEFT_TEXT,TOP_TEXT);          //瀹革箓鍎寸€靛綊缍堥敍宀勩€婇柈銊ヮ嚠姒?
						settextstyle(GOTHIC_FONT,HORIZ_DIR,3);					//姒涙垳缍嬬粭鏂垮灊鏉堟挸鍤敍灞炬寜楠炲疇绶崙鐚寸礉24*24閻愬綊妯€						
						outtextxy(10,10,"Can't open hzk32 file!Press any key to quit...");
						 getch();
						 exit(1);

					}
					while(*s!=NULL)
					{
						while (x<565-flag && (*s!=NULL))
						{
							y=y0;
							quma=s[0]-0xa0;                      //濮瑰倸鍤崠铏圭垳
							weima=s[1]-0xa0;                     //濮瑰倸鍤担宥囩垳
							offset=(94*(quma-1)+(weima-1))*128L;
							fseek(hzk_p,offset,SEEK_SET);
							fread (mat,128,1,hzk_p);
							for(i=0;i<32;i++)
							{
								pos=4*i;       //32*32閻晠妯€娑擃厽婀佸В蹇庣鐞涘本婀佹稉銈咁樆鐎涙濡?
								for(j=0;j<32;j++)
								{
									if((mask[j%8]&mat[pos+j/8])!=NULL)
									{
										putpixel(x+j,y,color);

									}

								}
								y++;


							}
								//娴犮儰绗傞弰顖欑娑擃亝鐪界€涙妯夌粈鍝勭暚
							x+=part;    //缂佹獰 娑撯偓娑擃亜浜哥粔濠氬櫤part
							s+=2;          //濮瑰鐡ч柌灞界摠閺€鍓ф畱閺勵垰鍞撮惍渚婄礉2娑擃亜鐡ч懞鍌︾礉閹碘偓娴犮儴顩﹂崝?

						}
						x=x0;y0+=flag+10;   //娑撯偓鐞涘本鐪界€涙妯夌粈鍝勭暚閸氬函绱濈紒妾℃稉鈧稉顏勪焊缁夊鍣?
					}
						break;

				 }


		case 48:
				  {
					char mat[288];   //48*48閻ㄥ嫭鐪界€涙娓剁憰?88娑擃亜鐡ч懞鍌滄畱閺佹壆绮嶉弶銉ョ摠閸?
					int y0=y;
					int x0=x;
					 hzk_p = fopen("HZK\\Hzk48k","rb");
					 if(hzk_p==NULL)
					 {
						settextjustify(LEFT_TEXT,TOP_TEXT);          //瀹革箓鍎寸€靛綊缍堥敍宀勩€婇柈銊ヮ嚠姒?
						settextstyle(GOTHIC_FONT,HORIZ_DIR,3);					//姒涙垳缍嬬粭鏂垮灊鏉堟挸鍤敍灞炬寜楠炲疇绶崙鐚寸礉24*24閻愬綊妯€
						outtextxy(10,10,"Can't open hzk48 file!Press any key to quit...");
						 getch();
						 exit(1);

					}
					while(*s!=NULL)
					{
						while (x<640-flag && (*s!=NULL))
						{
							y=y0;
							quma=s[0]-0xa0;                      //濮瑰倸鍤崠铏圭垳
							weima=s[1]-0xa0;                     //濮瑰倸鍤担宥囩垳
							offset=(94*(quma-1)+(weima-1))*288L;   //濮瑰倸鍤憰浣规▔缁€铏规畱濮瑰鐡ч崷銊ョ摟鎼存挻鏋冩禒鏈佃厬閻ㄥ嫬浜哥粔?
							fseek(hzk_p,offset,SEEK_SET);         //闁插秴鐣炬担宥嗘瀮娴犺埖瀵氶柦?
							fread (mat,288,1,hzk_p);            //鐠囪鍤拠銉︾溄鐎涙娈戦崗铚傜秼閻愬綊妯€閺佺増宓?1娑撻缚顩︾拠璇插弳閻ㄥ嫰銆嶉弫?

							for(i=0;i<48;i++)
							{
								pos=6*i;
								for(j=0;j<48;j++)    //娑撯偓鐞涘奔绔寸悰灞芥勾閹殿偅寮块敍灞界殺娴ｅ秳绗傛稉杞扮啊1閻ㄥ嫮鍋ｉ弰鍓с仛閸戠儤娼?
								{
									if((mask[j%8]&mat[pos+j/8])!=NULL)   //j%8閸欘亣鍏橀崷?閳?娑斿妫垮顏嗗箚閿涘/8閸?閿?娑斿妫垮顏嗗箚
									{
										putpixel(x+j,y,color);

									}

								}
								y++;
							}
								//娴犮儰绗傞弰顖欑娑擃亝鐪界€涙妯夌粈鍝勭暚
							x+=part;    //缂佹獰 娑撯偓娑擃亜浜哥粔濠氬櫤part
							s+=2;          //濮瑰鐡ч柌灞界摠閺€鍓ф畱閺勵垰鍞撮惍渚婄礉2娑擃亜鐡ч懞鍌︾礉閹碘偓娴犮儴顩﹂崝?

						}
						x=x0;y0+=flag+10;   //娑撯偓鐞涘本鐪界€涙妯夌粈鍝勭暚閸氬函绱濈紒妾℃稉鈧稉顏勪焊缁夊鍣?
					}
						break;

				}

		default:
				  break;

	}

	fclose(hzk_p);
}
