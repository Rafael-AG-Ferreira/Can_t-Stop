#ifndef _FILL_1_SCREEN_
#define _FILL_1_SCREEN_
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include <time.h>
#include "lab.h"

void print_stop_sign1(int, int);
void print_stop_sign2(int, int);
void print_stop_sign3(int, int);

void first_screen(void)
{
	char reg = 174;
	showRectAt(0,0, 198, 58);
	gotoxy(76,6);												//Linha Superior do STOP
	printf(" *   *   *   *   *   *   *   *   *   *   *");
	gotoxy(76,51);												//Linha Inferior do STOP
	printf(" *   *   *   *   *   *   *   *   *   *   *");

	int k=4, y=6;
	for (k=4; k<19; k++)
		{
			gotoxy(81-(2*k),y);
			printf("*");
			y++;
		}
 	y=6;
	for (k=4; k<19; k++)
		{
			gotoxy(109+(2*k),y);
			printf("*");
			y++;
		}

	print_stop_sign3(45, 21);						////////////////////RETA LATERAL ESQUERDA///////////////////////////////
	print_stop_sign3(145, 21);						////////////////////RETA LATERAL DIREITA////////////////////////////////

	y=37;
	for (k=4; k<19; k++)
		{
			gotoxy(37+(2*k),y);
			printf("*");
			y++;
		}
	y=37;
	for (k=4; k<19; k++)
		{
			gotoxy(153-(2*k),y);
			printf("*");
			y++;
		}

	////////////////FILLER

	setColor(4, 0);
	gotoxy(73,7);												//Linha VERMELHA Superior do STOP
	printf("* * * * * * * * * * * * * * * * * * * * * * *");
	gotoxy(73,8);
	printf("* * * * * * * * * * * * * * * * * * * * * * *");
	gotoxy(73,9);
	printf("* * * * * * * * * * * * * * * * * * * * * * *");
	gotoxy(73,10);
	printf("* * * * * * * * * * * * * * * * * * * * * * *");
	gotoxy(73,11);
	printf("* * * * * * * * * * * * * * * * * * * * * * *");
	gotoxy(73,12);
	printf("* * * * * * * * * * * * * * * * * * * * * * *");
	gotoxy(73,13);
	printf("* * * * * * * * * * * * * * * * * * * * * * *");
	gotoxy(73,14);
	printf("* * * * * * * * * * * * * * * * * * * * * * *");
	setColor(15,0);
	gotoxy(79,15);
	printf("* * * * * * * * * * * * * * * * * *");

	setColor(4,0);
	gotoxy(75,43);												//Linha VERMELHA Inferior do STOP
	printf("* * * * * * * * * * * * * * * * * * * * *");
	gotoxy(75,50);
	printf("* * * * * * * * * * * * * * * * * * * * *");
	gotoxy(75,49);
	printf("* * * * * * * * * * * * * * * * * * * * *");
	gotoxy(75,48);
	printf("* * * * * * * * * * * * * * * * * * * * *");
	gotoxy(75,47);
	printf("* * * * * * * * * * * * * * * * * * * * *");
	gotoxy(75,46);
	printf("* * * * * * * * * * * * * * * * * * * * *");
	gotoxy(75,45);
	printf("* * * * * * * * * * * * * * * * * * * * *");
	gotoxy(75,44);
	printf("* * * * * * * * * * * * * * * * * * * * *");
	setColor(15,0);
	gotoxy(79,42);
	printf("* * * * * * * * * * * * * * * * * *");


	///////////////////////////////////////////////////////RETAS LATERAIS/////////////

	setColor(4, 0);

	int l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(47,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(143,m);
	printf("*");
	m++;
	}

	m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(49,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(141,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(51,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(139,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(53,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(137,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(55,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(135,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(57,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(133,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(59,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(131,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(61,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(129,m);
	printf("*");
	m++;
	}
	setColor(15,0);																			l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(63,m);
	printf("*");
	m++;
	}

	l=0, m=21;
	for (l=0; l<17; l++)
	{
	gotoxy(127,m);
	printf("*");
	m++;
	}
	resetColor();
///////////////////////////////////////////////DIAGONAL SUPERIOR DIR-ESQ////////////////////////////////////////////////////////////////

	setColor(4,0);
	k=4, y=8;
	for (k=4; k<17; k++)
	{
	gotoxy(79-(2*k),y);
	printf("*");
	y++;
	}
	k=4, y=9;
	for (k=4; k<16; k++)
	{
	gotoxy(79-(2*k),y);
	printf("*");
	y++;
	}
	k=4, y=10;
	for (k=4; k<15; k++)
	{
	gotoxy(79-(2*k),y);
	printf("*");
	y++;
	}
	k=4, y=11;
	for (k=4; k<14; k++)
	{
	gotoxy(79-(2*k),y);
	printf("*");
	y++;
	}
	k=4, y=12;
	for (k=4; k<13; k++)
	{
	gotoxy(79-(2*k),y);
	printf("*");
	y++;
	}
	k=4, y=13;
	for (k=4; k<12; k++)
	{
	gotoxy(79-(2*k),y);
	printf("*");
	y++;
	}
	k=4, y=14;
	for (k=4; k<11; k++)
	{
	gotoxy(79-(2*k),y);
	printf("*");
	y++;
	}
	k=4, y=15;
	for (k=4; k<10; k++)
	{
	gotoxy(79-(2*k),y);
	printf("*");
	y++;
	}
	k=4, y=15;
	for (k=4; k<10; k++)
	{
	gotoxy(81-(2*k),y);
	printf("*");
	y++;
	}

	k=4, y=15;
	for (k=4; k<11; k++)
	{
	gotoxy(83-(2*k),y);
	printf("*");
	y++;
	}
	k=4, y=15;
	for (k=4; k<12; k++)
	{
	gotoxy(85-(2*k),y);
	printf("*");
	y++;
	}
	setColor(15,0);
	k=4, y=15;
	for (k=4; k<12; k++)
	{
	gotoxy(87-(2*k),y);
	printf("*");
	y++;
	}
/////////////////////////////////////////////////////DIAGONAL SUPERIOR ESQ-DIR///////////////////////////////////////////////
	setColor(4,0);
	y=8;
	for (k=4; k<17; k++)
	{
	gotoxy(111+(2*k),y);
	printf("*");
	y++;
	}
	y=9;
	for (k=4; k<16; k++)
	{
	gotoxy(111+(2*k),y);
	printf("*");
	y++;
	}
	y=10;
	for (k=4; k<15; k++)
	{
	gotoxy(111+(2*k),y);
	printf("*");
	y++;
	}
	y=11;
	for (k=4; k<14; k++)
	{
	gotoxy(111+(2*k),y);
	printf("*");
	y++;
	}
	y=12;
	for (k=4; k<13; k++)
	{
	gotoxy(111+(2*k),y);
	printf("*");
	y++;
	}
	y=13;
	for (k=4; k<12; k++)
	{
	gotoxy(111+(2*k),y);
	printf("*");
	y++;
	}
	y=14;
	for (k=4; k<11; k++)
	{
	gotoxy(111+(2*k),y);
	printf("*");
	y++;
	}
	y=15;
	for (k=4; k<10; k++)
	{
	gotoxy(111+(2*k),y);
	printf("*");
	y++;
	}
	y=15;
	for (k=4; k<10; k++)
	{
	gotoxy(109+(2*k),y);
	printf("*");
	y++;
	}
	y=15;
	for (k=4; k<11; k++)
	{
	gotoxy(107+(2*k),y);
	printf("*");
	y++;
	}
	y=15;
	for (k=4; k<12; k++)
	{
	gotoxy(105+(2*k),y);
	printf("*");
	y++;
	}
	setColor(15,0);																						y=15;
	for (k=4; k<12; k++)
	{
	gotoxy(103+(2*k),y);
	printf("*");
	y++;
	}
//////////////////////////////////////////////////////////DIAGONAIS INFERIORES////////////////////////////////////////////////
	setColor(4,0);
	y=38;
	for (k=4; k<17; k++)
	{
	gotoxy(41+(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<17; k++)
	{
	gotoxy(149-(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<16; k++)
	{
	gotoxy(43+(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<16; k++)
	{
	gotoxy(147-(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<15; k++)
	{
	gotoxy(45+(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<15; k++)
	{
	gotoxy(145-(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<14; k++)
	{
	gotoxy(47+(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<14; k++)
	{
	gotoxy(143-(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<13; k++)
	{
	gotoxy(49+(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<13; k++)
	{
	gotoxy(141-(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<12; k++)
	{
	gotoxy(51+(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<12; k++)
	{
	gotoxy(139-(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<11; k++)
	{
	gotoxy(53+(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<11; k++)
	{
	gotoxy(137-(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<10; k++)
	{
	gotoxy(55+(2*k),y);
	printf("*");
	y++;
	}
	y=38;
	for (k=4; k<10; k++)
	{
	gotoxy(135-(2*k),y);
	printf("*");
	y++;
	}
	y=37;
	for (k=4; k<11; k++)
	{
	gotoxy(55+(2*k),y);
	printf("*");
	y++;
	}
	y=37;
	for (k=4; k<11; k++)
	{
	gotoxy(135-(2*k),y);
	printf("*");
	y++;
	}
	y=36;
	for (k=4; k<12; k++)
	{
	gotoxy(55+(2*k),y);
	printf("*");
	y++;
	}
	y=36;
	for (k=4; k<12; k++)
	{
	gotoxy(135-(2*k),y);
	printf("*");
	y++;
	}
	y=35;
	for (k=4; k<13; k++)
	{
	gotoxy(55+(2*k),y);
	printf("*");
	y++;
	}
	y=35;
	for (k=4; k<13; k++)
	{
	gotoxy(135-(2*k),y);
	printf("*");
	y++;
	}
	setColor(15,0);
	y=35;
	for (k=4; k<12; k++)
	{
	gotoxy(57+(2*k),y);
	printf("*");
	y++;
	}
	y=35;
	for (k=4; k<12; k++)
	{
	gotoxy(133-(2*k),y);
	printf("*");
	y++;
	}
//////////////////////////////TEXTO DE PREENCHIMENTO//////////////////////////////////////////////////////////////////////////////////////////////////////

	resetColor();
	gotoxy(90,21);
	printf("CAN'T STOP");
	gotoxy(83, 31);
	printf("Designed by: Sid Sackson");

	gotoxy(76,33);
	printf("Originally Published by %cParker Brothers", reg);
	gotoxy(93,35);
	printf("1980");

	gotoxy(1,56);
	printf("LABORATÓRIO DE INFORMÁTICA E COMPUTADORES");
	gotoxy(1,57);
	printf("2020/2021");

	gotoxy(163,56);
	printf("RAFAEL ANTÓNIO GONÇALVES FERREIRA");
	gotoxy(181,57);
	printf("ragf@outlook.pt");
	gotoxy(83,57);
	setColor(0, 0);
	sleep(5);
	resetColor();
}


void print_stop_sign1(int x, int y) ////////////////////DIAGONAIS DIREITA -> ESQUERDA//////////////////////
{
	int k=0;
	for (k=0; k<19; k++)
	{
		gotoxy(x-(2*k),y);
		printf("*");
		y++;
	}
}

void print_stop_sign2(int x, int y)/////////////////////DIAGONAIS ESQUERDA -> DIREITA//////////////////////
{
	int k=0;
	for (k=0; k<19; k++)
	{
		gotoxy(x+(2*k),y);
		printf("*");
		y++;
	}
}

void print_stop_sign3(int x, int y)/////////////////////RETAS LATERAIS/////////////////////////////////////
{
	int k=0;
	for (k=0; k<16; k++)
	{
		gotoxy(x,y);
		printf("*");
		y++;
	}
}


#endif
