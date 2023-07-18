#ifndef _BOT_FILE_
#define _BOT_FILE_
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
#include "soma_ao_vetor_bot.h"

//PARA TRES FICHAS LIVRES --------------------- DEIXAR O MÁXIMO POSSÍVEL DE ALPINISTAS LIVRES (1)
void bot_tres_fichas (int progresso[11], int fichas_livres, int comb_dados[3][2], int *denier1, int *denier2, int *denier3, int *denier4, int *denier5, int *denier6, int *denier7, int *denier8, int *denier9, int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int type_of_match)
{
	int passed = 0;
	int passed2 = 0;
	int passed3 = 0;
	int passed4 = 0;
	int passed5 = 0;
	int passed6 = 0;			
	int comparer1 = 0;
	int comparer2 = 0;
	int comparer3 = 0;
	int comparer4 = 0;
	int comparer5 = 0;
	int comparer6 = 0;			
	int to_the_center1 = 0;
	int to_the_center2 = 0;
	int to_the_center3 = 0;
	int to_the_center4 = 0;
	int to_the_center5 = 0;
	int to_the_center6 = 0;
	int combo1_to_the_center = 0;
	int combo2_to_the_center = 0;
	int combo3_to_the_center = 0;
	char escolha;
	int only_once = 0;

			if (fichas_livres == 3)
			{
					if ((only_once == 0) && (comb_dados[0][0]) == (comb_dados[0][1]))
					{
						if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
						{
							if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
							{
								if (*denier1 == 1)
								{		
									escolha = 'q';
									passed++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}
						}
					}
					
					if ((only_once == 0) && (comb_dados[1][0]) == (comb_dados[1][1]))
					{
						if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
						{
							if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
							{
								if (*denier2 == 1)
								{									
									escolha = 'w';
									passed++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;	
								}
							}
						}
					}
					
					if ((only_once == 0) && (comb_dados[2][0]) == (comb_dados[2][1]))
					{
						if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
						{	
							if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
							{
								if (*denier3 == 1)
								{									
									escolha = 'e';
									passed++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}
						}
					}
					//////////////SE NÃO HOUVER UM PAR, ENTÃO ESCOLHE-SE PARA ONDE EXISTEM MENOS POSIÇÕES PARA O TOPO (2)
					if (passed == 0)
					{
						if ((comb_dados[0][0] + comb_dados[0][1]) >= 7)
						{
							comparer1 = ((comb_dados[0][0] + comb_dados[0][1]) - 7);
						}
							if ((comb_dados[0][0] + comb_dados[0][1]) <= 7)
							{
								comparer1 = (7 - (comb_dados[0][0] + comb_dados[0][1]));
							}		
							
						if ((comb_dados[1][0] + comb_dados[1][1]) >= 7)
						{
							comparer2 = ((comb_dados[1][0] + comb_dados[1][1]) - 7);
						}
							if ((comb_dados[1][0] + comb_dados[1][1]) <= 7)
							{
								comparer2 = (7 - (comb_dados[1][0] + comb_dados[1][1]));
							}			
							
						if ((comb_dados[2][0] + comb_dados[2][1]) >= 7)
						{
							comparer3 = ((comb_dados[2][0] + comb_dados[2][1]) - 7);
						}
							if ((comb_dados[2][0] + comb_dados[2][1]) <= 7)
							{
								comparer3 = (7 - (comb_dados[2][0] + comb_dados[2][1]));
							}	
					
						if ((only_once == 0) && (comparer1 >= comparer2) && (comparer1 >= comparer3))
						{
							if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
							{
								if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
								{
									if (*denier1 == 1)
									{										
										escolha = 'q';
										passed2++;
										bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
										only_once++;
									}
								}
							}
						}
										
						if ((only_once == 0) && (comparer2 >= comparer1) && (comparer2 >= comparer3))
						{
							if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
							{
								if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
								{	
									if (*denier2 == 1)
									{													
										escolha = 'w';
										passed2++;
										bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
										only_once++;
									}
								}
							}
						}							
						if ((only_once == 0) && (comparer3 >= comparer1) && (comparer3 >= comparer2))
						{
							if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
							{	
								if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
								{	
									if (*denier3 == 1)
									{								
										escolha = 'e';
										passed2++;
										bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
										only_once++;
									}
								}
							}
						}				
					}

					/////////////SE HOUVER UM EMPATE, ESCOLHEM-SE AS POSIÇÕES MAIS PRÓXIMAS DO CENTRO (2.1)
					if (passed2 == 0)
					{
							if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
							{
								if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
								{		
									if (comb_dados[0][0] >= 7)
									{
										to_the_center1 = (comb_dados[0][0] - 7);
									}
										if (comb_dados[0][0] <= 7)
										{
											to_the_center1 = (7 - comb_dados[0][0]);
										}
								
									if (comb_dados[0][1] >= 7)
									{
										to_the_center2 = (comb_dados[0][0] - 7);
									}
										if (comb_dados[1][0] <= 7)
										{
											to_the_center2 = (7 - comb_dados[0][0]);
										}
									
								combo1_to_the_center = (to_the_center1 + to_the_center2);
								}
							}
							
							if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
							{
								if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
								{		
									if (comb_dados[0][1] >= 7)
									{
										to_the_center3 = (comb_dados[0][1] - 7);
									}
										if (comb_dados[0][1] <= 7)
										{
											to_the_center3 = (7 - comb_dados[0][1]);
										}
								
									if (comb_dados[1][1] >= 7)
									{
										to_the_center4 = (comb_dados[1][1] - 7);
									}
										if (comb_dados[1][1] <= 7)
										{
											to_the_center4 = (7 - comb_dados[1][1]);
										}
									
								combo2_to_the_center = (to_the_center3 + to_the_center4);		
								}
							}
					
							if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
							{	
								if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
								{
									if (comb_dados[2][0] >= 7)
									{
										to_the_center5 = (comb_dados[2][0] - 7);
									}
										if (comb_dados[2][0] <= 7)
										{
											to_the_center5 = (7 - comb_dados[2][0]);
										}
								
									if (comb_dados[2][1] >= 7)
									{
										to_the_center6 = (comb_dados[2][1] - 7);
									}
										if (comb_dados[2][1] <= 7)
										{
											to_the_center6 = (7 - comb_dados[2][1]);
										}
									
								combo3_to_the_center = (to_the_center5 + to_the_center6);
								}
							}
					
							if ((only_once == 0) && (combo1_to_the_center <= combo2_to_the_center) && (combo1_to_the_center <= combo3_to_the_center))
							{
								if (*denier1 == 1)
								{								
									escolha = 'q';
									passed3++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}
					
							if ((only_once == 0) && (combo2_to_the_center <= combo1_to_the_center) && (combo2_to_the_center <= combo3_to_the_center))
							{
								if (*denier2 == 1)
								{								
									escolha = 'w';
									passed3++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}
							
							if ((only_once == 0) && (combo3_to_the_center <= combo1_to_the_center) && (combo3_to_the_center <= combo2_to_the_center))
							{
								if (*denier3 == 1)
								{								
									escolha = 'e';
									passed3++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}		
					}
			
					/////////////SE HOUVER UM EMPATE, ESCOLHEM-SE AS POSIÇÕES NAS PISTAS DE NRº MAIS BAIXO (2.2)
					if (passed3 == 0)
					{
						if ((only_once == 0) && (comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
						{
							if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
							{
								if (((comb_dados[0][0] <= comb_dados[1][0]) || (comb_dados[0][1] <= comb_dados[1][1])) && ((comb_dados[0][0] <= comb_dados[2][0]) || (comb_dados[0][1] <= comb_dados[2][1])) || ((*denier2 == 0) && (*denier3 == 0)))
								{
									if (*denier1 == 1)
									{									
										escolha = 'q';
										passed4++;
										bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
										only_once++;
									}
								}
							}
						}
						if ((only_once == 0) && (comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
						{
							if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
							{	
								if (((comb_dados[1][0] <= comb_dados[0][0]) || (comb_dados[1][1] <= comb_dados[0][1])) && ((comb_dados[1][0] <= comb_dados[2][0]) || (comb_dados[1][1] <= comb_dados[2][1])) || ((*denier1 == 0) && (*denier3 == 0)))
								{
									if (*denier2 == 1)
									{									
										escolha = 'w';
										passed4++;
										bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
										only_once++;
									}
								}
							}
						}
						if ((only_once == 0) && (comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
						{	
							if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
							{	
								if (((comb_dados[2][0] <= comb_dados[0][0]) || (comb_dados[2][1] <= comb_dados[0][1])) && ((comb_dados[2][0] <= comb_dados[1][0]) || (comb_dados[2][1] <= comb_dados[1][1])) || (*denier1 == 0) && (*denier2 == 0))
								{
									if (*denier3 == 1)
									{									
										escolha = 'e';
										passed4++;
										bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
										only_once++;
									}
								}
							}
						}
					}
				
				//////////////////////////SE HOUVEREM COLUNAS BLOQUEADAS E SÓ É POSSÍVEL JOGAR UM NÚMERO ------------------- ESCOLHE-SE AQUELE COM MENOS POSIÇÕES PARA O TOPO (2)
					if (passed4 == 0)
					{
						if (comb_dados[0][0] >= 7)
						{
							comparer1 = (comb_dados[0][0] - 7);
						}
							if ((comb_dados[0][0]) <= 7)
							{
								comparer1 = (7 - comb_dados[0][0]);
							}
						if (comb_dados[0][1] >= 7)
						{
							comparer2 = (comb_dados[0][1] - 7);
						}
							if ((comb_dados[0][1]) <= 7)
							{
								comparer2 = (7 - comb_dados[0][1]);
							}			
						if (comb_dados[1][0] >= 7)
						{
							comparer3 = (comb_dados[1][0] - 7);
						}
							if ((comb_dados[1][0]) <= 7)
							{
								comparer3 = (7 - comb_dados[1][0]);
							}			
						if (comb_dados[1][1] >= 7)
						{
							comparer4 = (comb_dados[1][1] - 7);
						}
							if ((comb_dados[1][1]) <= 7)
							{
								comparer4 = (7 - comb_dados[1][1]);
							}				
						if (comb_dados[2][0] >= 7)
						{
							comparer5 = (comb_dados[2][0] - 7);
						}
							if ((comb_dados[2][0]) <= 7)
							{
								comparer5 = (7 - comb_dados[2][0]);
							}			
						if (comb_dados[2][1] >= 7)
						{
							comparer6 = (comb_dados[2][1] - 7);
						}
							if ((comb_dados[2][1]) <= 7)
							{
								comparer6 = (7 - comb_dados[2][1]);
							}			
						
							
						if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))	
						{
							if ((only_once == 0) && (comparer1 >= comparer2) && (comparer1 >= comparer3) && (comparer1 >= comparer4) && (comparer1 >= comparer5) && (comparer1 >= comparer6))
							{
								if (*denier4 == 1)
								{								
									escolha = 'a';
									passed5++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}
						}
				
						if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
						{
							if ((only_once == 0) && (comparer2 >= comparer1) && (comparer2 >= comparer3) && (comparer2 >= comparer4) && (comparer2 >= comparer5) && (comparer2 >= comparer6))
							{
								if (*denier5 == 1)
								{								
									escolha = 's';
									passed5++;	
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}
						}
				
						if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
						{
							if ((only_once == 0) && (comparer3 >= comparer1) && (comparer3 >= comparer2) && (comparer3 >= comparer4) && (comparer3 >= comparer5) && (comparer3 >= comparer6))
							{
								if (*denier6 == 1)
								{								
									escolha = 'd';
									passed5++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;	
								}
							}
						}
				
						if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
						{
							if ((only_once == 0) && (comparer4 >= comparer1) && (comparer4 >= comparer2) && (comparer4 >= comparer3) && (comparer4 >= comparer5) && (comparer4 >= comparer6))
							{
								if (*denier7 == 1)
								{								
									escolha = 'z';
									passed5++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}
						}
				
						if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
						{
							if ((only_once == 0) && (comparer5 >= comparer1) && (comparer5 >= comparer2) && (comparer5 >= comparer3) && (comparer5 >= comparer4) && (comparer5 >= comparer6))
							{
								if (*denier8 == 1)
								{								
									escolha = 'x';
									passed5++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}
						}
				
						if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
						{
							if ((only_once == 0) && (comparer6 >= comparer1) && (comparer6 >= comparer2) && (comparer6 >= comparer3) && (comparer6 >= comparer4) && (comparer6 >= comparer5))
							{
								if (*denier9 == 1)
								{								
									escolha = 'c';
									passed5++;
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}
						}			
					}
				
				
				
				//////////////////////////SE HOUVEREM COLUNAS BLOQUEADAS E SÓ É POSSÍVEL JOGAR UM NÚMERO ------------------- SE HOUVER UM EMPATE, ESCOLHEM-SE AS POSIÇÕES MAIS PRÓXIMAS DO CENTRO (2.1)
					if (passed5 == 0)
					{
						if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
						{
							if (comb_dados[0][0] >= 7)
							{
								to_the_center1 = (comb_dados[0][0] - 7);
							}
							if (comb_dados[0][0] <= 7)
							{
								to_the_center1 = (7 - comb_dados[0][0]);
							}
						}
						
						
						if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
						{
							if (comb_dados[0][1] >= 7)
							{
								to_the_center2 = (comb_dados[0][1] - 7);
							}
							if (comb_dados[0][1] <= 7)
							{
								to_the_center2 = (7 - comb_dados[0][1]);
							}				
						}
						
						
						if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
						{
							if (comb_dados[1][0] >= 7)
							{
								to_the_center3 = (comb_dados[1][0] - 7);
							}
							if (comb_dados[1][0] <= 7)
							{
								to_the_center3 = (7 - comb_dados[1][0]);
							}			
						}
						
				
						if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
						{
							if (comb_dados[1][1] >= 7)
							{
								to_the_center4 = (comb_dados[1][1] - 7);
							}
							if (comb_dados[1][1] <= 7)
							{
								to_the_center4 = (7 - comb_dados[1][1]);
							}				
						}
						
						
						if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
						{
							if (comb_dados[2][0] >= 7)
							{
								to_the_center5 = (comb_dados[2][0] - 7);
							}
							if (comb_dados[2][0] <= 7)
							{
								to_the_center5 = (7 - comb_dados[2][0]);
							}			
						}
						
						
						if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
						{
							if (comb_dados[2][1] >= 7)
							{
								to_the_center6 = (comb_dados[2][1] - 7);
							}
							if (comb_dados[2][1] <= 7)
							{
								to_the_center6 = (7 - comb_dados[2][1]);
							}				
						}
						
						
						if ((only_once == 0) && (to_the_center1 <= to_the_center2) && (to_the_center1 <= to_the_center3) && (to_the_center1 <= to_the_center4) && (to_the_center1 <= to_the_center5) && (to_the_center1 <= to_the_center6))
						{
							if (*denier4 == 1)
							{							
								escolha = 'a';
								passed6++;
								bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
								only_once++;
							}
						}		
				
						if ((only_once == 0) && (to_the_center2 <= to_the_center1) && (to_the_center2 <= to_the_center3) && (to_the_center2 <= to_the_center4) && (to_the_center2 <= to_the_center5) && (to_the_center2 <= to_the_center6))
						{
							if (*denier5 == 1)
							{							
								escolha = 's';
								passed6++;
								bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
								only_once++;
							}
						}			
				
						if ((only_once == 0) && (to_the_center3 <= to_the_center1) && (to_the_center3 <= to_the_center2) && (to_the_center3 <= to_the_center4) && (to_the_center3 <= to_the_center5) && (to_the_center3 <= to_the_center6))
						{
							if (*denier6 == 1)
							{							
								escolha = 'd';
								passed6++;
								bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
								only_once++;
							}
						}			
				
						if ((only_once == 0) && (to_the_center4 <= to_the_center1) && (to_the_center4 <= to_the_center2) && (to_the_center4 <= to_the_center3) && (to_the_center4 <= to_the_center5) && (to_the_center4 <= to_the_center6))
						{
							if (*denier7 == 1)
							{							
								escolha = 'z';
								passed6++;
								bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
								only_once++;
							}
						}		
				
						if ((only_once == 0) && (to_the_center5 <= to_the_center1) && (to_the_center5 <= to_the_center2) && (to_the_center5 <= to_the_center3) && (to_the_center5 <= to_the_center4) && (to_the_center5 <= to_the_center6))
						{
							if (*denier8 == 1)
							{							
								escolha = 'x';
								passed6++;
								bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
								only_once++;
							}
						}		
				
						if ((only_once == 0) && (to_the_center6 <= to_the_center1) && (to_the_center6 <= to_the_center2) && (to_the_center6 <= to_the_center3) && (to_the_center6 <= to_the_center4) && (to_the_center6 <= to_the_center5))
						{
							if (*denier9 == 1)
							{							
								escolha = 'c';
								passed6++;
								bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
								only_once++;
							}
					}
				
				
				//////////////////////////SE HOUVEREM COLUNAS BLOQUEADAS E SÓ É POSSÍVEL JOGAR UM NÚMERO ------------------- SE HOUVER UM EMPATE, ESCOLHEM-SE AS POSIÇÕES NAS PISTAS DE NRº MAIS BAIXO (2.2)
					if (passed6 == 0)
					{
						if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
						{
							if ((only_once == 0) && (comb_dados[0][0] <= comb_dados[0][1]) && (comb_dados[0][0] <= comb_dados[1][0]) && (comb_dados[0][0] <= comb_dados[1][1]) && (comb_dados[0][0] <= comb_dados[2][0]) && (comb_dados[0][0] <= comb_dados[2][1]) || ((*denier5 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
							{
								if (*denier4 == 1)
								{								
									escolha = 'a';
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}
						}
				
						if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
						{
							if ((only_once == 0) && (comb_dados[0][1] <= comb_dados[0][0]) && (comb_dados[0][1] <= comb_dados[1][0]) && (comb_dados[0][1] <= comb_dados[1][1]) && (comb_dados[0][1] <= comb_dados[2][0]) && (comb_dados[0][1] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
							{
								if (*denier5 == 1)
								{								
									escolha = 's';
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}			
						}
				
						if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
						{
							if ((only_once == 0) && (comb_dados[1][0] <= comb_dados[0][0]) && (comb_dados[1][0] <= comb_dados[0][1]) && (comb_dados[1][0] <= comb_dados[1][1]) && (comb_dados[1][0] <= comb_dados[2][0]) && (comb_dados[1][0] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier7 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
							{
								if (*denier6 == 1)
								{								
									escolha = 'd';
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}			
						}
				
						if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
						{
							if ((only_once == 0) && (comb_dados[1][1] <= comb_dados[0][0]) && (comb_dados[1][1] <= comb_dados[0][1]) && (comb_dados[1][1] <= comb_dados[1][0]) && (comb_dados[1][1] <= comb_dados[2][0]) && (comb_dados[1][1] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier6 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
							{
								if (*denier7 == 1)
								{								
									escolha = 'z';
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}			
						}
				
						if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
						{
							if ((only_once == 0) && (comb_dados[2][0] <= comb_dados[0][0]) && (comb_dados[2][0] <= comb_dados[0][1]) && (comb_dados[2][0] <= comb_dados[1][0]) && (comb_dados[2][0] <= comb_dados[1][1]) && (comb_dados[2][0] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
							{
								if (*denier8 == 1)
								{								
									escolha = 'x';
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}			
						}
				
						if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
						{
							if ((only_once == 0) && (comb_dados[2][1] <= comb_dados[0][0]) && (comb_dados[2][1] <= comb_dados[0][1]) && (comb_dados[2][1] <= comb_dados[1][0]) && (comb_dados[2][1] <= comb_dados[1][1]) && (comb_dados[2][1] <= comb_dados[2][0]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier8 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
							{
								if (*denier9 == 1)
								{								
									escolha = 'c';
									bot_dados_3fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
									only_once++;
								}
							}				
						}
					}
				}
			}
	

}
//PARA DUAS FICHAS LIVRES - PARA USAR SEMPRE    ----- DEIXAR O MÁXIMO POSSÍVEL DE ALPINISTAS LIVRES (1)
void bot_duas_fichas (int progresso[11], int fichas_livres, int comb_dados[3][2], int *denier1, int *denier2, int *denier3, int *denier4, int *denier5, int *denier6, int *denier7, int *denier8, int *denier9, int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int type_of_match, int value_a)
{
	int passed = 0;
	int passed2 = 0;
	int passed3 = 0;
	int passed4 = 0;
	int passed5 = 0;
	int passed6 = 0;			
	int comparer1 = 0;
	int comparer2 = 0;
	int comparer3 = 0;
	int comparer4 = 0;
	int comparer5 = 0;
	int comparer6 = 0;			
	int to_the_center1 = 0;
	int to_the_center2 = 0;
	int to_the_center3 = 0;
	int to_the_center4 = 0;
	int to_the_center5 = 0;
	int to_the_center6 = 0;
	int combo1_to_the_center = 0;
	int combo2_to_the_center = 0;
	int combo3_to_the_center = 0;
	char escolha;
	int only_once = 0;	
	
	if (fichas_livres == 2)
	{
		if ((comb_dados[0][0]) == (comb_dados[0][1]) || (comb_dados[0][0] == value_a) || (comb_dados[0][1] == value_a))
		{
			if ((only_once == 0) && (comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{
				if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
				{
					if (*denier1 == 1)
					{			
						escolha = 'q';
						passed++;
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
		}
		
		if ((comb_dados[1][0]) == (comb_dados[1][1]) || (comb_dados[1][0] == value_a) || (comb_dados[1][1] == value_a))
		{
			if ((only_once == 0) && (comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{
				if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
				{
					if (*denier2 == 1)
					{						
						escolha = 'w';
						passed++;
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
		}
		
		if ((comb_dados[2][0]) == (comb_dados[2][1]) || (comb_dados[2][0] == value_a) || (comb_dados[2][1] == value_a))
		{
			if ((only_once == 0) && (comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{	
				if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
				{
					if (*denier3 == 1)
					{						
						escolha = 'e';
						passed++;
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
		}
		//////////////SE NÃO HOUVER UM PAR, ENTÃO ESCOLHE-SE PARA ONDE EXISTEM MENOS POSIÇÕES PARA O TOPO (2)
		if (passed == 0)
		{
			if ((comb_dados[0][0] + comb_dados[0][1]) >= 7)
			{
				comparer1 = ((comb_dados[0][0] + comb_dados[0][1]) - 7);
			}
				if ((comb_dados[0][0] + comb_dados[0][1]) <= 7)
				{
					comparer1 = (7 - (comb_dados[0][0] + comb_dados[0][1]));
				}		
				
			if ((comb_dados[1][0] + comb_dados[1][1]) >= 7)
			{
				comparer2 = ((comb_dados[1][0] + comb_dados[1][1]) - 7);
			}
				if ((comb_dados[1][0] + comb_dados[1][1]) <= 7)
				{
					comparer2 = (7 - (comb_dados[1][0] + comb_dados[1][1]));
				}			
				
			if ((comb_dados[2][0] + comb_dados[2][1]) >= 7)
			{
				comparer3 = ((comb_dados[2][0] + comb_dados[2][1]) - 7);
			}
				if ((comb_dados[2][0] + comb_dados[2][1]) <= 7)
				{
					comparer3 = (7 - (comb_dados[2][0] + comb_dados[2][1]));
				}	
		
			if ((only_once == 0) && (comparer1 >= comparer2) && (comparer1 >= comparer3))
			{
				if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
				{
					if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
					{
						if (*denier1 == 1)
						{							
							escolha = 'q';
							passed2++;
							bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
							only_once++;
						}
					}
				}
			}
							
			if ((only_once == 0) && (comparer2 >= comparer1) && (comparer2 >= comparer3))
			{
				if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
				{
					if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
					{						
						if (*denier2 == 1)
						{
							escolha = 'w';
							passed2++;
							bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
							only_once++;
						}
					}
				}
			}							
			if ((only_once == 0) && (comparer3 >= comparer1) && (comparer3 >= comparer2))
			{
				if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
				{	
					if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
					{	
						if (*denier3 == 1)
						{
							escolha = 'e';
							passed2++;
							bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
							only_once++;
						}
					}
				}
			}				
		}

		
		/////////////SE HOUVER UM EMPATE, ESCOLHEM-SE AS POSIÇÕES MAIS PRÓXIMAS DO CENTRO (2.1)
		if (passed2 == 0)
		{
				if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
				{
					if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
					{		
						if (comb_dados[0][0] >= 7)
						{
							to_the_center1 = (comb_dados[0][0] - 7);
						}
							if (comb_dados[0][0] <= 7)
							{
								to_the_center1 = (7 - comb_dados[0][0]);
							}
					
						if (comb_dados[0][1] >= 7)
						{
							to_the_center2 = (comb_dados[0][0] - 7);
						}
							if (comb_dados[1][0] <= 7)
							{
								to_the_center2 = (7 - comb_dados[0][0]);
							}
						
					combo1_to_the_center = (to_the_center1 + to_the_center2);
					}
				}
				
				if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
				{
					if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
					{		
						if (comb_dados[0][1] >= 7)
						{
							to_the_center3 = (comb_dados[0][1] - 7);
						}
							if (comb_dados[0][1] <= 7)
							{
								to_the_center3 = (7 - comb_dados[0][1]);
							}
					
						if (comb_dados[1][1] >= 7)
						{
							to_the_center4 = (comb_dados[1][1] - 7);
						}
							if (comb_dados[1][1] <= 7)
							{
								to_the_center4 = (7 - comb_dados[1][1]);
							}
						
					combo2_to_the_center = (to_the_center3 + to_the_center4);		
					}
				}
		
				if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
				{	
					if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
					{
						if (comb_dados[2][0] >= 7)
						{
							to_the_center5 = (comb_dados[2][0] - 7);
						}
							if (comb_dados[2][0] <= 7)
							{
								to_the_center5 = (7 - comb_dados[2][0]);
							}
					
						if (comb_dados[2][1] >= 7)
						{
							to_the_center6 = (comb_dados[2][1] - 7);
						}
							if (comb_dados[2][1] <= 7)
							{
								to_the_center6 = (7 - comb_dados[2][1]);
							}
						
					combo3_to_the_center = (to_the_center5 + to_the_center6);
					}
				}
		
				if ((only_once == 0) && (combo1_to_the_center <= combo2_to_the_center) && (combo1_to_the_center <= combo3_to_the_center))
				{
					if (*denier1 == 1)
					{
						escolha = 'q';
						passed3++;
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
		
				if ((only_once == 0) && (combo2_to_the_center <= combo1_to_the_center) && (combo2_to_the_center <= combo3_to_the_center))
				{
					if (*denier2 == 1)
					{
						escolha = 'w';
						passed3++;
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
				
				if ((only_once == 0) && (combo3_to_the_center <= combo1_to_the_center) && (combo3_to_the_center <= combo2_to_the_center))
				{
					if (*denier3 == 1)
					{
						escolha = 'e';
						passed3++;
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}		
		}

		/////////////SE HOUVER UM EMPATE, ESCOLHEM-SE AS POSIÇÕES NAS PISTAS DE NRº MAIS BAIXO (2.2)
		if (passed3 == 0)
		{
			if ((only_once == 0) && (comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{
				if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
				{
					if (((comb_dados[0][0] <= comb_dados[1][0]) || (comb_dados[0][1] <= comb_dados[1][1])) && ((comb_dados[0][0] <= comb_dados[2][0]) || (comb_dados[0][1] <= comb_dados[2][1]) || ((*denier2 == 0) && (*denier3 == 0))))
					{
						if (*denier1 == 1)
						{
							escolha = 'q';
							passed4++;
							bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
							only_once++;
						}
					}
				}
			}
			if ((only_once == 0) && (comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{
				if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
				{	
					if (((comb_dados[1][0] <= comb_dados[0][0]) || (comb_dados[1][1] <= comb_dados[0][1])) && ((comb_dados[1][0] <= comb_dados[2][0]) || (comb_dados[1][1] <= comb_dados[2][1]) || ((*denier1 == 0) && (*denier3 == 0))))
					{
						if (*denier2 == 1)
						{
							escolha = 'w';
							passed4++;
							bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
							only_once++;
						}
					}
				}
			}
			if ((only_once == 0) && (comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{	
				if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
				{	
					if (((comb_dados[2][0] <= comb_dados[0][0]) || (comb_dados[2][1] <= comb_dados[0][1])) && ((comb_dados[2][0] <= comb_dados[1][0]) || (comb_dados[2][1] <= comb_dados[1][1]) || ((*denier1 == 0) && (*denier2 == 0))))
					{
						if (*denier3 == 1)
						{
							escolha = 'e';
							passed4++;
							bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
							only_once++;
						}
					}
				}
			}
		}
	
	//////////////////////////SE HOUVEREM COLUNAS BLOQUEADAS E SÓ É POSSÍVEL JOGAR UM NÚMERO ------------------- ESCOLHE-SE AQUELE COM MENOS POSIÇÕES PARA O TOPO (2)
		if (passed4 == 0)
		{
			if (comb_dados[0][0] >= 7)
			{
				comparer1 = (comb_dados[0][0] - 7);
			}
				if ((comb_dados[0][0]) <= 7)
				{
					comparer1 = (7 - comb_dados[0][0]);
				}
			if (comb_dados[0][1] >= 7)
			{
				comparer2 = (comb_dados[0][1] - 7);
			}
				if (comb_dados[0][1] <= 7)
				{
					comparer2 = (7 - comb_dados[0][1]);
				}			
			if (comb_dados[1][0] >= 7)
			{
				comparer3 = (comb_dados[1][0] - 7);
			}
				if (comb_dados[1][0] <= 7)
				{
					comparer3 = (7 - comb_dados[1][0]);
				}			
			if (comb_dados[1][1] >= 7)
			{
				comparer4 = (comb_dados[1][1] - 7);
			}
				if (comb_dados[1][1] <= 7)
				{
					comparer4 = (7 - comb_dados[1][1]);
				}				
			if (comb_dados[2][0] >= 7)
			{
				comparer5 = (comb_dados[2][0] - 7);
			}
				if (comb_dados[2][0] <= 7)
				{
					comparer5 = (7 - comb_dados[2][0]);
				}			
			if (comb_dados[2][1] >= 7)
			{
				comparer6 = (comb_dados[2][1] - 7);
			}
				if (comb_dados[2][1] <= 7)
				{
					comparer6 = (7 - comb_dados[2][1]);
				}			
			
				
			if ((only_once == 0) && (comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))	
			{
				if (((comparer1 >= comparer2) && (comparer1 >= comparer3) && (comparer1 >= comparer4) && (comparer1 >= comparer5) && (comparer1 >= comparer6)) || (comb_dados[0][0] == value_a))
				{
					if (*denier4 == 1)
					{
						escolha = 'a';
						passed5++;
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
			{
				if (((comparer2 >= comparer1) && (comparer2 >= comparer3) && (comparer2 >= comparer4) && (comparer2 >= comparer5) && (comparer2 >= comparer6)) || (comb_dados[0][1] == value_a))
				{
					if (*denier5 == 1)
					{
						escolha = 's';
						passed5++;				
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{
				if (((comparer3 >= comparer1) && (comparer3 >= comparer2) && (comparer3 >= comparer4) && (comparer3 >= comparer5) && (comparer3 >= comparer6)) || (comb_dados[1][0] == value_a))
				{
					if (*denier6 == 1)
					{
						escolha = 'd';
						passed5++;						
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
			{
				if (((comparer4 >= comparer1) && (comparer4 >= comparer2) && (comparer4 >= comparer3) && (comparer4 >= comparer5) && (comparer4 >= comparer6)) || (comb_dados[1][1] == value_a))
				{
					if (*denier7 == 1)
					{
						escolha = 'z';
						passed5++;					
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{
				if (((comparer5 >= comparer1) && (comparer5 >= comparer2) && (comparer5 >= comparer3) && (comparer5 >= comparer4) && (comparer5 >= comparer6)) || (comb_dados[2][0] == value_a))
				{
					if (*denier8 == 1)
					{
						escolha = 'x';
						passed5++;
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
			{
				if (((comparer6 >= comparer1) && (comparer6 >= comparer2) && (comparer6 >= comparer3) && (comparer6 >= comparer4) && (comparer6 >= comparer5)) || (comb_dados[2][1] == value_a))
				{
					if (*denier9 == 1)
					{
						escolha = 'c';
						passed5++;
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}			
		}
	
	
	
	//////////////////////////SE HOUVEREM COLUNAS BLOQUEADAS E SÓ É POSSÍVEL JOGAR UM NÚMERO ------------------- SE HOUVER UM EMPATE, ESCOLHEM-SE AS POSIÇÕES MAIS PRÓXIMAS DO CENTRO (2.1)
		if (passed5 == 0)
		{
			if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{
				if (comb_dados[0][0] >= 7)
				{
					to_the_center1 = (comb_dados[0][0] - 7);
				}
				if (comb_dados[0][0] <= 7)
				{
					to_the_center1 = (7 - comb_dados[0][0]);
				}
			}
			
			
			if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
			{
				if (comb_dados[0][1] >= 7)
				{
					to_the_center2 = (comb_dados[0][1] - 7);
				}
				if (comb_dados[0][1] <= 7)
				{
					to_the_center2 = (7 - comb_dados[0][1]);
				}				
			}
			
			
			if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{
				if (comb_dados[1][0] >= 7)
				{
					to_the_center3 = (comb_dados[1][0] - 7);
				}
				if (comb_dados[1][0] <= 7)
				{
					to_the_center3 = (7 - comb_dados[1][0]);
				}			
			}
			
	
			if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
			{
				if (comb_dados[1][1] >= 7)
				{
					to_the_center4 = (comb_dados[1][1] - 7);
				}
				if (comb_dados[1][1] <= 7)
				{
					to_the_center4 = (7 - comb_dados[1][1]);
				}				
			}
			
			
			if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{
				if (comb_dados[2][0] >= 7)
				{
					to_the_center5 = (comb_dados[2][0] - 7);
				}
				if (comb_dados[2][0] <= 7)
				{
					to_the_center5 = (7 - comb_dados[2][0]);
				}			
			}
			
			
			if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
			{
				if (comb_dados[2][1] >= 7)
				{
					to_the_center6 = (comb_dados[2][1] - 7);
				}
				if (comb_dados[2][1] <= 7)
				{
					to_the_center6 = (7 - comb_dados[2][1]);
				}				
			}
			
			
			if ((only_once == 0) && (to_the_center1 <= to_the_center2) && (to_the_center1 <= to_the_center3) && (to_the_center1 <= to_the_center4) && (to_the_center1 <= to_the_center5) && (to_the_center1 <= to_the_center6))
			{
				if (*denier4 == 1)
				{
					escolha = 'a';
					passed6++;
					bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}		
	
			if ((only_once == 0) && (to_the_center2 <= to_the_center1) && (to_the_center2 <= to_the_center3) && (to_the_center2 <= to_the_center4) && (to_the_center2 <= to_the_center5) && (to_the_center2 <= to_the_center6))
			{
				if (*denier5 == 1)
				{
					escolha = 's';
					passed6++;
					bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}			
	
			if ((only_once == 0) && (to_the_center3 <= to_the_center1) && (to_the_center3 <= to_the_center2) && (to_the_center3 <= to_the_center4) && (to_the_center3 <= to_the_center5) && (to_the_center3 <= to_the_center6))
			{
				if (*denier6 == 1)
				{
					escolha = 'd';
					passed6++;
					bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}			
	
			if ((only_once == 0) && (to_the_center4 <= to_the_center1) && (to_the_center4 <= to_the_center2) && (to_the_center4 <= to_the_center3) && (to_the_center4 <= to_the_center5) && (to_the_center4 <= to_the_center6))
			{
				if (*denier7 == 1)
				{
					escolha = 'z';
					passed6++;
					bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}		
	
			if ((only_once == 0) && (to_the_center5 <= to_the_center1) && (to_the_center5 <= to_the_center2) && (to_the_center5 <= to_the_center3) && (to_the_center5 <= to_the_center4) && (to_the_center5 <= to_the_center6))
			{
				if (*denier8 == 1)
				{
					escolha = 'x';
					passed6++;
					bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}		
	
			if ((only_once == 0) && (to_the_center6 <= to_the_center1) && (to_the_center6 <= to_the_center2) && (to_the_center6 <= to_the_center3) && (to_the_center6 <= to_the_center4) && (to_the_center6 <= to_the_center5))
			{
				if (*denier9 == 1)
				{
					escolha = 'c';
					passed6++;
					bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}			
		}
	
	
	//////////////////////////SE HOUVEREM COLUNAS BLOQUEADAS E SÓ É POSSÍVEL JOGAR UM NÚMERO ------------------- SE HOUVER UM EMPATE, ESCOLHEM-SE AS POSIÇÕES NAS PISTAS DE NRº MAIS BAIXO (2.2)
		if (passed6 == 0)
		{
			if ((only_once == 0) && (comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{
				if ((comb_dados[0][0] <= comb_dados[0][1]) && (comb_dados[0][0] <= comb_dados[1][0]) && (comb_dados[0][0] <= comb_dados[1][1]) && (comb_dados[0][0] <= comb_dados[2][0]) && (comb_dados[0][0] <= comb_dados[2][1]) || ((*denier5 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
				{
					if (*denier4 == 1)
					{
						escolha = 'a';
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
			{
				if ((comb_dados[0][1] <= comb_dados[0][0]) && (comb_dados[0][1] <= comb_dados[1][0]) && (comb_dados[0][1] <= comb_dados[1][1]) && (comb_dados[0][1] <= comb_dados[2][0]) && (comb_dados[0][1] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
				{
					if (*denier5 == 1)
					{
						escolha = 's';
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}			
			}
	
			if ((only_once == 0) && (comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{
				if ((comb_dados[1][0] <= comb_dados[0][0]) && (comb_dados[1][0] <= comb_dados[0][1]) && (comb_dados[1][0] <= comb_dados[1][1]) && (comb_dados[1][0] <= comb_dados[2][0]) && (comb_dados[1][0] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier7 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
				{
					if (*denier6 == 1)
					{
						escolha = 'd';
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}			
			}
	
			if ((only_once == 0) && (comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
			{
				if ((comb_dados[1][1] <= comb_dados[0][0]) && (comb_dados[1][1] <= comb_dados[0][1]) && (comb_dados[1][1] <= comb_dados[1][0]) && (comb_dados[1][1] <= comb_dados[2][0]) && (comb_dados[1][1] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier6 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
				{
					if (*denier7 == 1)
					{
						escolha = 'z';
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}			
			}
	
			if ((only_once == 0) && (comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{
				if ((comb_dados[2][0] <= comb_dados[0][0]) && (comb_dados[2][0] <= comb_dados[0][1]) && (comb_dados[2][0] <= comb_dados[1][0]) && (comb_dados[2][0] <= comb_dados[1][1]) && (comb_dados[2][0] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
				{
					if (*denier8 == 1)
					{
						escolha = 'x';
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}			
			}
	
			if ((only_once == 0) && (comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
			{
				if ((comb_dados[2][1] <= comb_dados[0][0]) && (comb_dados[2][1] <= comb_dados[0][1]) && (comb_dados[2][1] <= comb_dados[1][0]) && (comb_dados[2][1] <= comb_dados[1][1]) && (comb_dados[2][1] <= comb_dados[2][0]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier8 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0) && (passed4 == 0)))
				{
					if (*denier9 == 1)
					{
						escolha = 'c';
						bot_dados_2fichas(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}				
			}
		}
	}
}

void bot_uma_ficha (int progresso[11], int fichas_livres, int comb_dados[3][2], int *denier1, int *denier2, int *denier3, int *denier4, int *denier5, int *denier6, int *denier7, int *denier8, int *denier9, int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int type_of_match, int value_a, int value_b)
{

	int passed = 0;
	int passed2 = 0;
	int passed3 = 0;			
	int comparer1 = 0;
	int comparer2 = 0;
	int comparer3 = 0;
	int comparer4 = 0;
	int comparer5 = 0;
	int comparer6 = 0;			
	int to_the_center1 = 0;
	int to_the_center2 = 0;
	int to_the_center3 = 0;
	int to_the_center4 = 0;
	int to_the_center5 = 0;
	int to_the_center6 = 0;
	int combo1_to_the_center = 0;
	int combo2_to_the_center = 0;
	int combo3_to_the_center = 0;
	char escolha;
	int only_once = 0;


	if (fichas_livres == 1)
	{
		if (((comb_dados[0][0]) == (comb_dados[0][1])) || (comb_dados[0][0] == value_a) || (comb_dados[0][1] == value_a) || (comb_dados[0][0] == value_b) || (comb_dados[0][1] == value_b))
		{
			if ((only_once == 0) && (comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{
				if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
				{	
					if (*denier1 == 1)
					{	
						escolha = 'q';
						passed++;
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
		}
		
		if (((comb_dados[1][0]) == (comb_dados[1][1])) || (comb_dados[1][0] == value_a) || (comb_dados[1][1] == value_a) || (comb_dados[1][0] == value_b) || (comb_dados[1][1] == value_b))
		{
			if ((only_once == 0) && (comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{
				if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
				{
					if (*denier2 == 1)
					{
						escolha = 'w';
						passed++;
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
		}
		
		if (((comb_dados[2][0]) == (comb_dados[2][1])) || (comb_dados[2][0] == value_a) || (comb_dados[2][1] == value_a) || (comb_dados[2][0] == value_b) || (comb_dados[2][1] == value_b))
		{
			if ((only_once == 0) && (comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{	
				if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
				{
					if(*denier3 == 1)
					{
						escolha = 'e';
						passed++;
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
		}

	
	//////////////////////////SE HOUVEREM COLUNAS BLOQUEADAS OU SÓ É POSSÍVEL JOGAR UM NÚMERO ------------------- ESCOLHE-SE AQUELE COM MENOS POSIÇÕES PARA O TOPO (2)
		if ((passed == 0))
		{
			if (comb_dados[0][0] >= 7)
			{
				comparer1 = (comb_dados[0][0] - 7);
			}
				if ((comb_dados[0][0]) <= 7)
				{
					comparer1 = (7 - comb_dados[0][0]);
				}
			if (comb_dados[0][1] >= 7)
			{
				comparer2 = (comb_dados[0][1] - 7);
			}
				if (comb_dados[0][1] <= 7)
				{
					comparer2 = (7 - comb_dados[0][1]);
				}			
			if (comb_dados[1][0] >= 7)
			{
				comparer3 = (comb_dados[1][0] - 7);
			}
				if (comb_dados[1][0] <= 7)
				{
					comparer3 = (7 - comb_dados[1][0]);
				}			
			if (comb_dados[1][1] >= 7)
			{
				comparer4 = (comb_dados[1][1] - 7);
			}
				if (comb_dados[1][1] <= 7)
				{
					comparer4 = (7 - comb_dados[1][1]);
				}				
			if (comb_dados[2][0] >= 7)
			{
				comparer5 = (comb_dados[2][0] - 7);
			}
				if (comb_dados[2][0] <= 7)
				{
					comparer5 = (7 - comb_dados[2][0]);
				}			
			if (comb_dados[2][1] >= 7)
			{
				comparer6 = (comb_dados[2][1] - 7);
			}
				if (comb_dados[2][1] <= 7)
				{
					comparer6 = (7 - comb_dados[2][1]);
				}			
			
				
			if ((only_once == 0) && (comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))	
			{
				if (((comparer1 >= comparer2) && (comparer1 >= comparer3) && (comparer1 >= comparer4) && (comparer1 >= comparer5) && (comparer1 >= comparer6)) || (comb_dados[0][0] == value_a) || (comb_dados[0][0] == value_b))
				{
					if (*denier4 == 1)
					{
						escolha = 'a';
						passed2++;
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
			{
				if (((comparer2 >= comparer1) && (comparer2 >= comparer3) && (comparer2 >= comparer4) && (comparer2 >= comparer5) && (comparer2 >= comparer6)) || (comb_dados[0][1] == value_a) || (comb_dados[0][1] == value_b))
				{
					if (*denier5 == 1)
					{
						escolha = 's';
						passed2++;
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{
				if (((comparer3 >= comparer1) && (comparer3 >= comparer2) && (comparer3 >= comparer4) && (comparer3 >= comparer5) && (comparer3 >= comparer6)) || (comb_dados[1][0] == value_a) || (comb_dados[1][0] == value_b))
				{
					if (*denier6 == 1)
					{					
						escolha = 'd';
						passed2++;
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
			{
				if (((comparer4 >= comparer1) && (comparer4 >= comparer2) && (comparer4 >= comparer3) && (comparer4 >= comparer5) && (comparer4 >= comparer6)) || (comb_dados[1][1] == value_a) || (comb_dados[1][1] == value_b))
				{
					if (*denier7 == 1)
					{					
						escolha = 'z';
						passed2++;
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{
				if (((comparer5 >= comparer1) && (comparer5 >= comparer2) && (comparer5 >= comparer3) && (comparer5 >= comparer4) && (comparer5 >= comparer6)) || (comb_dados[2][0] == value_a) || (comb_dados[2][0] == value_b))
				{
					if (*denier8 == 1)
					{					
						escolha = 'x';
						passed2++;
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
			{
				if (((comparer6 >= comparer1) && (comparer6 >= comparer2) && (comparer6 >= comparer3) && (comparer6 >= comparer4) && (comparer6 >= comparer5)) || (comb_dados[2][1] == value_a) || (comb_dados[2][1] == value_b))
				{
					if (*denier9 == 1)
					{					
						escolha = 'c';
						passed2++;
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
						only_once++;
					}
				}
			}			
		}
	
	
	
	//////////////////////////SE HOUVEREM COLUNAS BLOQUEADAS E SÓ É POSSÍVEL JOGAR UM NÚMERO ------------------- SE HOUVER UM EMPATE, ESCOLHEM-SE AS POSIÇÕES MAIS PRÓXIMAS DO CENTRO (2.1)
		if (passed2 == 0)
		{
			if ((comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{
				if (comb_dados[0][0] >= 7)
				{
					to_the_center1 = (comb_dados[0][0] - 7);
				}
				if (comb_dados[0][0] <= 7)
				{
					to_the_center1 = (7 - comb_dados[0][0]);
				}
			}
			
			
			if ((comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
			{
				if (comb_dados[0][1] >= 7)
				{
					to_the_center2 = (comb_dados[0][1] - 7);
				}
				if (comb_dados[0][1] <= 7)
				{
					to_the_center2 = (7 - comb_dados[0][1]);
				}				
			}
			
			
			if ((comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{
				if (comb_dados[1][0] >= 7)
				{
					to_the_center3 = (comb_dados[1][0] - 7);
				}
				if (comb_dados[1][0] <= 7)
				{
					to_the_center3 = (7 - comb_dados[1][0]);
				}			
			}
			
	
			if ((comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
			{
				if (comb_dados[1][1] >= 7)
				{
					to_the_center4 = (comb_dados[1][1] - 7);
				}
				if (comb_dados[1][1] <= 7)
				{
					to_the_center4 = (7 - comb_dados[1][1]);
				}				
			}
			
			
			if ((comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{
				if (comb_dados[2][0] >= 7)
				{
					to_the_center5 = (comb_dados[2][0] - 7);
				}
				if (comb_dados[2][0] <= 7)
				{
					to_the_center5 = (7 - comb_dados[2][0]);
				}			
			}
			
			
			if ((comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
			{
				if (comb_dados[2][1] >= 7)
				{
					to_the_center6 = (comb_dados[2][1] - 7);
				}
				if (comb_dados[2][1] <= 7)
				{
					to_the_center6 = (7 - comb_dados[2][1]);
				}				
			}
			
			
			if ((only_once == 0) && (to_the_center1 <= to_the_center2) && (to_the_center1 <= to_the_center3) && (to_the_center1 <= to_the_center4) && (to_the_center1 <= to_the_center5) && (to_the_center1 <= to_the_center6))
			{
				if (*denier4 == 1)
				{				
					escolha = 'a';
					passed3++;
					bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}		
	
			if ((only_once == 0) && (to_the_center2 <= to_the_center1) && (to_the_center2 <= to_the_center3) && (to_the_center2 <= to_the_center4) && (to_the_center2 <= to_the_center5) && (to_the_center2 <= to_the_center6))
			{
				if (*denier5 == 1)
				{					
					escolha = 's';
					passed3++;
					bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}			
	
			if ((only_once == 0) && (to_the_center3 <= to_the_center1) && (to_the_center3 <= to_the_center2) && (to_the_center3 <= to_the_center4) && (to_the_center3 <= to_the_center5) && (to_the_center3 <= to_the_center6))
			{
				if (*denier6 == 1)
				{					
					escolha = 'd';
					passed3++;
					bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}			
	
			if ((only_once == 0) && (to_the_center4 <= to_the_center1) && (to_the_center4 <= to_the_center2) && (to_the_center4 <= to_the_center3) && (to_the_center4 <= to_the_center5) && (to_the_center4 <= to_the_center6))
			{
				if (*denier7 == 1)
				{					
					escolha = 'z';
					passed3++;
					bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}		
	
			if ((only_once == 0) && (to_the_center5 <= to_the_center1) && (to_the_center5 <= to_the_center2) && (to_the_center5 <= to_the_center3) && (to_the_center5 <= to_the_center4) && (to_the_center5 <= to_the_center6))
			{
				if (*denier8 == 1)
				{					
					escolha = 'x';
					passed3++;
					bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}		
	
			if ((only_once == 0) && (to_the_center6 <= to_the_center1) && (to_the_center6 <= to_the_center2) && (to_the_center6 <= to_the_center3) && (to_the_center6 <= to_the_center4) && (to_the_center6 <= to_the_center5))
			{
				if (*denier9 == 1)
				{					
					escolha = 'c';
					passed3++;
					bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					only_once++;
				}
			}			
		}
	
	
	//////////////////////////SE HOUVEREM COLUNAS BLOQUEADAS E SÓ É POSSÍVEL JOGAR UM NÚMERO ------------------- SE HOUVER UM EMPATE, ESCOLHEM-SE AS POSIÇÕES NAS PISTAS DE NRº MAIS BAIXO (2.2)
		if (passed3 == 0)
		{
			if ((only_once == 0) && (comb_dados[0][0] != *ab) && (comb_dados[0][0] != *bb) && (comb_dados[0][0] != *cb) && (comb_dados[0][0] != *db) && (comb_dados[0][0] != *eb) && (comb_dados[0][0] != *fb) && (comb_dados[0][0] != *gb) && (comb_dados[0][0] != *hb) && (comb_dados[0][0] != *ib) && (comb_dados[0][0] != *jb) && (comb_dados[0][0] != *kb))
			{
				if ((comb_dados[0][0] <= comb_dados[0][1]) && (comb_dados[0][0] <= comb_dados[1][0]) && (comb_dados[0][0] <= comb_dados[1][1]) && (comb_dados[0][0] <= comb_dados[2][0]) && (comb_dados[0][0] <= comb_dados[2][1])  || ((*denier5 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0)))
				{
					if (*denier4 == 1)
					{						
						escolha = 'a';
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					}
				}
			}
	
			if ((only_once == 0) && (comb_dados[0][1] != *ab) && (comb_dados[0][1] != *bb) && (comb_dados[0][1] != *cb) && (comb_dados[0][1] != *db) && (comb_dados[0][1] != *eb) && (comb_dados[0][1] != *fb) && (comb_dados[0][1] != *gb) && (comb_dados[0][1] != *hb) && (comb_dados[0][1] != *ib) && (comb_dados[0][1] != *jb) && (comb_dados[0][1] != *kb))
			{
				if ((comb_dados[0][1] <= comb_dados[0][0]) && (comb_dados[0][1] <= comb_dados[1][0]) && (comb_dados[0][1] <= comb_dados[1][1]) && (comb_dados[0][1] <= comb_dados[2][0]) && (comb_dados[0][1] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0)))
				{
					if (*denier5 == 1)
					{
						escolha = 's';
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					}
				}			
			}
	
			if ((only_once == 0) && (comb_dados[1][0] != *ab) && (comb_dados[1][0] != *bb) && (comb_dados[1][0] != *cb) && (comb_dados[1][0] != *db) && (comb_dados[1][0] != *eb) && (comb_dados[1][0] != *fb) && (comb_dados[1][0] != *gb) && (comb_dados[1][0] != *hb) && (comb_dados[1][0] != *ib) && (comb_dados[1][0] != *jb) && (comb_dados[1][0] != *kb))
			{
				if ((comb_dados[1][0] <= comb_dados[0][0]) && (comb_dados[1][0] <= comb_dados[0][1]) && (comb_dados[1][0] <= comb_dados[1][1]) && (comb_dados[1][0] <= comb_dados[2][0]) && (comb_dados[1][0] <= comb_dados[2][1]) || ((*denier4== 0) && (*denier5 == 0) && (*denier7 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0)))
				{
					if (*denier6 == 1)
					{
						escolha = 'd';
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					}
				}			
			}
	
			if ((only_once == 0) && (comb_dados[1][1] != *ab) && (comb_dados[1][1] != *bb) && (comb_dados[1][1] != *cb) && (comb_dados[1][1] != *db) && (comb_dados[1][1] != *eb) && (comb_dados[1][1] != *fb) && (comb_dados[1][1] != *gb) && (comb_dados[1][1] != *hb) && (comb_dados[1][1] != *ib) && (comb_dados[1][1] != *jb) && (comb_dados[1][1] != *kb))
			{
				if ((comb_dados[1][1] <= comb_dados[0][0]) && (comb_dados[1][1] <= comb_dados[0][1]) && (comb_dados[1][1] <= comb_dados[1][0]) && (comb_dados[1][1] <= comb_dados[2][0]) && (comb_dados[1][1] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier6 == 0) && (*denier8 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0)))
				{
					if (*denier7 == 1)
					{
						escolha = 'z';
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					}
				}			
			}
	
			if ((only_once == 0) && (comb_dados[2][0] != *ab) && (comb_dados[2][0] != *bb) && (comb_dados[2][0] != *cb) && (comb_dados[2][0] != *db) && (comb_dados[2][0] != *eb) && (comb_dados[2][0] != *fb) && (comb_dados[2][0] != *gb) && (comb_dados[2][0] != *hb) && (comb_dados[2][0] != *ib) && (comb_dados[2][0] != *jb) && (comb_dados[2][0] != *kb))
			{
				if ((comb_dados[2][0] <= comb_dados[0][0]) && (comb_dados[2][0] <= comb_dados[0][1]) && (comb_dados[2][0] <= comb_dados[1][0]) && (comb_dados[2][0] <= comb_dados[1][1]) && (comb_dados[2][0] <= comb_dados[2][1]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier9 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0)))
				{
					if (*denier8 == 1)
					{
						escolha = 'x';
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					}
				}			
			}
	
			if ((only_once == 0) && (comb_dados[2][1] != *ab) && (comb_dados[2][1] != *bb) && (comb_dados[2][1] != *cb) && (comb_dados[2][1] != *db) && (comb_dados[2][1] != *eb) && (comb_dados[2][1] != *fb) && (comb_dados[2][1] != *gb) && (comb_dados[2][1] != *hb) && (comb_dados[2][1] != *ib) && (comb_dados[2][1] != *jb) && (comb_dados[2][1] != *kb))
			{
				if ((comb_dados[2][1] <= comb_dados[0][0]) && (comb_dados[2][1] <= comb_dados[0][1]) && (comb_dados[2][1] <= comb_dados[1][0]) && (comb_dados[2][1] <= comb_dados[1][1]) && (comb_dados[2][1] <= comb_dados[2][0]) || ((*denier4 == 0) && (*denier5 == 0) && (*denier6 == 0) && (*denier7 == 0) && (*denier8 == 0) && (passed == 0) && (passed2 == 0) && (passed3 == 0)))
				{
					if (*denier9 == 1)
					{
						escolha = 'c';
						bot_dados_1ficha(&escolha, progresso, comb_dados, denier1, denier2, denier3, denier4, denier5, denier6, denier7, denier8, denier9, type_of_match);
					}
				}				
			}
		}
	}
}


void bot_decision(int fichas_livres, char *decision)
{
	if (fichas_livres > 0)
	{
		*decision = 'c';
	}

	if (fichas_livres == 0)
	{
		*decision = 's';
	}
	
}
#endif	
