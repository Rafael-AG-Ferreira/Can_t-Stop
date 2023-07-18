#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include <dos.h>
#include <windows.h>
#include <MMsystem.h>
#include "lab.h"
#include "fill_1_screen.h"
#include "menu.h"
#include "main_game_screen.h"

///1ST PROJECT EVER CREATED///

void fullscreen()
{
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
	fullscreen();
	first_screen();
	system("cls");
	menu();
	system("taskkill/IM ConsolePauser.exe");
}
