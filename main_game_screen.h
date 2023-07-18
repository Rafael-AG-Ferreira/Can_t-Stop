#ifndef _MAIN_GAME_SCREEN_
#define _MAIN_GAME_SCREEN_
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
#include "dados.h"
#include "menu.h"
#include "Save_Game_Status.h"
#include "load_saved_game.h"
#include "winner_screen.h"
#include "bloqueia.h"
#include "agrupamento_dados.h"
#include "soma_ao_vetor.h"
#include "soma_ao_vetor_bot.h"
#include "main_game_loaded.h"
#include "bot_file.h"

void imprime_tabuleiro();
void stop_symbol(void);
void linha (int, int);
void tabuleiro (int [], int []);
void game_area(int [], int, int[], char[], char[], int, int, int [], int[], int[], int, int[], int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int, int*, int[], int, int[], int[], int[], int[]);
void see_vetor2(int [], int);
void desenhar_jog1_1_1(int [], int [], int, int);
void apagar_jog1_1_1(int [], int [], int, int);
void desenhar_progresso(int [], int [], int [], int);
int apagar_progresso(int []);
void stop_continue(int [], int [], int [], int, int[], char[], char[], int, int, int [], int [], int, int[], int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int, int[], int*, int, int[], int[], int[], int[]);
void playboard_cover();
void column_checker(int [], int [], int [], int, int, char[], char[]);
void column_filler(int, int[], int, int);
int bad_luck (int [], int, int[], char[], char[], int, int, int [], int[], int[], int, int[], int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int, int*, int[], int, int[], int[], int[], int[]);

void main_screen(int type_of_match)
{
	int percurso[11]={2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int topo[11]={3, 5, 7, 9, 11, 13, 11, 9, 7, 5, 3};
	int progresso[11]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int fichas_livres = 3;
	int dados_v2[4];
	int k=0;
	char p1[59];
	char p2[59];
	int jogado1[11]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int jogado2[11]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int blocked_columns[11]={20,20,20,20,20,20,20,20,20,20,20};
	int pl1_shift;
	int pl2_shift;
	srand(time(NULL));
	int active_player = (1 + rand() % 2);
	int ab=20;
	int bb=20;
	int cb=20;
	int db=20;
	int eb=20;
	int fb=20;
	int gb=20;
	int hb=20;
	int ib=20;
	int jb=20;
	int kb=20;
	int while_in_turn=0;
	int is_game_being_loaded = 0;
	int prev_pl1[11] = {0,0,0,0,0,0,0,0,0,0,0};
	int prev_pgr1[11] = {0,0,0,0,0,0,0,0,0,0,0};
	int prev_pl2[11] = {0,0,0,0,0,0,0,0,0,0,0};
	int prev_pgr2[11] = {0,0,0,0,0,0,0,0,0,0,0};

	if (active_player == 1)
	{
		pl1_shift = 1;
		pl2_shift = 0;
	}
	if (active_player == 2)
	{
		pl1_shift = 0;
		pl2_shift = 1;
	}

	showRectAt(0,0, 198, 58);
	tabuleiro (percurso, topo);
	imprime_tabuleiro();

	showDoubleRectAt(108, 1, 11, 2);				////////////////////RETÂNGULO PLAYER 1//////////////////////////////////
	gotoxy(110,2);
	setColor(2,0);
	printf("Player 1");
		gotoxy(124,2);
		printf("NAME:");
		gotoxy(131,2);
		scanf("%[^\n]s", &p1);
		gotoxy(131,2);
		fflush(stdin);
		printf("%s", p1);
		fflush(stdin);


	if (type_of_match == 1)
	{
		resetColor();
		showDoubleRectAt(108, 4, 11, 2);				////////////////////RETÂNGULO PLAYER 2//////////////////////////////////
		gotoxy(110,5);
		setColor(5,0);
		printf("Player 2");
		gotoxy(124,5);
		printf("NAME:");
		gotoxy(131,5);
		scanf("%[^\n]s", &p2);
		gotoxy(131,5);
		printf("%s", p2);
		fflush(stdin);
	}

	if (type_of_match == 2)
	{
		char p3[59]={'M','r','.',' ','C','o','m','p','u','t','e','r','\0'};
		for (k=0; k<59; k++)
		{
			p2[k] = p3[k];
		}

		resetColor();
		showDoubleRectAt(108, 4, 11, 2);				////////////////////RETÂNGULO COMPUTER//////////////////////////////////
		gotoxy(110,5);
		setColor(5,0);
		printf("Computer");
		gotoxy(124,5);
		printf("NAME:");
		gotoxy(131,5);
		printf("%s", p2);
	}

	resetColor();
	gotoxy(2,2);
	showDoubleRectAt(108, 10, 88, 30);				////////////////////RETÂNGULO JOGADAS///////////////////////////////////

	game_area(progresso, fichas_livres, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, &ab, &bb, &cb, &db, &eb, &fb, &gb, &hb, &ib, &jb, &kb, type_of_match, &while_in_turn, dados_v2, is_game_being_loaded, prev_pl1, prev_pgr1, prev_pl2, prev_pgr2);
}

void game_area(int progresso[11], int fichas_livres, int percurso[11], char p1[59], char p2[59], int pl1_shift, int pl2_shift, int topo[11], int jogado1[11], int jogado2[11], int active_player, int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int type_of_match, int *while_in_turn, int loaded_dice[4], int is_game_being_loaded, int prev_pl1 [11], int prev_pgr1[11], int prev_pl2[11], int prev_pgr2 [11])
{
	int dados[4];
	int comb_dados[3][2];
	int progress[11];
	int down_arrow = 25;
	int i=0;
	int j=0;
	int k=0;
	int v_choice = 0;
	int ok = 0;
	int value_a=0;
	int value_b=0;
	int value_c=0;
	int count_a=0;
	int count_b=0;
	int count_c=0;
	int passed=0;
	int denier1=0;
	int denier2=0;
	int denier3=0;
	int denier4=0;
	int denier5=0;
	int denier6=0;
	int denier7=0;
	int denier8=0;
	int denier9=0;
	int count_name_pl1= strlen(p1);
	int count_name_pl2= strlen(p2);
	int controller_1 = 0;
	int controller_2 = 0;
	int controller_3 = 0;

	if (pl1_shift != 0)
	{
		for (k=0; k<11; k++)
		{
			progress[k] = jogado1[k];
		}
	}
	if (pl1_shift != 0)
	{
		for (k=0; k<11; k++)
		{
			progress[k] = jogado2[k];
		}
	}

	if (pl1_shift != 0)///////////////////////////////////////////////////PARA INDICAR AO UTILIZADOR QUE É O SEU TURNO
	{
		setColor(0,0);
		showRectAt(108,43,88,3);
		showRectAt(108,44,88,1);
		resetColor();
		setColor(2,0);
		if (count_name_pl1 > 17)
		{
			showDoubleRectAt(110,43,count_name_pl1+3,3);
		}
		else
		{
			showDoubleRectAt(110,43,18,3);
		}
		resetColor();
		gotoxy(112, 44);
		printf("%s", p1);
		gotoxy(112, 45);
		printf("It's your turn!");
		for (k=0; k<11; k++)
		{
			gotoxy(131+(k*4), 49);
			printf("|%i  ", percurso[k]);
			gotoxy(131+(k*4), 50);
			printf("|+%i ", (jogado1[k]-prev_pl1[k]));
			gotoxy(131+(k*4), 51);
			printf("|#%i ", (topo[k]-(topo[k]-prev_pl1[k])));
			gotoxy(112, 49);
			printf("Column Number");
			gotoxy(112, 50);
			printf("Previous Advance");
			gotoxy(112, 51);
			printf("Previous House N#");
			setColor(2,0);
			showDoubleRectAt(110,48,65,4);
			resetColor();
		}
	}
	if (pl2_shift != 0)///////////////////////////////////////////////////PARA INDICAR AO UTILIZADOR QUE É O SEU TURNO
	{
		setColor(0,0);
		showRectAt(108,43,88,3);
		showRectAt(108,44,88,1);
		resetColor();
		setColor(5,0);
		if (count_name_pl2 > 17)
		{
			showDoubleRectAt(110,43,count_name_pl2+3,3);
		}
		else
		{
			showDoubleRectAt(110,43,18,3);
		}
		resetColor();
		gotoxy(112, 44);
		printf("%s", p2);
		gotoxy(112, 45);
		printf("It's your turn!");
		for (k=0; k<11; k++)
		{
			gotoxy(131+(k*4), 49);
			printf("|%i  ", percurso[k]);
			gotoxy(131+(k*4), 50);
			printf("|+%i ", (jogado2[k]-prev_pl2[k]));
			gotoxy(131+(k*4), 51);
			printf("|#%i ", (topo[k]-(topo[k]-prev_pl2[k])));
			gotoxy(112, 49);
			printf("Column Number");
			gotoxy(112, 50);
			printf("Previous Advance");
			gotoxy(112, 51);
			printf("Previous House N#");
			setColor(5,0);
			showDoubleRectAt(110,48,65,4);
			resetColor();
		}
	}

	if (is_game_being_loaded == 0)
	{
		lancar_dados(dados);
		see_vetor(dados, 4);
		combinar_dados(dados, comb_dados);
	}

	if (is_game_being_loaded == 1)
	{
		see_vetor(loaded_dice, 4);
		combinar_dados(loaded_dice, comb_dados);
		is_game_being_loaded = 0;
	}


	*while_in_turn = 1;
	Save_Game_Status(p1, p2, jogado1, jogado2, pl1_shift, pl2_shift, active_player, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, dados, progresso, while_in_turn, fichas_livres);
	gotoxy(83,57);
	setColor(0, 0);
	sleep(1);
	resetColor();


	gotoxy(141,18);
	printf("%c YOUR POSSIBLE MOVES %c", down_arrow, down_arrow);
	if (pl1_shift != 0)
	{
		for (i=0; i<11; i++)
		{
			if (progresso[i] != jogado1[i] && value_a == 0)
			{
				value_a = percurso[i];
			}
			if (progresso[i] != jogado1[i] && percurso[i] != value_a && value_a != 0 && value_b == 0)
			{
				value_b = percurso[i];
			}
			if (progresso[i] != jogado1[i] && percurso[i] != value_a && value_a != 0 && percurso[i] != value_b && value_b != 0 && value_c == 0)
			{
				value_c = percurso[i];
			}
		}
	}
	if (pl2_shift != 0)
	{
		for (i=0; i<11; i++)
		{
			if (progresso[i] != jogado2[i] && value_a == 0)
			{
				value_a = percurso[i];
			}
			if (progresso[i] != jogado2[i] && percurso[i] != value_a && value_a != 0 && value_b == 0)
			{
				value_b = percurso[i];
			}
			if (progresso[i] != jogado2[i] && percurso[i] != value_a && value_a != 0 && percurso[i] != value_b && value_b != 0 && value_c == 0)
			{
				value_c = percurso[i];
			}
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (comb_dados[i][j] == value_a && count_a == 0)
			{
				ok++;
				count_a++;
			}
			if (comb_dados[i][j] == value_b && count_b == 0)
			{
				ok++;
				count_b++;
			}
			if (comb_dados[i][j] == value_c && count_c == 0)
			{
				ok++;
				count_c++;
			}
		}
	}

	if (fichas_livres == 3)
	{
		if (((type_of_match == 2) && (pl1_shift != 0)) || (type_of_match == 1))////////////////////P1 vs P2//////////////////////////
		{
			tres_fichas_livres (jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, down_arrow, &denier1, &denier2, &denier3, &denier4, &denier5, &denier6, &denier7, &denier8, &denier9);
			dados_3fichas (progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9);
		}
		if ((type_of_match == 2) && (pl2_shift != 0))//////////////////////////////////////////////P1 vs BOT//////////////////////////
		{
			tres_fichas_livres (jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, down_arrow, &denier1, &denier2, &denier3, &denier4, &denier5, &denier6, &denier7, &denier8, &denier9);
			bot_tres_fichas (progresso, fichas_livres, comb_dados, &denier1, &denier2, &denier3, &denier4, &denier5, &denier6, &denier7, &denier8, &denier9, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match);
		}
	}

	if (fichas_livres < 3)
	{
		int muda_linha3 = 0;
		if (fichas_livres == 2)
		{
			if (((type_of_match == 2) && (pl1_shift != 0)) || (type_of_match == 1))////////////////////P1 vs P2//////////////////////////
			{
				duas_fichas_livres (jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, down_arrow, &denier1, &denier2, &denier3, &denier4, &denier5, &denier6, &denier7, &denier8, &denier9, value_a);
				dados_2fichas (progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9);
			}
			if ((type_of_match == 2) && (pl2_shift != 0))//////////////////////////////////////////////P1 vs BOT//////////////////////////
			{
				duas_fichas_livres(jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, down_arrow, &denier1, &denier2, &denier3, &denier4, &denier5, &denier6, &denier7, &denier8, &denier9, value_a);
				bot_duas_fichas(progresso, fichas_livres, comb_dados, &denier1, &denier2, &denier3, &denier4, &denier5, &denier6, &denier7, &denier8, &denier9, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, value_a);
			}
		}

		if (fichas_livres < 2)
		{
			if (fichas_livres == 1)
			{
				if (((type_of_match == 2) && (pl1_shift != 0)) || (type_of_match == 1))////////////////////P1 vs P2//////////////////////////
				{
					uma_ficha_livre (jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, down_arrow, value_a, value_b, value_c, &denier1, &denier2, &denier3, &denier4, &denier5, &denier6, &denier7, &denier8, &denier9);
					dados_1ficha (progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9);
				}
				if ((type_of_match == 2) && (pl2_shift != 0))//////////////////////////////////////////////P1 vs BOT//////////////////////////
				{
					uma_ficha_livre (jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, down_arrow, value_a, value_b, value_c, &denier1, &denier2, &denier3, &denier4, &denier5, &denier6, &denier7, &denier8, &denier9);
					bot_uma_ficha (progresso, fichas_livres, comb_dados, &denier1, &denier2, &denier3, &denier4, &denier5, &denier6, &denier7, &denier8, &denier9, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, value_a, value_b);
				}
			}
			if (fichas_livres == 0)
			{
				if (ok == 0 && fichas_livres == 0)
				{
					bad_luck (progresso, fichas_livres, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, while_in_turn, loaded_dice, is_game_being_loaded, prev_pl1, prev_pgr1, prev_pl2, prev_pgr2);
				}
				else
				{
					zero_fichas_livres (jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, down_arrow, value_a, value_b, value_c, &denier1, &denier2, &denier3, &denier4, &denier5, &denier6, &denier7, &denier8, &denier9);
					dados_0fichas (progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9);
				}
			}
		}
	}

	desenhar_progresso(progresso, jogado1, jogado2, active_player);
	if ((type_of_match == 2) && (pl2_shift != 0))
	{
		setColor(0,0);
		gotoxy(85,56);
		sleep(0.5);
		resetColor();
	}
	stop_continue(jogado1, jogado2, progresso, fichas_livres, percurso, p1, p2, pl1_shift, pl2_shift, topo, progress, active_player, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, dados, while_in_turn, is_game_being_loaded, prev_pl1, prev_pgr1, prev_pl2, prev_pgr2);

}

void linha (int num, int lim)
{
	int k=0;
	int inicio [11] = {20, 16, 12, 8, 4, 0, 4, 8, 12, 16, 20};
	for (k=1; k<=lim; k++)
	{
		setColor(4,0);
		showRectAt(3+8*(num-1), 3+inicio[num-2]+4*(k-1), 6, 3);
		setColor(15,0);
		gotoxy(6+8*(num-1), 5+inicio[num-2]+4*(k-1));
		printf("%d", num);
	}
}

void tabuleiro (int percurso[11], int topo[11])
{
	int k=0;

	for (k=1; k<=11; k++)
	{
		linha(percurso[k-1], topo[k-1]);
	}
}

void see_vetor2(int v[], int dim)
{
	int k;
	for (k=0; k<dim; k++)
	{
		gotoxy(112,31+k);
		printf("#%d = %d\n", k, v[k]);
	}
}

void desenhar_progresso(int progresso[11], int jogado1[11], int jogado2[11], int active_player)
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

int apagar_progresso(int progresso[11])///////////////////////////////////////////////////////////////////////////////////	PARA APAGAR AS FICHAS DE PROGRESSO
{
	int j;
	for (j=0; j<11; j++)
	{
		if (progresso[j]!=0)
		{
			if (j<6)
			{
				if (progresso[j]<2)
				{
					setColor(0,0);
					showRectAt(12+8*(j),33+(4*j),1,0);
					resetColor();
				}
			}
			if (j>5)
			{
				if (progresso[j]<2)
				{
					setColor(0,0);
					showRectAt(60+8*(j-6),49-(4*(j-6)),1,0);
					resetColor();
				}
			}

			if (progresso[j]>1)
			{

				if (j<6)
					{
						setColor(0,0);
						showRectAt(12+8*(j),(33+(4*j))-(4*(progresso[j]-1)),1,0);
						resetColor();
					}
				if (j>5)
					{
						setColor(0,0);
						showRectAt(60+8*(j-6),(49-(4*(j-6)))-(4*(progresso[j]-1)),1,0);
						resetColor();
					}
			}
		}
	}
}

void desenhar_jog1_1_1(int jogado1[11], int jogado2[11], int pl1_shift, int pl2_shift)////////////////////////////////////////////////////////////////////////////////////	PARA DESENHAR AS FICHAS DO JOGADOR
{
	int k,p;
	int vetor[11];
	if (pl1_shift == 1)
	{
		p=0;
		for (k=0; k<11; k++)
		{
			vetor[k] = jogado1[k];
		}

	}
	if (pl2_shift == 1)
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
gotoxy(83,57);
setColor(0,0);
sleep(0.25);
resetColor();
}

void apagar_jog1_1_1(int jogado1[11], int jogado2[11], int pl1_shift, int pl2_shift)////////////////////////////////////////////////////////////////////////////////////	PARA APAGAR AS FICHAS DO JOGADOR
{
	int k,p;
	int vetor[11];
	if (pl1_shift == 1)
	{
		p=0;
		for (k=0; k<11; k++)
		{
			vetor[k] = jogado1[k];
		}

	}
	if (pl2_shift == 1)
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
					setColor(0,0);
					showRectAt(p+12+8*(k),32+(4*k),1,0);
					resetColor();
				}
			}
			if (k>5)
			{
				if (vetor[k]<2)
				{
					setColor(0,0);
					showRectAt(p+60+8*(k-6),48-(4*(k-6)),1,0);
					resetColor();
				}
			}

			if (vetor[k]>1)
			{

				if (k<6)
					{
						setColor(0,0);
						showRectAt(p+12+8*(k),(32+(4*k))-(4*(vetor[k]-1)),1,0);
						resetColor();
					}
				if (k>5)
					{
						setColor(0,0);
						showRectAt(p+60+8*(k-6),(48-(4*(k-6)))-(4*(vetor[k]-1)),1,0);
						resetColor();
					}
			}
		}
	}
}
void stop_continue(int jogado1[11], int jogado2[11], int progresso[11], int free_chips_left, int percurso[11], char p1[59], char p2[59], int pl1_shift, int pl2_shift, int topo[11], int progress[11], int active_player, int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int type_of_match, int dados[4], int *while_in_turn, int is_game_being_loaded, int prev_pl1 [11], int prev_pgr1[11], int prev_pl2[11], int prev_pgr2 [11])
{
	int j, k, l;
	int progress_used_chips = 0;
	char decision;
	char save_or_not;


	gotoxy(112,37);
	printf("Do you wish to: Continue   (Any Key)");
	gotoxy(128,38);
	printf("Stop\t   (S)");

			for (j=0; j<11; j++)
			{
				if (pl1_shift == 1)
				{
					if (progresso[j] != jogado1[j])
					{
						progress_used_chips++;
					}
				}
				if (pl2_shift == 1)
				{
					if (progresso[j] != jogado2[j])
					{
						progress_used_chips++;
					}
				}
			}
			free_chips_left = (3-progress_used_chips);

	setColor(0,0);
	showRectAt(161, 41, 36, 0);
	resetColor();
	gotoxy(160,41);
	printf("You have   free chip(s) left to play!", free_chips_left);
	setColor(8,0);
	gotoxy(169,41);
	printf("%i", free_chips_left);
	resetColor();

	if (((type_of_match == 2) && (pl1_shift != 0)) || (type_of_match == 1))
	{
		gotoxy(140,39);
		scanf("%c", &decision);
		decision = tolower(decision);
		fflush(stdin);
		gotoxy(140,39);
		printf("%c", decision);
	}
	if ((type_of_match == 2) && (pl2_shift != 0))
	{
		bot_decision(free_chips_left, &decision);
		gotoxy(140,39);
		printf("%c", decision);
		setColor(0,0);
		gotoxy(85,56);
		sleep(3);
		resetColor();
	}

	switch(decision)
	{
		case ('c'):
			free_chips_left = (3-progress_used_chips);
			playboard_cover();
			game_area(progresso, free_chips_left, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, while_in_turn, dados, is_game_being_loaded, prev_pl1, prev_pgr1, prev_pl2, prev_pgr2);
			break;

		case ('s'):
			apagar_jog1_1_1(jogado1, jogado2, pl1_shift, pl2_shift);

			if (pl1_shift == 1)
			{
				for (k=0; k<11; k++)
				{
					prev_pl1[k] = jogado1[k];
					prev_pgr1[k] = progresso[k];
					jogado1[k] += (progresso[k]-jogado1[k]);

				}
			}
			if (pl2_shift == 1)
			{
				for (k=0; k<11; k++)
				{
					prev_pl2[k] = jogado2[k];
					prev_pgr2[k] = progresso[k];
					jogado2[k] += (progresso[k]-jogado2[k]);
				}
			}
			column_checker(jogado1, jogado2, topo, pl1_shift, pl2_shift, p1, p2);
			setColor(0,0);
			showRectAt(160, 41, 37, 0);
			resetColor();
			apagar_progresso(progresso);
			desenhar_jog1_1_1(jogado1, jogado2, pl1_shift, pl2_shift);
			free_chips_left = 3;
			playboard_cover();

			switch(active_player)
			{
				case (1):
					pl1_shift--;
					pl2_shift++;
					active_player++;
						for (l=0; l<11; l++)
						{
							progresso[l]=jogado2[l];
						}
					break;
				case (2):
					pl2_shift--;
					pl1_shift++;
					active_player--;
						for (l=0; l<11; l++)
						{
							progresso[l]=jogado1[l];
						}
					break;
			}
			*while_in_turn = 0;
			Save_Game_Status(p1, p2, jogado1, jogado2, pl1_shift, pl2_shift, active_player, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, dados, progresso, while_in_turn, free_chips_left);
			setColor(0,0);
			showRectAt(111,37,48,1);
			resetColor();
			game_area(progresso, free_chips_left, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, while_in_turn, dados, is_game_being_loaded, prev_pl1, prev_pgr1, prev_pl2, prev_pgr2);

		default:
						free_chips_left = (3-progress_used_chips);
			playboard_cover();
			game_area(progresso, free_chips_left, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, while_in_turn, dados, is_game_being_loaded, prev_pl1, prev_pgr1, prev_pl2, prev_pgr2);
			break;
	}



}

void playboard_cover()/////////////////////////////////////////////////////////////////////////////////////////////////////	PARA TAPAR A ZONA DE JOGO/INSTRUÇÕES
{
	int k;
	setColor(0,0);
	for (k=0; k<15;k++)
	{
		showDoubleRectAt(109+k, 11+k, 86-(2*k), 28-(2*k));
	}
	resetColor();
}

void imprime_tabuleiro()///////////////////////////////////////////////////////////////////////////////////////////////////	PARA DESENHAR O TABULEIRO
{


/////////////SCREEN STRUCTURE///////////////////////////////////////////////////////////////////////////////////////////////

	setColor(15,0);
	gotoxy(41,1);												//Linha Superior do STOP
	printf(" *  C  *  A  *  N' *  T  *");
	gotoxy(41,56);												//Linha Inferior do STOP
	printf("  *  S  *  T  *  O  *  P  *");

	print_stop_sign1(40, 2);						////////////////////DIAGONAL SUPERIOR ESQUERDA//////////////////////////
	print_stop_sign2(68, 2);						////////////////////DIAGONAL SUPERIOR DIREITA///////////////////////////
	print_stop_sign3(2, 21);						////////////////////RETA LATERAL ESQUERDA///////////////////////////////
	print_stop_sign3(106, 21);						////////////////////RETA LATERAL DIREITA////////////////////////////////
	print_stop_sign2(4, 37);						////////////////////DIAGONAL INFERIOR ESQUERDA//////////////////////////
	print_stop_sign1(106, 37);						////////////////////DIAGONAL INFERIOR DIREITA///////////////////////////
}

void column_checker(int jogado1[11], int jogado2[11], int topo [11], int pl1_shift, int pl2_shift, char p1[59], char p2[59])
{
	int k,l,p, q;
	int vetor[11];
	int closed_column_pl1=0;
	int closed_column_pl2=0;
	int which_column = 0;

	if (pl1_shift == 1)
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
						jogado2[k] = 0;
						if (closed_column_pl1 != 0)
						{

							column_filler(which_column, vetor, p, q);
						}
					}
				}
		if (closed_column_pl1 == 1)
		{
			setColor(2,0);
			gotoxy(2,1);
			printf("%i Blocked Column ", closed_column_pl1);
			resetColor();
		}
		else
		{
			setColor(2,0);
			gotoxy(2,1);
			printf("%i Blocked Columns", closed_column_pl1);
			resetColor();
		}
	}

	if (pl2_shift == 1)
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
						jogado1[k] = 0;
						if (closed_column_pl2 != 0)
						{

							column_filler(which_column, vetor, p, q);
						}
					}
				}
		if (closed_column_pl2 == 1)
		{
			setColor(5,0);
			gotoxy(2,2);
			printf("%i Blocked Column ", closed_column_pl2);
			resetColor();
		}

		else
		{
			setColor(5,0);
			gotoxy(2,2);
			printf("%i Blocked Columns", closed_column_pl2);
			resetColor();
		}
	}

	if (pl1_shift == 1)
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

	if (pl2_shift == 1)
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

void column_filler(int which_column, int vetor[11], int p, int q)
{
	int k=0;
	int j=0;
	switch (which_column)
	{
		case (0):
			for (k=0; k<3; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+12,32-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+12,32-(4*k),1,0);
					resetColor();
			}
			break;
		case (1):
			for (k=0; k<5; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+20,36-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+20,36-(4*k),1,0);
					resetColor();
			}
			break;
		case (2):
			for (k=0; k<7; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+28,40-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+28,40-(4*k),1,0);
					resetColor();
			}
			break;
		case (3):
			for (k=0; k<9; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+36,44-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+36,44-(4*k),1,0);
					resetColor();
			}
			break;
		case (4):
			for (k=0; k<11; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+44,48-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+44,48-(4*k),1,0);
					resetColor();
			}
			break;
		case (5):
			for (k=0; k<13; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+52,52-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+52,52-(4*k),1,0);
					resetColor();
			}
			break;
		case (6):
			for (k=0; k<11; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+60,48-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+60,48-(4*k),1,0);
					resetColor();
			}
			break;
		case (7):
			for (k=0; k<9; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+68,44-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+68,44-(4*k),1,0);
					resetColor();
			}
			break;
		case (8):
			for (k=0; k<7; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+76,40-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+76,40-(4*k),1,0);
					resetColor();
			}
			break;
		case (9):
			for (k=0; k<5; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+84,36-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+84,36-(4*k),1,0);
					resetColor();
			}
			break;
		case (10):
			for (k=0; k<3; k++)
			{
					setColor((2+p),(2+p));
					showRectAt(p+92,32-(4*k),1,0);
							setColor(0,0);
							showRectAt(q+92,32-(4*k),1,0);
					resetColor();
			}
			break;
	}
}

int bad_luck (int progresso[11], int fichas_livres, int percurso[11], char p1[59], char p2[59], int pl1_shift, int pl2_shift, int topo[11], int jogado1[11], int jogado2[11], int active_player, int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int type_of_match, int *while_in_turn, int dados[4], int is_game_being_loaded, int prev_pl1 [11], int prev_pgr1[11], int prev_pl2[11], int prev_pgr2 [11])
{
	int k;
			gotoxy(147,25);
			printf("NOT POSSIBLE!");
			apagar_progresso(progresso);
			switch(active_player)
			{
				case (1):
					pl1_shift--;
					pl2_shift++;
					active_player++;
						for (k=0; k<11; k++)
						{
							progresso[k]=jogado2[k];
						}
					break;
				case (2):
					pl2_shift--;
					pl1_shift++;
					active_player--;
						for (k=0; k<11; k++)
						{
							progresso[k]=jogado1[k];
						}
					break;
			}
			fichas_livres = 3;
			gotoxy(83,57);
			setColor(0,0);
			sleep(5);
			playboard_cover();
			game_area(progresso, fichas_livres, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, type_of_match, while_in_turn, dados, is_game_being_loaded, prev_pl1, prev_pgr1, prev_pl2, prev_pgr2);
}
#endif
