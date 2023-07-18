#ifndef _LOAD_SAVED_GAME_	
#define _LOAD_SAVED_GAME_
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
#include "main_game_loaded.h"

void Load_Saved_Game()
{
	int i=0;
	int while_in_turn;
	int dados[4];
	char p1[59];
	char p2[59];
	int jogado1[11];
	int jogado2[11];
	int progresso[11];
	int blocked_columns[11];
	int pl1_shift;
	int pl2_shift;
	int active_player;
	int ab;
	int bb;
	int cb;
	int db;
	int eb;
	int fb;
	int gb;
	int hb;
	int ib;
	int jb;
	int kb;
	int type_of_match;
	int fichas_livres;
	char new_line_eater;
	
	FILE *f1, *f2;
	
	if(( f1 = fopen( "gravar.txt", "r" ))== NULL )
	{
		printf("ERRO: não é possível abrir o ficheiro gravar.txt\n");
		exit(1);
	}	

	for (i=0; i<59; i++)
	{
		fscanf(f1, "%[^\n]c", &(p1[i]));
	}
	for (i=0; i<11; i++)
	{
		fscanf(f1, "%d", &jogado1[i]);
	}
	fscanf(f1,"%d", &pl1_shift);
	fscanf(f1,"%c", &new_line_eater);
	for (i=0; i<59; i++)
	{
		fscanf(f1, "%[^\n]c", &(p2[i]));
	}
	for (i=0; i<11; i++)
	{
		fscanf(f1, "%d", &jogado2[i]);
	}
	fscanf(f1,"%d", &pl2_shift);
	
	fscanf(f1,"%c", &new_line_eater);
	fscanf(f1,"%d", &active_player);
	fscanf(f1,"%c", &new_line_eater);
	
	for (i=0; i<11; i++)
	{
		fscanf(f1, "%d", &blocked_columns[i]);
	}
	
	fscanf(f1,"%c", &new_line_eater);
	fscanf(f1,"%d", &ab);
	fscanf(f1,"%c", &new_line_eater);
	fscanf(f1,"%d", &bb);
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &cb);
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &db);
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &eb);
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &fb);
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &gb);
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &hb);
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &ib);
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &jb);
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &kb);					
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &type_of_match);	
	fscanf(f1,"%c", &new_line_eater);
	for (i=0; i<4; i++)
	{
		fscanf(f1, "%d ", &dados[i]);
	}
	for (i=0; i<11; i++)
	{
		fscanf(f1, "%d ", &progresso[i]);
	}	
	fscanf(f1,"%d", &while_in_turn);
	fscanf(f1,"%c", &new_line_eater);	
	fscanf(f1,"%d", &fichas_livres);		
	fclose( f1 );
	
	main_screen_loaded(p1, p2, jogado1, jogado2, pl1_shift, pl2_shift, active_player, blocked_columns, &ab, &bb, &cb, &db, &eb, &fb, &gb, &hb, &ib, &jb, &kb, type_of_match, dados, progresso, &while_in_turn, fichas_livres);
}



#endif
