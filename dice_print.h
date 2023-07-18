#ifndef _DICE_PRINT_		//protectes from multiple including...
#define _DICE_PRINT_		//... needs an #endif at bottom

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include "lab.h"
#include <dos.h>
#include <windows.h>
#include <MMsystem.h>


void print_dice_1()
{
	char point=254;
	setColor(8,0);
	showDoubleRectAt(70,46, 6,3);
	gotoxy(73,47);
	setColor(3,0);
	setlocale(LC_ALL, "C");
	printf("%c", point);
	resetColor();
}

void print_dice_2()
{
	char point=254;
	setColor(8,0);
	showDoubleRectAt(77,46, 6,3);
	gotoxy(80,47);
	setColor(3,0);
	setlocale(LC_ALL, "C");
	printf("%c", point);
	gotoxy(80,48);
	printf("%c", point);
	resetColor();
}

void print_dice_3()
{
	char point=254;
	setColor(8,0);
	showDoubleRectAt(84,46, 6,3);
	gotoxy(86,47);
	setColor(3,0);
	setlocale(LC_ALL, "C");
	printf("%c", point);
	gotoxy(88,47);
	printf("%c", point);
	gotoxy(87,48);
	printf("%c", point);
	resetColor();
}

void print_dice_4()
{
	char point=254;
	setColor(8,0);
	showDoubleRectAt(91,46, 6,3);
	gotoxy(93,47);
	setColor(3,0);
	setlocale(LC_ALL, "C");
	printf("%c", point);
	gotoxy(95,47);
	printf("%c", point);
	gotoxy(93,48);
	printf("%c", point);
	gotoxy(95,48);
	printf("%c", point);
	resetColor();
}

void print_dice_5()
{
	char point=254;
	setColor(8,0);
	showDoubleRectAt(98,46, 6,3);
	gotoxy(99,47);
	setColor(3,0);
	setlocale(LC_ALL, "C");
	printf("%c", point);
	gotoxy(103,47);
	printf("%c", point);
	gotoxy(100,48);
	printf("%c", point);
	gotoxy(102,48);
	printf("%c", point);
	gotoxy(101,47);
	printf("%c", point);
	resetColor();
}

void print_dice_6()
{
	char point=254;
	setColor(8,0);
	showDoubleRectAt(105,46, 6,3);
	gotoxy(106,47);
	setColor(3,0);
	setlocale(LC_ALL, "C");
	printf("%c", point);
	gotoxy(108,47);
	printf("%c", point);
	gotoxy(110,47);
	printf("%c", point);
	gotoxy(106,48);
	printf("%c", point);
	gotoxy(108,48);
	printf("%c", point);
	gotoxy(110,48);
	printf("%c", point);
	resetColor();
}

#endif
