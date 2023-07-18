#ifndef _AGRUPAMENTO_DADOS_	
#define _AGRUPAMENTO_DADOS_
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include "main_game_screen.h"
#include "lab.h"
						

int tres_fichas_livres (int jogado1[11], int jogado2[11], int topo [11], int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int comb_dados[3][2], int fichas_livres, int progresso[11], int percurso [11], char p1[59], char p2[59], int pl1_shift, int pl2_shift, int active_player, char down_arrow, int *denier1, int *denier2, int *denier3, int *denier4, int *denier5, int *denier6, int *denier7, int *denier8, int *denier9)
{			
	_bloqueia (jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, denier1, denier2, denier3);

	int muda_linha3=0;
	int controller_1=0;
	int controller_2=0;
	int controller_3=0;	
	int can_do = 0;
	int compare_a=0;
	int compare_b=0;
	int compare_c=0;
	int compare_d=0;
	int compare_e=0;
	int compare_f=0;
	int compare_a_a=0;
	int compare_b_b=0;
	int compare_c_c=0;
	int compare_d_d=0;
	int compare_e_e=0;		
	
			if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{
				if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
				{	
						gotoxy(112,20);
						printf("Climb on  %d\t  ", comb_dados[0][0]);	
						gotoxy(125,20);
						printf("and  %d\t  ", comb_dados[0][1]);
							setColor(8,0);
							gotoxy(133,20);
							printf("Press (Q)");
							resetColor();
							can_do++;
							muda_linha3++;
							compare_a = comb_dados[0][0];
							compare_b = comb_dados[0][1];
							*denier1 = 1;
				}
			}

			
			if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))		
			{
				if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
				{	
					if ((compare_a != comb_dados[1][0] || compare_b != comb_dados[1][1]) && (compare_b != comb_dados[1][0] || compare_a != comb_dados[1][1]))
					{				
						gotoxy(112,22);
						printf("Climb on  %d\t  ", comb_dados[1][0]);	
						gotoxy(125,22);
						printf("and  %d\t  ", comb_dados[1][1]);
							setColor(8,0);
							gotoxy(133,22);
							printf("Press (W)");
							resetColor();
							can_do++;
							muda_linha3++;
							compare_c = comb_dados[1][0];
							compare_d = comb_dados[1][1];
							*denier2 = 1;							
					}
				}
			}
			
			if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{
				if((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
				{
					if ((compare_a != comb_dados[2][0] || compare_b != comb_dados[2][1]) && (compare_b != comb_dados[2][0] || compare_a != comb_dados[2][1]))
					{
						if ((compare_c != comb_dados[2][0] || compare_d != comb_dados[2][1]) && (compare_d != comb_dados[2][0] || compare_c != comb_dados[2][1]))
						{
							gotoxy(112,24);
							printf("Climb on  %d\t  ", comb_dados[2][0]);
							gotoxy(125,24);
							printf("and  %d\t  ", comb_dados[2][1]);
								setColor(8,0);
								gotoxy(133,24);
								printf("Press (E)");
								resetColor();
								can_do++;
								muda_linha3++;
								compare_e = comb_dados[2][0];
								compare_f = comb_dados[2][1];								
								*denier3 = 1;
						}
					}
				}
			}
			
			
			if (muda_linha3 < 3)
			{						
				if (controller_1 == 0)
				{
					if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
					{			
						if ((comb_dados[0][0] != compare_a) && (comb_dados[0][0] != compare_b) && (comb_dados[0][0] != compare_c) && (comb_dados[0][0] != compare_d) && (comb_dados[0][0] != compare_e) && (comb_dados[0][0] != compare_f)) 
						{
							gotoxy(163,20);
							printf("Climb on %d", comb_dados[0][0]);
							setColor(8,0);
							gotoxy(181,20);
							printf("Press (A)");
							resetColor();
							can_do++;
							muda_linha3++;
							compare_a_a = comb_dados[0][0];
							*denier4 = 1;
						}
					}
					if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
					{				
						if ((comb_dados[0][1] != compare_a) && (comb_dados[0][1] != compare_b) && (comb_dados[0][1] != compare_c) && (comb_dados[0][1] != compare_d) && (comb_dados[0][1] != compare_e) && (comb_dados[0][1] != compare_f))
						{
							if (comb_dados[0][1] != compare_a_a)
							{
								gotoxy(163,21);
								printf("Climb on %d", comb_dados[0][1]);
								setColor(8,0);
								gotoxy(181,21);
								printf("Press (S)");
								resetColor();
								can_do++;
								muda_linha3++;
								compare_b_b = comb_dados[0][1];
								*denier5 = 1;
							}
						}
					}	
				}
				
				if (controller_2 == 0)
				{
					if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
					{			
						if ((comb_dados[1][0] != compare_a) && (comb_dados[1][0] != compare_b) && (comb_dados[1][0] != compare_c) && (comb_dados[1][0] != compare_d) && (comb_dados[1][0] != compare_e) && (comb_dados[1][0] != compare_f))  
						{
							if (comb_dados[1][0] != compare_a_a && comb_dados[1][0] != compare_b_b)
							{										
								gotoxy(163,22);
								printf("Climb on %d", comb_dados[1][0]);
								setColor(8,0);
								gotoxy(181,22);
								printf("Press (D)");
								resetColor();
								can_do++;					
								muda_linha3++;
								compare_c_c = comb_dados[1][0];
								*denier6 = 1;
							}
						}
					}
					if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
					{			
						if ((comb_dados[1][1] != compare_a) && (comb_dados[1][1] != compare_b) && (comb_dados[1][1] != compare_c) && (comb_dados[1][1] != compare_d) && (comb_dados[1][1] != compare_e) && (comb_dados[1][1] != compare_f))  
						{
							if (comb_dados[1][1] != compare_a_a && comb_dados[1][1] != compare_b_b && comb_dados[1][1] != compare_c_c)
							{										
								gotoxy(163,23);
								printf("Climb on %d", comb_dados[1][1]);
								setColor(8,0);
								gotoxy(181,23);
								printf("Press (Z)");
								resetColor();
								can_do++;
								muda_linha3++;
								compare_d_d = comb_dados[1][1];
								*denier7 = 1;
							}
						}
					}
				}
				if (controller_3 == 0)
				{
					if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
					{			
						if ((comb_dados[2][0] != compare_a) && (comb_dados[2][0] != compare_b) && (comb_dados[2][0] != compare_c) && (comb_dados[2][0] != compare_d) && (comb_dados[2][0] != compare_e) && (comb_dados[2][0] != compare_f))  
						{
							if (comb_dados[2][0] != compare_a_a && comb_dados[2][0] != compare_b_b && comb_dados[2][0] != compare_c_c && comb_dados[2][0] != compare_d_d)
							{														
								gotoxy(163,24);
								printf("Climb on %d", comb_dados[2][0]);
								setColor(8,0);
								gotoxy(181,24);
								printf("Press (X)");
								resetColor();
								can_do++;
								muda_linha3++;
								compare_e_e = comb_dados[2][0];
								*denier8 = 1;
							}
						}
					}
					if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
					{			
						if ((comb_dados[2][1] != compare_a) && (comb_dados[2][1] != compare_b) && (comb_dados[2][1] != compare_c) && (comb_dados[2][1] != compare_d) && (comb_dados[2][1] != compare_e) && (comb_dados[2][1] != compare_f))  
						{
							if (comb_dados[2][1] != compare_a_a && comb_dados[2][1] != compare_b_b && comb_dados[2][1] != compare_c_c && comb_dados[2][1] != compare_d_d && comb_dados[2][1] != compare_e_e)
							{														
								gotoxy(163,25);
								printf("Climb on %d", comb_dados[2][1]);
								setColor(8,0);
								gotoxy(181,25);
								printf("Press (C)");
								resetColor();
								can_do++;
								muda_linha3++;
								*denier9 = 1;
							}
						}
					}
				}
			}		
	if (can_do == 0)
	{
		bad_luck (progresso, fichas_livres, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, &ab, &bb, &cb, &db, &eb, &fb, &gb, &hb, &ib, &jb, &kb);
	}	
}

int duas_fichas_livres (int jogado1[11], int jogado2[11], int topo [11], int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int comb_dados[3][2], int fichas_livres, int progresso[11], int percurso [11], char p1[59], char p2[59], int pl1_shift, int pl2_shift, int active_player, char down_arrow, int *denier1, int *denier2, int *denier3, int *denier4, int *denier5, int *denier6, int *denier7, int *denier8, int *denier9, int value_a)
{			
	_bloqueia (jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, denier1, denier2, denier3);

	int muda_linha3=0;
	int controller_1=0;
	int controller_2=0;
	int controller_3=0;	
	int can_do = 0;
	int compare_a=0;
	int compare_b=0;
	int compare_c=0;
	int compare_d=0;
	int compare_e=0;
	int compare_f=0;
	int compare_a_a=0;
	int compare_b_b=0;
	int compare_c_c=0;
	int compare_d_d=0;
	int compare_e_e=0;		
	
			if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{
				if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
				{	
						gotoxy(112,20);
						printf("Climb on  %d\t  ", comb_dados[0][0]);	
						gotoxy(125,20);
						printf("and  %d\t  ", comb_dados[0][1]);
							setColor(8,0);
							gotoxy(133,20);
							printf("Press (Q)");
							resetColor();
							can_do++;
							muda_linha3++;
							compare_a = comb_dados[0][0];
							compare_b = comb_dados[0][1];
							*denier1 = 1;
				}
			}

			
			if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))		
			{
				if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
				{	
					if ((compare_a != comb_dados[1][0] || compare_b != comb_dados[1][1]) && (compare_b != comb_dados[1][0] || compare_a != comb_dados[1][1]))
					{				
						gotoxy(112,22);
						printf("Climb on  %d\t  ", comb_dados[1][0]);	
						gotoxy(125,22);
						printf("and  %d\t  ", comb_dados[1][1]);
							setColor(8,0);
							gotoxy(133,22);
							printf("Press (W)");
							resetColor();
							can_do++;
							muda_linha3++;
							compare_c = comb_dados[1][0];
							compare_d = comb_dados[1][1];
							*denier2 = 1;							
					}
				}
			}
			
			if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{
				if((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
				{
					if ((compare_a != comb_dados[2][0] || compare_b != comb_dados[2][1]) && (compare_b != comb_dados[2][0] || compare_a != comb_dados[2][1]))
					{
						if ((compare_c != comb_dados[2][0] || compare_d != comb_dados[2][1]) && (compare_d != comb_dados[2][0] || compare_c != comb_dados[2][1]))
						{
							gotoxy(112,24);
							printf("Climb on  %d\t  ", comb_dados[2][0]);
							gotoxy(125,24);
							printf("and  %d\t  ", comb_dados[2][1]);
								setColor(8,0);
								gotoxy(133,24);
								printf("Press (E)");
								resetColor();
								can_do++;
								muda_linha3++;
								compare_e = comb_dados[2][0];
								compare_f = comb_dados[2][1];								
								*denier3 = 1;
						}
					}
				}
			}
			
			
			if (muda_linha3 < 3)
			{						
				if (controller_1 == 0)
				{
					if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
					{			
						if ((comb_dados[0][0] != value_a) && (comb_dados[0][0] != compare_a) && (comb_dados[0][0] != compare_b) && (comb_dados[0][0] != compare_c) && (comb_dados[0][0] != compare_d) && (comb_dados[0][0] != compare_e) && (comb_dados[0][0] != compare_f)) 
						{
							gotoxy(163,20);
							printf("Climb on %d", comb_dados[0][0]);
							setColor(8,0);
							gotoxy(181,20);
							printf("Press (A)");
							resetColor();
							can_do++;
							muda_linha3++;
							compare_a_a = comb_dados[0][0];
							*denier4 = 1;
						}
					}
					if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
					{				
						if ((comb_dados[0][0] != value_a) && (comb_dados[0][1] != compare_a) && (comb_dados[0][1] != compare_b) && (comb_dados[0][1] != compare_c) && (comb_dados[0][1] != compare_d) && (comb_dados[0][1] != compare_e) && (comb_dados[0][1] != compare_f))
						{
							if (comb_dados[0][1] != compare_a_a)
							{
								gotoxy(163,21);
								printf("Climb on %d", comb_dados[0][1]);
								setColor(8,0);
								gotoxy(181,21);
								printf("Press (S)");
								resetColor();
								can_do++;
								muda_linha3++;
								compare_b_b = comb_dados[0][1];
								*denier5 = 1;
							}
						}
					}	
				}
				
				if (controller_2 == 0)
				{
					if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
					{			
						if ((comb_dados[0][0] != value_a) && (comb_dados[1][0] != compare_a) && (comb_dados[1][0] != compare_b) && (comb_dados[1][0] != compare_c) && (comb_dados[1][0] != compare_d) && (comb_dados[1][0] != compare_e) && (comb_dados[1][0] != compare_f))  
						{
							if (comb_dados[1][0] != compare_a_a && comb_dados[1][0] != compare_b_b)
							{										
								gotoxy(163,22);
								printf("Climb on %d", comb_dados[1][0]);
								setColor(8,0);
								gotoxy(181,22);
								printf("Press (D)");
								resetColor();
								can_do++;					
								muda_linha3++;
								compare_c_c = comb_dados[1][0];
								*denier6 = 1;
							}
						}
					}
					if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
					{			
						if ((comb_dados[0][0] != value_a) && (comb_dados[1][1] != compare_a) && (comb_dados[1][1] != compare_b) && (comb_dados[1][1] != compare_c) && (comb_dados[1][1] != compare_d) && (comb_dados[1][1] != compare_e) && (comb_dados[1][1] != compare_f))  
						{
							if (comb_dados[1][1] != compare_a_a && comb_dados[1][1] != compare_b_b && comb_dados[1][1] != compare_c_c)
							{										
								gotoxy(163,23);
								printf("Climb on %d", comb_dados[1][1]);
								setColor(8,0);
								gotoxy(181,23);
								printf("Press (Z)");
								resetColor();
								can_do++;
								muda_linha3++;
								compare_d_d = comb_dados[1][1];
								*denier7 = 1;
							}
						}
					}
				}
				if (controller_3 == 0)
				{
					if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
					{			
						if ((comb_dados[0][0] != value_a) && (comb_dados[2][0] != compare_a) && (comb_dados[2][0] != compare_b) && (comb_dados[2][0] != compare_c) && (comb_dados[2][0] != compare_d) && (comb_dados[2][0] != compare_e) && (comb_dados[2][0] != compare_f))  
						{
							if (comb_dados[2][0] != compare_a_a && comb_dados[2][0] != compare_b_b && comb_dados[2][0] != compare_c_c && comb_dados[2][0] != compare_d_d)
							{														
								gotoxy(163,24);
								printf("Climb on %d", comb_dados[2][0]);
								setColor(8,0);
								gotoxy(181,24);
								printf("Press (X)");
								resetColor();
								can_do++;
								muda_linha3++;
								compare_e_e = comb_dados[2][0];
								*denier8 = 1;
							}
						}
					}
					if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
					{			
						if ((comb_dados[0][0] != value_a) && (comb_dados[2][1] != compare_a) && (comb_dados[2][1] != compare_b) && (comb_dados[2][1] != compare_c) && (comb_dados[2][1] != compare_d) && (comb_dados[2][1] != compare_e) && (comb_dados[2][1] != compare_f))  
						{
							if (comb_dados[2][1] != compare_a_a && comb_dados[2][1] != compare_b_b && comb_dados[2][1] != compare_c_c && comb_dados[2][1] != compare_d_d && comb_dados[2][1] != compare_e_e)
							{														
								gotoxy(163,25);
								printf("Climb on %d", comb_dados[2][1]);
								setColor(8,0);
								gotoxy(181,25);
								printf("Press (C)");
								resetColor();
								can_do++;
								muda_linha3++;
								*denier9 = 1;
							}
						}
					}
				}
			}		
	if (can_do == 0)
	{
		bad_luck (progresso, fichas_livres, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, &ab, &bb, &cb, &db, &eb, &fb, &gb, &hb, &ib, &jb, &kb);
	}	
}

int uma_ficha_livre (int jogado1[11], int jogado2[11], int topo [11], int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int comb_dados[3][2], int fichas_livres, int progresso[11], int percurso [11], char p1[59], char p2[59], int pl1_shift, int pl2_shift, int active_player, char down_arrow, int value_a, int value_b, int value_c, int *denier1, int *denier2, int *denier3, int *denier4, int *denier5, int *denier6, int *denier7, int *denier8, int *denier9)
{
	int muda_linha3=0;
	int controller_1=0;
	int controller_2=0;
	int controller_3=0;
	int compare_a=0;
	int compare_b=0;
	int compare_c=0;
	int compare_d=0;
	int compare_a_a=0;
	int compare_b_b=0;
	int compare_c_c=0;
	int compare_d_d=0;
	int compare_e_e=0;
	int can_do = 0;	
	
	_bloqueia (jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, denier1, denier2, denier3);	
	
	
	if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
	{
		if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
		{
			if ((comb_dados[0][0] == value_a || comb_dados[0][0] == value_b || comb_dados[0][0] == value_c) || (comb_dados[0][1] == value_a || comb_dados[0][1] == value_b || comb_dados[0][1] == value_c)) 
			{
				compare_a = comb_dados[0][0];
				compare_b = comb_dados[0][1];
				
				gotoxy(112,20);
				printf("Climb on %d and %d", comb_dados[0][0], comb_dados[0][1]);
				setColor(8,0);
				gotoxy(133,20);
				printf("Press (Q)");
				resetColor();
				can_do++;
				muda_linha3++;
				controller_1++;
				*denier1 = 1;
			}
		}
	}
	
	if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
	{
		if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
		{
			if ((comb_dados[1][0] == value_a || comb_dados[1][0] == value_b || comb_dados[1][0] == value_c) || (comb_dados[1][1] == value_a || comb_dados[1][1] == value_b || comb_dados[1][1] == value_c))
			{
				controller_2++;
				if ((compare_a != comb_dados[1][0] && compare_b != comb_dados[1][1]) && (compare_b != comb_dados[1][0] && compare_a != comb_dados[1][1]))
				{
					gotoxy(112,22);
					printf("Climb on %d and %d", comb_dados[1][0], comb_dados[1][1]);
					setColor(8,0);
					gotoxy(133,22);
					printf("Press (W)");
					resetColor();
					can_do++;
					muda_linha3++;
					compare_c = comb_dados[1][0];
					compare_d = comb_dados[1][1];
					*denier2 = 1;					
				}
			}
		}
	}
	
	if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
	{	
		if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
		{	
			if ((comb_dados[2][0] == value_a || comb_dados[2][0] == value_b || comb_dados[2][0] == value_c) || (comb_dados[2][1] == value_a || comb_dados[2][1] == value_b || comb_dados[2][1] == value_c))
			{
				controller_3++;
				if ((compare_a != comb_dados[2][0] && compare_b != comb_dados[2][1]) && (compare_b != comb_dados[2][0] && compare_a != comb_dados[2][1]))
				{
					if ((compare_c != comb_dados[2][0] && compare_d != comb_dados[2][1]) && (compare_d != comb_dados[2][0] && compare_c != comb_dados[2][1]))
					{												
						gotoxy(112,24);
						printf("Climb on %d and %d", comb_dados[2][0], comb_dados[2][1]);
						setColor(8,0);
						gotoxy(133,24);
						printf("Press (E)");
						resetColor();
						can_do++;
						muda_linha3++;
						*denier3 = 1;							
					}
				}
			}									
		}
	}							
	if (muda_linha3 < 3)
	{						
		if (controller_1 == 0)
		{
			if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{			
				if (comb_dados[0][0] != value_a && comb_dados[0][0] != value_b) 
				{
					gotoxy(163,20);
					printf("Climb on %d", comb_dados[0][0]);
					setColor(8,0);
					gotoxy(181,20);
					printf("Press (A)");
					resetColor();
					can_do++;
					muda_linha3++;
					compare_a_a = comb_dados[0][0];
					*denier4 = 1;
				}
			}
			if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
			{				
				if (comb_dados[0][1] != value_a && comb_dados[0][1] != value_b)  
				{
					if (comb_dados[0][1] != compare_a_a)
					{
						gotoxy(163,21);
						printf("Climb on %d", comb_dados[0][1]);
						setColor(8,0);
						gotoxy(181,21);
						printf("Press (S)");
						resetColor();
						can_do++;
						muda_linha3++;
						compare_b_b = comb_dados[0][1];
						*denier5 = 1;
					}
				}
			}	
		}
		
		if (controller_2 == 0)
		{
			if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{			
				if (comb_dados[1][0] != value_a && comb_dados[1][0] != value_b)  
				{
					if (comb_dados[1][0] != compare_a_a && comb_dados[1][0] != compare_b_b)
					{										
						gotoxy(163,22);
						printf("Climb on %d", comb_dados[1][0]);
						setColor(8,0);
						gotoxy(181,22);
						printf("Press (D)");
						resetColor();
						can_do++;					
						muda_linha3++;
						compare_c_c = comb_dados[1][0];
						*denier6 = 1;
					}
				}
			}
			if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
			{			
				if (comb_dados[1][1] != value_a && comb_dados[1][1] != value_b)  
				{
					if (comb_dados[1][1] != compare_a_a && comb_dados[1][1] != compare_b_b && comb_dados[1][1] != compare_c_c)
					{										
						gotoxy(163,23);
						printf("Climb on %d", comb_dados[1][1]);
						setColor(8,0);
						gotoxy(181,23);
						printf("Press (Z)");
						resetColor();
						can_do++;
						muda_linha3++;
						compare_d_d = comb_dados[1][1];
						*denier7 = 1;
					}
				}
			}
		}
		if (controller_3 == 0)
		{
			if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{			
				if (comb_dados[2][0] != value_a && comb_dados[2][0] != value_b)  
				{
					if (comb_dados[2][0] != compare_a_a && comb_dados[2][0] != compare_b_b && comb_dados[2][0] != compare_c_c && comb_dados[2][0] != compare_d_d)
					{														
						gotoxy(163,24);
						printf("Climb on %d", comb_dados[2][0]);
						setColor(8,0);
						gotoxy(181,24);
						printf("Press (X)");
						resetColor();
						can_do++;
						muda_linha3++;
						compare_e_e = comb_dados[2][0];
						*denier8 = 1;
					}
				}
			}
			if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
			{			
				if (comb_dados[2][1] != value_a && comb_dados[2][1] != value_b)  
				{
					if (comb_dados[2][1] != compare_a_a && comb_dados[2][1] != compare_b_b && comb_dados[2][1] != compare_c_c && comb_dados[2][1] != compare_d_d && comb_dados[2][1] != compare_e_e)
					{														
						gotoxy(163,25);
						printf("Climb on %d", comb_dados[2][1]);
						setColor(8,0);
						gotoxy(181,25);
						printf("Press (C)");
						resetColor();
						can_do++;
						muda_linha3++;
						*denier9 = 1;
					}
				}
			}
		}
	}
	if (can_do == 0)
	{
		bad_luck (progresso, fichas_livres, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, &ab, &bb, &cb, &db, &eb, &fb, &gb, &hb, &ib, &jb, &kb);
	}	
}

int zero_fichas_livres (int jogado1[11], int jogado2[11], int topo [11], int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int comb_dados[3][2], int fichas_livres, int progresso[11], int percurso [11], char p1[59], char p2[59], int pl1_shift, int pl2_shift, int active_player, char down_arrow, int value_a, int value_b, int value_c, int *denier1, int *denier2, int *denier3, int *denier4, int *denier5, int *denier6, int *denier7, int *denier8, int *denier9)
{
	int muda_linha3=0;	
	int controller_1=0;
	int controller_2=0;
	int controller_3=0;
	int compare_a=0;
	int compare_b=0;
	int compare_c=0;
	int compare_d=0;
	int compare_a_a=0;
	int compare_b_b=0;
	int compare_c_c=0;
	int compare_d_d=0;
	int compare_e_e=0;
	int can_do = 0;		
		
	_bloqueia (jogado1, jogado2, topo, blocked_columns, ab, bb, cb, db, eb, fb, gb, hb, ib, jb, kb, comb_dados, fichas_livres, progresso, percurso, p1, p2, pl1_shift, pl2_shift, active_player, denier1, denier2, denier3);	
	
	
	if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
	{
		if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
		{		
			if ((comb_dados[0][0] == value_a || comb_dados[0][0] == value_b || comb_dados[0][0] == value_c) && (comb_dados[0][1] == value_a || comb_dados[0][1] == value_b || comb_dados[0][1] == value_c)) 
			{
			compare_a = comb_dados[0][0];
			compare_b = comb_dados[0][1];
			
			gotoxy(112,20);
			printf("Climb on %d and %d", comb_dados[0][0], comb_dados[0][1]);
			setColor(8,0);
			gotoxy(133,20);
			printf("Press (Q)");
			resetColor();
			can_do++;
			muda_linha3++;
			controller_1++;
			*denier1 = 1;
			}
		}
	}
	
	if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
	{
		if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
		{	
			if ((comb_dados[1][0] == value_a || comb_dados[1][0] == value_b || comb_dados[1][0] == value_c) && (comb_dados[1][1] == value_a || comb_dados[1][1] == value_b || comb_dados[1][1] == value_c))
			{
				controller_2++;
				if ((compare_a != comb_dados[1][0] && compare_b != comb_dados[1][1]) && (compare_b != comb_dados[1][0] && compare_a != comb_dados[1][1]))
				{
					gotoxy(112,22);
					printf("Climb on %d and %d", comb_dados[1][0], comb_dados[1][1]);
					setColor(8,0);
					gotoxy(133,22);
					printf("Press (W)");
					resetColor();
					can_do++;
					muda_linha3++;
					compare_c = comb_dados[1][0];
					compare_d = comb_dados[1][1];
					*denier2 = 1;					
				}
			}
		}
	}

	if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
	{	
		if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
		{	
			if ((comb_dados[2][0] == value_a || comb_dados[2][0] == value_b || comb_dados[2][0] == value_c) && (comb_dados[2][1] == value_a || comb_dados[2][1] == value_b || comb_dados[2][1] == value_c))
			{
				controller_3++;
				if ((compare_a != comb_dados[2][0] && compare_b != comb_dados[2][1]) && (compare_b != comb_dados[2][0] && compare_a != comb_dados[2][1]))
				{
					if ((compare_c != comb_dados[2][0] && compare_d != comb_dados[2][1]) && (compare_d != comb_dados[2][0] && compare_c != comb_dados[2][1]))
					{												
						gotoxy(112,24);
						printf("Climb on %d and %d", comb_dados[2][0], comb_dados[2][1]);
						setColor(8,0);
						gotoxy(133,24);
						printf("Press (E)");
						resetColor();
						can_do++;
						muda_linha3++;
						*denier3 = 1;								
					}
				}
			}
		}
	}			
								
	if (muda_linha3 < 3)
	{					
		if (controller_1 == 0)
		{
			if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{			
				if (comb_dados[0][0] == value_a || comb_dados[0][0] == value_b || comb_dados[0][0] == value_c) 
				{
					gotoxy(163,20);
					printf("Climb on %d", comb_dados[0][0]);
					setColor(8,0);
					gotoxy(181,20);
					printf("Press (A)");
					resetColor();
					can_do++;
					muda_linha3++;
					compare_a_a = comb_dados[0][0];
					*denier4 = 1;
				}
			}
		
			if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
			{		
				if (comb_dados[0][1] == value_a || comb_dados[0][1] == value_b || comb_dados[0][1] == value_c)  
				{
					if (comb_dados[0][1] != compare_a_a)
					{
						gotoxy(163,21);
						printf("Climb on %d", comb_dados[0][1]);
						setColor(8,0);
						gotoxy(181,21);
						printf("Press (S)");
						resetColor();
						can_do++;
						muda_linha3++;
						compare_b_b = comb_dados[0][1];
						*denier5 = 1;
					}
				}
			}
		}
		
		
		if (controller_2 == 0)
		{
			if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{			
				if (comb_dados[1][0] == value_a || comb_dados[1][0] == value_b || comb_dados[1][0] == value_c)  
				{
					if (comb_dados[1][0] != compare_a_a && comb_dados[1][0] != compare_b_b)
					{										
						gotoxy(163,22);
						printf("Climb on %d", comb_dados[1][0]);
						setColor(8,0);
						gotoxy(181,22);
						printf("Press (D)");
						resetColor();
						can_do++;				
						muda_linha3++;
						compare_c_c = comb_dados[1][0];
						*denier6 = 1;
					}
						
				}
			}
			if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
			{			
				if (comb_dados[1][1] == value_a || comb_dados[1][1] == value_b || comb_dados[1][1] == value_c)  
				{
					if (comb_dados[1][1] != compare_a_a && comb_dados[1][1] != compare_b_b && comb_dados[1][1] != compare_c_c)
					{										
						gotoxy(163,23);
						printf("Climb on %d", comb_dados[1][1]);
						setColor(8,0);
						gotoxy(181,23);
						printf("Press (Z)");
						resetColor();
						can_do++;
						muda_linha3++;
						compare_d_d = comb_dados[1][1];
						*denier7 = 1;
					}
				}
			}
		}
		if (controller_3 == 0)
		{
			if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{			
				if (comb_dados[2][0] == value_a || comb_dados[2][0] == value_b || comb_dados[2][0] == value_c)  
				{
					if (comb_dados[2][0] != compare_a_a && comb_dados[2][0] != compare_b_b && comb_dados[2][0] != compare_c_c && comb_dados[2][0] != compare_d_d)
					{														
						gotoxy(163,24);
						printf("Climb on %d", comb_dados[2][0]);
						setColor(8,0);
						gotoxy(181,24);
						printf("Press (X)");
						resetColor();
						can_do++;
						muda_linha3++;
						compare_e_e = comb_dados[2][0];
						*denier8 = 1;
					}
				}
			}
			if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
			{			
				if (comb_dados[2][1] == value_a || comb_dados[2][1] == value_b || comb_dados[2][1] == value_c)  
				{
					if (comb_dados[2][1] != compare_a_a && comb_dados[2][1] != compare_b_b && comb_dados[2][1] != compare_c_c && comb_dados[2][1] != compare_d_d && comb_dados[2][1] != compare_e_e)
					{														
						gotoxy(163,25);
						printf("Climb on %d", comb_dados[2][1]);
						setColor(8,0);
						gotoxy(181,25);
						printf("Press (C)");
						resetColor();
						can_do++;
						muda_linha3++;
						*denier9 = 1;
					}
				}
			}
		}
	}
	if (can_do == 0)
	{
		bad_luck (progresso, fichas_livres, percurso, p1, p2, pl1_shift, pl2_shift, topo, jogado1, jogado2, active_player, blocked_columns, &ab, &bb, &cb, &db, &eb, &fb, &gb, &hb, &ib, &jb, &kb);
	}	
}



#endif
