// IPC.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Clipboard.h"
#include <iostream>
#include "Mailslot.h"
using namespace std;

void Test_ClipBoard()
{
	Clipboard v1;
	char BufferData[MAX_PATH] = "yifiyifiyifiyifiyifi";
	v1.SetClipBoardData(BufferData);

	char* Buffer = NULL;

	v1.GetClipBoardData(&Buffer);
	printf("%s\r\n", Buffer);
}

void Test_MailSlot()
{
	CMailslot v1;
	v1.OnCreate();
	int a = 0;

	v1.OnRecv();

}
int main()
{
	
	Test_MailSlot();
	getchar();
	getchar();
	int a = 0;
    return 0;
}

