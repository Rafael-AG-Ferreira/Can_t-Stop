#ifndef _DADOS_	
#define _DADOS_
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include "lab.h"
#include "main_game_screen.h"
#include "bloqueia.h"

int aleatorio(int a, int b)
{
	return (rand() % (b - a + 1)) + a;
}

void lancar_dados(int dados[4])
{
	int k=0;
	for (k = 0; k <= 3; k++)
	{
		dados[k] = aleatorio(1, 6);
	}
}

void see_vetor(int v[], int dim)
{
	int k;
	for (k = 1; k < (dim+1); k++)
	{
		gotoxy(110+(25*(k-1)),11);
		printf("Dice #%d-> %d", k, v[k-1]);
	}
}

void see_matrix(int m[3][2], int free_chips_left, int ab, int bb, int cb, int db, int eb, int fb, int gb, int hb, int ib, int jb, int kb)
{
	int i, j;
	
	if (free_chips_left > 1)
	{
		for (i = 0; i <= 2; i++)
		{
				
	
			for (j = 0; j <= 1; j++)
			{
				if ((m[i][j] == ab) || (m[i][j] == bb) || (m[i][j] == cb) || (m[i][j] == db) || (m[i][j] == eb) || (m[i][j] == fb) || (m[i][j] == gb) || (m[i][j] == hb) || (m[i][j] == ib) || (m[i][j] == jb) || (m[i][j] == kb))
				{	
					setColor(7,7);
					showRectAt(122, (20+i*2), 1, 0);
					resetColor();
				}
				else if ((m[i][j] != ab) || (m[i][j] != bb) || (m[i][j] != cb) || (m[i][j] != db) || (m[i][j] != eb) || (m[i][j] != fb) || (m[i][j] != gb) || (m[i][j] != hb) || (m[i][j] != ib) || (m[i][j] != jb) || (m[i][j] != kb))
				{
					gotoxy(122+(j*8),(20+i*2));
					printf("%d\t  ", m[i][j]);
				}
			}
			gotoxy(112,(20+i*2));
			printf("Climb on");
			
			gotoxy(125,(20+i*2));
			printf("and");
		}
			setColor(8,0);
			gotoxy(133,20);
			printf("Press (Q)");
			gotoxy(133,22);
			printf("Press (W)");
			gotoxy(133,24);
			printf("Press (E)");
			resetColor();
	}

	
	if (free_chips_left == 1)
	{
		for (i = 0; i <= 2; i++)
		{
			gotoxy(112,(20+i*2));
	
			for (j = 0; j < 1; j++)
			{
				if ((m[i][j] != (ab+2)) && (m[i][j] != (bb+2)) && (m[i][j] != (cb+2)) && (m[i][j] != (db+2)) && (m[i][j] != (eb+2)) && (m[i][j] != (fb+2)) && (m[i][j] != (gb+2)) && (m[i][j] != (hb+2)) && (m[i][j] != (ib+2)) && (m[i][j] != (jb+2)))
				{
					printf("Climb on %d  ", m[i][j]);
				}
			}
		}
		
		for (i = 0; i <= 2; i++)
		{
			gotoxy(163,(20+i*2));
	
			j=1;
			if ((m[i][j] != (ab+2)) && (m[i][j] != (bb+2)) && (m[i][j] != (cb+2)) && (m[i][j] != (db+2)) && (m[i][j] != (eb+2)) && (m[i][j] != (fb+2)) && (m[i][j] != (gb+2)) && (m[i][j] != (hb+2)) && (m[i][j] != (ib+2)) && (m[i][j] != (jb+2)))
			{
				printf("Climb on %d  ", m[i][j]);
			}
		}
		setColor(8,0);
		gotoxy(133,20);
		printf("Press (A)");
		gotoxy(133,22);
		printf("Press (S)");
		gotoxy(133,24);
		printf("Press (D)");
		gotoxy(181,20);
		printf("Press (Z)");
		gotoxy(181,22);
		printf("Press (X)");
		gotoxy(181,24);
		printf("Press (C)");																	
		resetColor();
	}
}

void combinar_dados(int dados[4], int comb_dados[3][2])
{								
	comb_dados[0][0] = dados[0] + dados[1]; //A+B			
	comb_dados[0][1] = dados[2] + dados[3]; //C+D	
											//		   
	comb_dados[1][0] = dados[0] + dados[2]; //A+C				
	comb_dados[1][1] = dados[1] + dados[3]; //B+D			
											//				
	comb_dados[2][0] = dados[0] + dados[3]; //A+D			
	comb_dados[2][1] = dados[1] + dados[2]; //B+C
	
	int i=0, j=0;
	for (i=0; i<4; i++)
	{
		switch (dados[i])
		{
		char point;
			case (1):
				point=254;
				setColor(8,0);
				showDoubleRectAt(112+(25*i),12,6,3);
				gotoxy(115+(25*i),14);
				setColor(3,0);
				setlocale(LC_ALL, "C");
				printf("%c", point);
				resetColor();
				break;
			case (2):
				point=254;
				setColor(8,0);
				showDoubleRectAt(112+(25*i),12,6,3);
				gotoxy(115+(25*i),13);
				setColor(3,0);
				setlocale(LC_ALL, "C");
				printf("%c", point);
				gotoxy(115+(25*i),14);
				printf("%c", point);
				resetColor();
				break;
			case (3):
				point=254;
				setColor(8,0);
				showDoubleRectAt(112+(25*i),12,6,3);
				gotoxy(114+(25*i),13);
				setColor(3,0);
				setlocale(LC_ALL, "C");
				printf("%c", point);
				gotoxy(116+(25*i),13);
				printf("%c", point);
				gotoxy(115+(25*i),14);
				printf("%c", point);
				resetColor();
				break;
			case (4):
				point=254;
				setColor(8,0);
				showDoubleRectAt(112+(25*i),12,6,3);
				gotoxy(114+(25*i),13);
				setColor(3,0);
				setlocale(LC_ALL, "C");
				printf("%c", point);
				gotoxy(116+(25*i),13);
				printf("%c", point);
				gotoxy(114+(25*i),14);
				printf("%c", point);
				gotoxy(116+(25*i),14);
				printf("%c", point);
				resetColor();
				break;
			case (5):
				point=254;
				setColor(8,0);
				showDoubleRectAt(112+(25*i),12,6,3);
				gotoxy(113+(25*i),13);
				setColor(3,0);
				setlocale(LC_ALL, "C");
				printf("%c", point);
				gotoxy(115+(25*i),13);
				printf("%c", point);
				gotoxy(117+(25*i),13);
				printf("%c", point);
				gotoxy(114+(25*i),14);
				printf("%c", point);
				gotoxy(116+(25*i),14);
				printf("%c", point);
				resetColor();
				break;
			case (6):
				point=254;
				setColor(8,0);
				showDoubleRectAt(112+(25*i),12,6,3);
				gotoxy(113+(25*i),13);
				setColor(3,0);
				setlocale(LC_ALL, "C");
				printf("%c", point);
				gotoxy(115+(25*i),13);
				printf("%c", point);
				gotoxy(117+(25*i),13);
				printf("%c", point);
				gotoxy(113+(25*i),14);
				printf("%c", point);
				gotoxy(115+(25*i),14);
				printf("%c", point);
				gotoxy(117+(25*i),14);
				printf("%c", point);
				resetColor();
				break;
			
		}
	}																			
}

#endif
