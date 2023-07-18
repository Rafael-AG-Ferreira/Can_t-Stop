#ifndef _CONDICOES_TURNOS_	
#define _CONDICOES_TURNOS_

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
						#include "main_game_screen.h"

int _3_fichas (int jogado1[11], int jogado2[11], int topo [11], int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int comb_dados[3][2], int fichas_livres, int progresso[11], int percurso [11], char p1[59], char p2[59], int pl1_shift, int pl2_shift, int active_player, int *denier1, int *denier2, int *denier3)
{
//////////	int can_do = 0;
//////////	int compare_a=0;
//////////	int compare_b=0;
//////////	int compare_c=0;
//////////	int compare_d=0;	
//////////	
//////////			if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
//////////			{
//////////				if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
//////////				{	
//////////						gotoxy(112,20);
//////////						printf("Climb on  %d\t  ", comb_dados[0][0]);	
//////////						gotoxy(125,20);
//////////						printf("and  %d\t  ", comb_dados[0][1]);
//////////							setColor(8,0);
//////////							gotoxy(133,20);
//////////							printf("Press (Q)");
//////////							resetColor();
//////////							can_do++;
//////////							compare_a = comb_dados[0][0];
//////////							compare_b = comb_dados[0][1];
//////////							*denier1 = 1;
//////////				}
//////////			}
//////////
//////////			
//////////			if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))		
//////////			{
//////////				if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
//////////				{	
//////////					if ((compare_a != comb_dados[1][0] || compare_b != comb_dados[1][1]) && (compare_b != comb_dados[1][0] || compare_a != comb_dados[1][1]))
//////////					{				
//////////						gotoxy(112,22);
//////////						printf("Climb on  %d\t  ", comb_dados[1][0]);	
//////////						gotoxy(125,22);
//////////						printf("and  %d\t  ", comb_dados[1][1]);
//////////							setColor(8,0);
//////////							gotoxy(133,22);
//////////							printf("Press (W)");
//////////							resetColor();
//////////							can_do++;
//////////							compare_c = comb_dados[1][0];
//////////							compare_d = comb_dados[1][1];
//////////							*denier2 = 1;							
//////////					}
//////////				}
//////////			}
//////////			
//////////			if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
//////////			{
//////////				if((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
//////////				{
//////////					if ((compare_a != comb_dados[2][0] || compare_b != comb_dados[2][1]) && (compare_b != comb_dados[2][0] || compare_a != comb_dados[2][1]))
//////////					{
//////////						if ((compare_c != comb_dados[2][0] || compare_d != comb_dados[2][1]) && (compare_d != comb_dados[2][0] || compare_c != comb_dados[2][1]))
//////////						{
//////////							gotoxy(112,24);
//////////							printf("Climb on  %d\t  ", comb_dados[2][0]);
//////////							gotoxy(125,24);
//////////							printf("and  %d\t  ", comb_dados[2][1]);
//////////								setColor(8,0);
//////////								gotoxy(133,24);
//////////								printf("Press (E)");
//////////								resetColor();
//////////								can_do++;
//////////								*denier3 = 1;
//////////						}
//////////					}
//////////				}
//////////			}
//////////	if (can_do == 0)
//////////	{
//////////		bad_luck (progresso, fichas_livres, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, &ab, &bb, &cb, &db, &eb, &fb, &gb, &hb, &ib, &jb, &kb);
//////////	}
}

#endif
