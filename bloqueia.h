#ifndef _BLOQUEIA_
#define _BLOQUEIA_
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include "lab.h"
#include "agrupamento_dados.h"

int _bloqueia (int jogado1[11], int jogado2[11], int topo [11], int blocked_columns[11], int *ab, int *bb, int *cb, int *db, int *eb, int *fb, int *gb, int *hb, int *ib, int *jb, int *kb, int m[3][2], int fichas_livres, int progresso[11], int percurso [11], char p1[59], char p2[59], int pl1_shift, int pl2_shift, int active_player, int *denier1, int *denier2, int *denier3)
{
	int l;

	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
				*ab = l+2;
				gotoxy(2,47);
		}
	}
	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
			if (l != *ab-2)
			{
				*bb = l+2;
				gotoxy(2,48);
			}
		}
	}
	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
			if ((l!= *ab-2) && (l != *bb-2))
			{
				*cb = l+2;
				gotoxy(2,49);
			}
		}
	}
	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
			if((l != *ab-2) && (l != *bb-2) && (l != *cb-2))
			{
				*db = l+2;
				gotoxy(2,50);
			}
		}
	}
	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
			if((l != *ab-2) && (l != *bb-2) && (l != *cb-2) && (l != *db-2))
			{
				*eb = l+2;
				gotoxy(2,51);
			}
		}
	}
	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
			if ((l != *ab-2) && (l != *bb-2) && (l != *cb-2) && (l != *db-2) && (l != *eb-2))
			{
				*fb = l+2;
				gotoxy(2,52);
			}
		}
	}
	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
			if((l != *ab-2) && (l != *bb-2) && (l != *cb-2) && (l != *db-2) && (l != *eb-2) && (l != *fb-2))
			{
				*gb = l+2;
				gotoxy(2,53);
			}
		}
	}
	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
			if ((l != *ab-2) && (l != *bb-2) && (l != *cb-2) && (l != *db-2) && (l != *eb-2) && (l != *fb-2) && (l != *gb-2))
			{
				*hb = l+2;
				gotoxy(2,54);
			}
		}
	}
	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
			if ((l != *ab-2) && (l != *bb-2) && (l != *cb-2) && (l != *db-2) && (l != *eb-2) && (l != *fb-2) && (l != *gb-2) && (l != *hb-2))
			{
				*ib = l+2;
				gotoxy(2,55);
			}
		}
	}
	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
			if ((l != *ab-2) && (l != *bb-2) && (l != *cb-2) && (l != *db-2) && (l != *eb-2) && (l != *fb-2) && (l != *gb-2) && (l != *hb-2) && (l != *ib-2))
			{
				*jb = l+2;
				gotoxy(2,56);
			}
		}
	}
	for (l=0; l<11; l++)
	{
		if ((jogado1[l] == topo[l]) || (jogado2[l] == topo[l]))
		{
			if ((l != *ab-2) && (l != *bb-2) && (l != *cb-2) && (l != *db-2) && (l != *eb-2) && (l != *fb-2) && (l != *gb-2) && (l != *hb-2) && (l != *ib-2) && (l != *jb-2))
			{
				*kb = l+2;
				gotoxy(2,57);
			}
		}
	}
}

#endif
