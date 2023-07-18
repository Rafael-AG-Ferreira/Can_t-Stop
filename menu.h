#ifndef _MENU_
#define _MENU_
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include <dos.h>
#include <windows.h>
#include <MMsystem.h>
#include "lab.h"
#include "menu_2.h"
#include "menu_3.h"
#include "game_description.h"
#include "dice_print.h"
#include "load_saved_game.h"
#include "winner_screen.h"

void menu()
{

	setlocale(LC_ALL, "Portuguese");

	char choice;
	int valid_choice = 0;
	int is_game_being_loaded = 0;

	system("cls");
	showRectAt(0,0, 198, 58);

	setColor(6,0);
	gotoxy(66,20);
	printf(" ,,,");
	gotoxy(66,21);
	printf("{O,O}");
	gotoxy(66,22);
	printf("/)_)");
	gotoxy(66,23);
	printf(" '' ");

	setColor(6,0);
	gotoxy(63,4);
	printf("******   ******");
	gotoxy(63,5);
	printf("******* *******");
	gotoxy(63,6);
	printf("**** ***** ****");
	gotoxy(63,7);
	printf("****  ***  ****");
	gotoxy(63,8);
	printf("****   *   ****");
	gotoxy(63,9);
	printf("****       ****");
	gotoxy(63,10);
	printf("****       ****");
	gotoxy(63,11);
	printf("****       ****");

	gotoxy(82,4);
	printf("*************");
	gotoxy(82,5);
	printf("*************");
	gotoxy(82,6);
	printf("****");
	gotoxy(82,7);
	printf("********");
	gotoxy(82,8);
	printf("********");
	gotoxy(82,9);
	printf("****");
	gotoxy(82,10);
	printf("*************");
	gotoxy(82,11);
	printf("*************");

	gotoxy(99,4);
	printf("*****      ****");
	gotoxy(99,5);
	printf("******     ****");
	gotoxy(99,6);
	printf("*******    ****");
	gotoxy(99,7);
	printf("****  **   ****");
	gotoxy(99,8);
	printf("****   **  ****");
	gotoxy(99,9);
	printf("****    *******");
	gotoxy(99,10);
	printf("****     ******");
	gotoxy(99,11);
	printf("****      *****");

	gotoxy(118,4);
	printf("****       ****");
	gotoxy(118,5);
	printf("****       ****");
	gotoxy(118,6);
	printf("****       ****");
	gotoxy(118,7);
	printf("****       ****");
	gotoxy(118,8);
	printf("****       ****");
	gotoxy(118,9);
	printf("****       ****");
	gotoxy(118,10);
	printf("***************");
	gotoxy(118,11);
	printf(" ************* ");
	resetColor();

	setColor(7,0);
	gotoxy(76,20);
	printf("A");
	gotoxy(78,20);
	printf("Play Can’t Stop");

	gotoxy(76,21);
	printf("B");
	gotoxy(78,21);
	printf("Load a previously saved game");

	gotoxy(76,22);
	printf("C");
	gotoxy(78,22);
	printf("Show game description");

	gotoxy(76,23);
	printf("D");
	gotoxy(78,23);
	printf("Exit Game");

	do
	{
		gotoxy(76,26);
		printf("Your Choice: ");
		scanf("%c", &choice);
		fflush(stdin);
		resetColor();

		choice = tolower(choice);

		switch(choice)
		{
			case ('a'):
				menu_2();
				break;

			case ('b'):
				system("cls");
				Load_Saved_Game();
				valid_choice = 1;
				break;
			case ('c'):
				system("cls");
				menu_3();
				break;
			case ('d'):
				system("cls");
				showRectAt(0,0, 198, 58);
				gotoxy(50,25);
				printf("It's sad that you've left the game...");
				gotoxy(50, 27);
				printf("See you next time!");

				gotoxy(140, 20);
				printf("         \\|||/");
				gotoxy(140, 21);
				printf("         (o o)");
				gotoxy(140, 22);
				printf("-----ooO--(_)----------");
				gotoxy(140, 23);
				printf("|                     |");
				gotoxy(140, 24);
				printf("|                     |");
				gotoxy(140, 25);
				printf("|         BYE!        |");
				gotoxy(140, 26);
				printf("|                     |");
				gotoxy(140, 27);
				printf("|                     |");
				gotoxy(140, 28);
				printf("---------------ooO-----");
				gotoxy(140, 29);
				printf("        |  |  |        ");
				gotoxy(140, 30);
				printf("        |  |  |        ");
				gotoxy(140, 31);
				printf("        |  |  |        ");
				gotoxy(140, 32);
				printf("        |__|__|        ");
				gotoxy(140, 33);
				printf("        /_'Y'_\\       ");
				gotoxy(140, 34);
				printf("       (__/ \\__)      ");

				gotoxy(55,54);
				valid_choice = 1;
				setColor(0,0);
				sleep(5);

			default:
				setColor(0,0);
				showRectAt(90,26,107,0);
				resetColor();
		}
	}
	while (!valid_choice);
}
#endif
