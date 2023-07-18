#ifndef _MAIN_GAME_LOADED_
#define _MAIN_GAME_LOADED_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <dos.h>
#include <windows.h>
#include <MMsystem.h>
#include "lab.h"
#include "menu.h"
#include "Save_Game_Status.h"
#include "load_saved_game.h"
#include "main_game_screen.h"
#include "winner_screen.h"

void tabuleiro (int [], int []);
void imprime_tabuleiro();
void re_desenhar_jog(int [], int [], int, int);
void column_check(int [], int [], int [], int, int, char [], char []);
void column_filler(int, int [], int, int);
void re_desenhar_progresso(int [], int [], int [], int);
void game_area(int [], int, int[], char[], char[], int, int, int [], int[], int[], int, int[], int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int, int*, int[], int, int[], int[], int[], int[]);

void main_screen_loaded(char p1[59], char p2[59],int jogado1[11], int jogado2[11], int pl1_shift, int pl2_shift, int active_player, int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int type_of_match, int dados[4], int loaded_progresso[11], int *while_in_turn, int fichas_livres)///////////////////////////////////////////////////////////////////////////////////////////////////////////INICIALIZAÇÃO DA CONSOLA///////////////////////////////////////////////////////////////////////////////////////////////
{
	int percurso[11]={2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int topo[11]={3, 5, 7, 9, 11, 13, 11, 9, 7, 5, 3};
	int progresso[11];
	int desenha1 = 1;
	int desenha2 = 0;
	int l=0;
	int is_game_being_loaded = 1;
	int prev_pl1[11] = {0,0,0,0,0,0,0,0,0,0,0};
	int prev_pgr1[11] = {0,0,0,0,0,0,0,0,0,0,0};
	int prev_pl2[11] = {0,0,0,0,0,0,0,0,0,0,0};
	int prev_pgr2[11] = {0,0,0,0,0,0,0,0,0,0,0};

	if (*while_in_turn == 0)
	{
		if (pl1_shift == 1)
		{
			for (l=0; l<11; l++)
			{
				progresso[l]=jogado1[l];
			}
		}
		if (pl2_shift == 1)
		{
			for (l=0; l<11; l++)
			{
				progresso[l]=jogado2[l];
			}
		}
	}

	if (*while_in_turn == 1)
	{
			for (l=0; l<11; l++)
			{
				progresso[l]=loaded_progresso[l];
			}
		re_desenhar_progresso(progresso, jogado1, jogado2, active_player);
	}

	showRectAt(0,0, 198, 58);
	tabuleiro (percurso, topo);
	imprime_tabuleiro();
	re_desenhar_jog(jogado1, jogado2, desenha1, desenha2);
	column_check(jogado1, jogado2, topo, desenha1, desenha2, p1, p2);
	desenha1 = 0;
	desenha2 = 1;
	re_desenhar_jog(jogado1, jogado2, desenha1, desenha2);
	column_check(jogado1, jogado2, topo, desenha1, desenha2, p1, p2);

	showDoubleRectAt(108, 1, 11, 2);				////////////////////RETÂNGULO PLAYER 1//////////////////////////////////
	gotoxy(110,2);
	setColor(2,0);
	printf("Player 1");
	gotoxy(124,2);
	printf("NAME:");
	gotoxy(131,2);
	printf("%s", p1);

	resetColor();
	showDoubleRectAt(108, 4, 11, 2);				////////////////////RETÂNGULO PLAYER 2//////////////////////////////////
	gotoxy(110,5);
	setColor(5,0);
	printf("Player 2");
	gotoxy(124,5);
	printf("NAME:");
	gotoxy(131,5);
	printf("%s", p2);

	resetColor();
	showDoubleRectAt(108, 10, 88, 30);

	gotoxy(160,41);
	printf("You have   free chip(s) left to play!", fichas_livres);
	setColor(8,0);
	gotoxy(169,41);
	printf("%i", fichas_livres);
	resetColor();

	game_area(progresso, fichas_livres, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, while_in_turn, dados, is_game_being_loaded, prev_pl1, prev_pgr1, prev_pl2, prev_pgr2);
}

void re_desenhar_jog(int jogado1[11], int jogado2[11], int desenha1, int desenha2)
{
	int k,p;
	int vetor[11];
	if (desenha1 == 1)
	{
		p=0;
		for (k=0; k<11; k++)
		{
			vetor[k] = jogado1[k];
		}

	}
	if (desenha2 == 1)
	{
		p=3;
		for (k=0; k<11; k++)
		{
			vetor[k] = jogado2[k];
		}

	}

	for (k=0; k<11; k++)
	{
		if (vetor[k]!=0)
		{
			if (k<6)
			{
				if (vetor[k]<2)
				{
					setColor((2+p),(2+p));
					showRectAt(p+12+8*(k),32+(4*k),1,0);
					resetColor();
				}
			}
			if (k>5)
			{
				if (vetor[k]<2)
				{
					setColor((2+p),(2+p));
					showRectAt(p+60+8*(k-6),48-(4*(k-6)),1,0);
					resetColor();
				}
			}

			if (vetor[k]>1)
			{

				if (k<6)
					{
						setColor((2+p),(2+p));
						showRectAt(p+12+8*(k),(32+(4*k))-(4*(vetor[k]-1)),1,0);
						resetColor();
					}
				if (k>5)
					{
						setColor((2+p),(2+p));
						showRectAt(p+60+8*(k-6),(48-(4*(k-6)))-(4*(vetor[k]-1)),1,0);
						resetColor();
					}
			}
		}
	}
}

void column_check(int jogado1[11], int jogado2[11], int topo [11], int desenha1, int desenha2, char p1[59], char p2[59])
{
	int k,l,p, q;
	int vetor[11];
	int closed_column_pl1=0;
	int closed_column_pl2=0;
	int which_column = 0;

	if (desenha1 == 1)
	{
		p=0;
		q=3;
		for (l=0; l<11; l++)
		{
			vetor[l] = jogado1[l];
		}
				for (k=0; k<11; k++)
				{
					if (vetor[k] >= topo [k])
					{
						closed_column_pl1++;
						which_column = k;
						jogado2[k] = 0;////////////////////////////////////////////////////////////
						if (closed_column_pl1 != 0)
						{

							column_filler(which_column, vetor, p, q);
						}
					}
				}
	}

	if (desenha2 == 1)
	{
		p=3;
		q=0;
		for (l=0; l<11; l++)
		{
			vetor[l] = jogado2[l];
		}
				for (k=0; k<11; k++)
				{
					if (vetor[k] >= topo [k])
					{
						closed_column_pl2++;
						which_column = k;
						jogado1[k] = 0;/////////////////////////////////////////////////////////////
						if (closed_column_pl2 != 0)
						{

							column_filler(which_column, vetor, p, q);
						}
					}
				}
	}

	if (desenha1 == 1)
	{
		if (closed_column_pl1 > 2)
		{
			gotoxy(85,57);
			setColor(0,0);
			sleep(5);
			resetColor();
			winner_screen (closed_column_pl1, p1);
		}
	}

	if (desenha2 == 1)
	{
		if (closed_column_pl2 > 2)
		{
			gotoxy(85,57);
			setColor(0,0);
			sleep(5);
			resetColor();
			winner_screen (closed_column_pl2, p2);
		}
	}
}

void re_desenhar_progresso(int progresso[11], int jogado1[11], int jogado2[11], int active_player)
{
	int j;

	if (active_player == 1)
	{
		for (j=0; j<11; j++)
		{
			if (progresso[j]!= jogado1[j])
			{
				if (j<6)
				{
					if (progresso[j]<2)
					{
						setColor(8,8);
						showRectAt(12+8*(j),33+(4*j),1,0);
						resetColor();
					}
				}
				if (j>5)
				{
					if (progresso[j]<2)
					{
						setColor(8,8);
						showRectAt(60+8*(j-6),49-(4*(j-6)),1,0);
						resetColor();
					}
				}

				if (progresso[j]>1)
				{

					if (j<6)
						{
							if (progresso[j] > ((2*j))+3)
							{
								progresso[j] = ((2*j)+3);
							}

							setColor(8,8);
							showRectAt(12+8*(j),(33+(4*j))-(4*(progresso[j]-1)),1,0);
							resetColor();
						}
					if (j>5)
						{
							if (progresso[j] > (0-(2*j))+23)
							{
								progresso[j] = (0-(2*j)+23);
							}
							setColor(8,8);
							showRectAt(60+8*(j-6),(49-(4*(j-6)))-(4*(progresso[j]-1)),1,0);
							resetColor();
						}
				}
			}
		}
	}

if (active_player == 2)
	{
		for (j=0; j<11; j++)
		{
			if (progresso[j]!= jogado2[j])
			{
				if (j<6)
				{
					if (progresso[j]<2)
					{
						setColor(8,8);
						showRectAt(12+8*(j),33+(4*j),1,0);
						resetColor();
					}
				}
				if (j>5)
				{
					if (progresso[j]<2)
					{
						setColor(8,8);
						showRectAt(60+8*(j-6),49-(4*(j-6)),1,0);
						resetColor();
					}
				}

				if (progresso[j]>1)
				{

					if (j<6)
						{
							if (progresso[j] > ((2*j))+3)
							{
								progresso[j] = ((2*j)+3);
							}

							setColor(8,8);
							showRectAt(12+8*(j),(33+(4*j))-(4*(progresso[j]-1)),1,0);
							resetColor();
						}
					if (j>5)
						{
							if (progresso[j] > (0-(2*j))+23)
							{
								progresso[j] = (0-(2*j)+23);
							}
							setColor(8,8);
							showRectAt(60+8*(j-6),(49-(4*(j-6)))-(4*(progresso[j]-1)),1,0);
							resetColor();
						}
				}
			}
		}
	}
}

#endif
