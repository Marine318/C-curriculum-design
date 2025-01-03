#include"common.h"
void jieshao();
int use()
{
    int page=0;
	int state=0,pre_state=0;
	clrmous(MouseX,MouseY);
	delay(100);
    //³ÌÐò¿ªÊ¼
    jieshao();
    page=1;

    return page;
}