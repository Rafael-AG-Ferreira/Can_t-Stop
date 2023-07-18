#ifndef _SAVE_GAME_STATUS_
#define _SAVE_GAME_STATUS_
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
#include "main_game_screen.h"	

void Save_Game_Status(char p1[59], char p2[59],int jogado1[11], int jogado2[11], int pl1_shift, int pl2_shift, int active_player, int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int type_of_match, int dados[4], int progresso[11], int *while_in_turn, int fichas_livres)
{	
	int i=0;

	FILE *f1, *f2;
	
	if(( f2 = fopen( "gravar.txt", "w" ))== NULL )
	{
		printf("ERRO: não é possível abrir o ficheiro gravar.txt\n");
		exit(1);
	}	
		
	fprintf(f2, "%s", p1);////////////////////////////////////NOME PLAYER1
	
	fprintf(f2, "\n");
	
	for (i=0; i<11; i++)//////////////////////////////////////ESTADO TABULEIRO (VETOR) PLAYER1
	{
		fprintf(f2, "%d ", jogado1[i]);
	}
	fprintf(f2, "\n");
	fprintf(f2, "%d", pl1_shift);/////////////////////////////ESTADO TURNO PLAYER1
	fprintf(f2, "\n");												
	
	fprintf(f2, "%s", p2);////////////////////////////////////NOME PLAYER2
		
	fprintf(f2, "\n");

	for (i=0; i<11; i++)//////////////////////////////////////ESTADO TABULEIRO (VETOR) PLAYER2
	{
		fprintf(f2, "%d ", jogado2[i]);
	}	
	fprintf(f2, "\n");
	fprintf(f2, "%d", pl2_shift);/////////////////////////////ESTADO TURNO PLAYER2
	fprintf(f2, "\n");

	fprintf(f2, "%d", active_player);/////////////////////////////ACTIVE PLAYER
	fprintf(f2, "\n");
	
	for (i=0; i<11; i++)//////////////////////////////////////BLOCKED COLUMNS
	{
		fprintf(f2, "%d ", blocked_columns[i]);
	}
	
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *ab);
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *bb);
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *cb);
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *db);
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *eb);
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *fb);
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *gb);	
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *hb);	
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *ib);	
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *jb);	
	fprintf(f2, "\n");	
	fprintf(f2, "%d", *kb);
	fprintf(f2, "\n");	
	fprintf(f2, "%d", type_of_match);	
	fprintf(f2, "\n");	
	for (i=0; i<4; i++)
	{
		fprintf(f2, "%d ", dados[i]);
	}
	fprintf(f2, "\n");
	
	for (i=0; i<11; i++)//////////////////////////////////////PROGRESSO
	{
		fprintf(f2, "%d ", progresso[i]);
	}	
		
	fprintf(f2, "\n");		
	fprintf(f2, "%d", *while_in_turn);
	fprintf(f2, "\n");		
	fprintf(f2, "%d", fichas_livres);												
	fclose( f2 );	
}

#endif
