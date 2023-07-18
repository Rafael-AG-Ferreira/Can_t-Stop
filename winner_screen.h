#ifndef _WINNER_SCREEN_
#define _WINNER_SCREEN_
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include <dos.h>
#include <windows.h>
#include <MMsystem.h>
#include "main_game_screen.h"
#include "lab.h"
#include "menu.h"

void background();
void black_stop();
void print_first_page_stop();
void print_sign1(int, int);
void print_sign2(int, int);
void print_sign3(int, int);
void menu();


void winner_screen (int no_blocked_columns, char winner_player[59])
{

	int k;
	system("cls");
	showRectAt(0,0, 198, 58);
	setlocale(LC_ALL, "C");
	background();
	black_stop();
	print_first_page_stop();
	resetColor();
	gotoxy(85,23);
	printf("CONGRATULATIONS!!!!");
	gotoxy(80,25);
	printf("THE WINNER IS:");
	for (k=0; k<60; k++)
	gotoxy(95,25);
	printf("%s", winner_player);
	gotoxy(83,28);
	printf("With %i columns filled", no_blocked_columns);
	gotoxy(90,38);
	printf("WELL DONE!");
	gotoxy(85,39);
	printf("See You Next Time!!!!");
	setColor(0,0);
	gotoxy(80,36);
	sleep(10);
	menu();
}

void background()
{
	int k=0, j=0;
	char square = 177;

	for (j=0; j<29; j++)
	{
		for (k=0; k<99; k++)
		{
			setColor(7,0);
			gotoxy(1+(2*k),1+(2*j));
			printf("%c", square);
		}
	}

			for (j=0; j<29; j++)
			{
				for (k=0; k<98; k++)
				{
					setColor(12,0);
					gotoxy(2+(2*k),1+(2*j));
					printf("%c", square);
				}
			}
	for (j=0; j<28; j++)
	{
		for (k=0; k<98; k++)
		{
			setColor(7,0);
			gotoxy(2+(2*k),2+(2*j));
			printf("%c", square);
		}
	}

			for (j=0; j<28; j++)
			{
				for (k=0; k<99; k++)
				{
					setColor(12,0);
					gotoxy(1+(2*k),2+(2*j));
					printf("%c", square);
				}
			}
	resetColor();
}

void black_stop()
{
	int k;

	for (k=0; k<23;k++)
	{
		setColor(0,0);
		showRectAt(73+(1*k),6+(1*k),44-(2*k),45-(2*k));
		resetColor();
	}
	for (k=0; k<23;k++)
	{
		setColor(0,0);
		showRectAt(45+(1*k),20+(1*k),100-(2*k),17-(2*k));
		resetColor();
	}
	int y=6;
	int z;
	setColor(0,0);
	for (z=0; z<14; z++)
	{
		for (k=4; k<18; k++)
			{
				showRectAt((107-(2*k))-(2*z),y, 1, 0);
				printf("*");

			}
				y++;
	}
	y=37;
	for (z=0; z<14; z++)
	{
		for (k=4; k<18; k++)
			{
				showRectAt((151-(2*k))-(2*z),y, 1, 0);
				printf("*");

			}
				y++;
	}
	y=6;
	for (z=0; z<14; z++)
	{
		for (k=4; k<18; k++)
			{
				showRectAt((81+(2*k))+(2*z),y, 1, 0);
				printf("*");

			}
				y++;
	}
	y=37;
	for (z=0; z<14; z++)
	{
		for (k=4; k<18; k++)
			{
				showRectAt((37+(2*k))+(2*z),y, 1, 0);
				printf("*");

			}
				y++;
	}
}

void print_first_page_stop()
{


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

	print_sign3(45, 21);						////////////////////RETA LATERAL ESQUERDA///////////////////////////////
	print_sign3(145, 21);						////////////////////RETA LATERAL DIREITA////////////////////////////////

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
}
void print_sign1(int x, int y) ////////////////////DIAGONAIS DIREITA -> ESQUERDA//////////////////////
{
	int k=0;
	for (k=0; k<19; k++)
	{
		gotoxy(x-(2*k),y);
		printf("*");
		y++;
	}
}

void print_sign2(int x, int y)/////////////////////DIAGONAIS ESQUERDA -> DIREITA//////////////////////
{
	int k=0;
	for (k=0; k<19; k++)
	{
		gotoxy(x+(2*k),y);
		printf("*");
		y++;
	}
}

void print_sign3(int x, int y)/////////////////////RETAS LATERAIS/////////////////////////////////////
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
