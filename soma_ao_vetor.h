#ifndef _SOMA_AO_VETOR_
#define _SOMA_AO_VETOR_
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include "lab.h"
#include "main_game_screen.h"

int dados_3fichas (int progresso[11], int comb_dados[3][2], int denier1, int denier2, int denier3, int denier4, int denier5, int denier6, int denier7, int denier8, int denier9)
{
	int v_choice = 0;
	char escolha;
		
	gotoxy(112,35);
	printf("Your Choice Is: ");
	
	do				
	{
		gotoxy(128,35);
		scanf("%c", &escolha);
		escolha = tolower(escolha);
		fflush(stdin);
	
			switch (denier1)
			{
				case (1):
					switch (escolha)
					{
						case ('q'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][0]-2]++;
								progresso[comb_dados[0][1]-2]++;
								v_choice = 1;
								break;
					}
				case (0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();							
			}

			switch (denier2)
			{			
				case (1):
					switch (escolha)
					{
						case ('w'):					
								apagar_progresso(progresso);
								progresso[comb_dados[1][0]-2]++;
								progresso[comb_dados[1][1]-2]++;
								v_choice = 1;
								break;
					}
				case (0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}
			
			switch (denier3)
			{			
				case (1):
					switch (escolha)
					{
						case ('e'):
								apagar_progresso(progresso);
								progresso[comb_dados[2][0]-2]++;
								progresso[comb_dados[2][1]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}
			switch (denier4)
			{
				case (1):
					switch(escolha)
					{			
						case ('a'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][0]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}			
			
			switch (denier5)
			{
				case (1):
					switch(escolha)
					{								
						case ('s'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][1]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}

			switch (denier6)
			{
				case (1):
					switch(escolha)
					{						
						case ('d'):
							apagar_progresso(progresso);
							progresso[comb_dados[1][0]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}

			switch (denier7)
			{
				case (1):
					switch(escolha)
					{								
						case ('z'):
							apagar_progresso(progresso);
							progresso[comb_dados[1][1]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}							
							
			switch (denier8)
			{
				case (1):
					switch(escolha)
					{								
						case ('x'):
							apagar_progresso(progresso);
							progresso[comb_dados[2][0]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}	
			
			
			switch (denier9)
			{
				case (1):
					switch(escolha)
					{				
						case ('c'):
							apagar_progresso(progresso);
							progresso[comb_dados[2][1]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}							
	}
	while (!v_choice);
	
	gotoxy(128,35);
	printf("%c", escolha);	
}

int dados_2fichas (int progresso[11], int comb_dados[3][2], int denier1, int denier2, int denier3, int denier4, int denier5, int denier6, int denier7, int denier8, int denier9)
{
	int v_choice = 0;
	char escolha;
		
	gotoxy(112,35);
	printf("Your Choice Is: ");
	
	do				
	{
		gotoxy(128,35);
		scanf("%c", &escolha);
		escolha = tolower(escolha);
		fflush(stdin);
	
			switch (denier1)
			{
				case (1):
					switch (escolha)
					{
						case ('q'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][0]-2]++;
								progresso[comb_dados[0][1]-2]++;
								v_choice = 1;
								break;
					}
				case (0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();							
			}

			switch (denier2)
			{			
				case (1):
					switch (escolha)
					{
						case ('w'):					
								apagar_progresso(progresso);
								progresso[comb_dados[1][0]-2]++;
								progresso[comb_dados[1][1]-2]++;
								v_choice = 1;
								break;
					}
				case (0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}
			
			switch (denier3)
			{			
				case (1):
					switch (escolha)
					{
						case ('e'):
								apagar_progresso(progresso);
								progresso[comb_dados[2][0]-2]++;
								progresso[comb_dados[2][1]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}
			switch (denier4)
			{
				case (1):
					switch(escolha)
					{			
						case ('a'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][0]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}			
			
			switch (denier5)
			{
				case (1):
					switch(escolha)
					{								
						case ('s'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][1]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}

			switch (denier6)
			{
				case (1):
					switch(escolha)
					{						
						case ('d'):
							apagar_progresso(progresso);
							progresso[comb_dados[1][0]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}

			switch (denier7)
			{
				case (1):
					switch(escolha)
					{								
						case ('z'):
							apagar_progresso(progresso);
							progresso[comb_dados[1][1]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}							
							
			switch (denier8)
			{
				case (1):
					switch(escolha)
					{								
						case ('x'):
							apagar_progresso(progresso);
							progresso[comb_dados[2][0]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}	
			
			
			switch (denier9)
			{
				case (1):
					switch(escolha)
					{				
						case ('c'):
							apagar_progresso(progresso);
							progresso[comb_dados[2][1]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}							
	}
	while (!v_choice);
	
	gotoxy(128,35);
	printf("%c", escolha);
}

int dados_1ficha (int progresso[11], int comb_dados[3][2], int denier1, int denier2, int denier3, int denier4, int denier5, int denier6, int denier7, int denier8, int denier9)
{
	int v_choice = 0;
	char escolha;
		
	gotoxy(112,35);
	printf("Your Choice Is: ");
	
	do				
	{
		gotoxy(128,35);
		scanf("%c", &escolha);
		gotoxy(128,35);
		printf("%c", escolha);
		escolha = tolower(escolha);
		fflush(stdin);
	
			switch (denier1)
			{
				case (1):
					switch (escolha)
					{
						case ('q'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][0]-2]++;
								progresso[comb_dados[0][1]-2]++;
								v_choice = 1;
								break;
					}
				case (0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();							
			}

			switch (denier2)
			{			
				case (1):
					switch (escolha)
					{
						case ('w'):					
								apagar_progresso(progresso);
								progresso[comb_dados[1][0]-2]++;
								progresso[comb_dados[1][1]-2]++;
								v_choice = 1;
								break;
					}
				case (0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}
			
			switch (denier3)
			{			
				case (1):
					switch (escolha)
					{
						case ('e'):
								apagar_progresso(progresso);
								progresso[comb_dados[2][0]-2]++;
								progresso[comb_dados[2][1]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}
			switch (denier4)
			{
				case (1):
					switch(escolha)
					{			
						case ('a'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][0]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}			
			
			switch (denier5)
			{
				case (1):
					switch(escolha)
					{								
						case ('s'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][1]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}

			switch (denier6)
			{
				case (1):
					switch(escolha)
					{						
						case ('d'):
							apagar_progresso(progresso);
							progresso[comb_dados[1][0]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}

			switch (denier7)
			{
				case (1):
					switch(escolha)
					{								
						case ('z'):
							apagar_progresso(progresso);
							progresso[comb_dados[1][1]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}							
							
			switch (denier8)
			{
				case (1):
					switch(escolha)
					{								
						case ('x'):
							apagar_progresso(progresso);
							progresso[comb_dados[2][0]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}	
			
			
			switch (denier9)
			{
				case (1):
					switch(escolha)
					{				
						case ('c'):
							apagar_progresso(progresso);
							progresso[comb_dados[2][1]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}							
	}
	while (!v_choice);
}

int dados_0fichas (int progresso[11], int comb_dados[3][2], int denier1, int denier2, int denier3, int denier4, int denier5, int denier6, int denier7, int denier8, int denier9)
{
	int v_choice = 0;
	char escolha;
		
	gotoxy(112,35);
	printf("Your Choice Is: ");
	
	do				
	{
		gotoxy(128,35);
		scanf("%c", &escolha);
		gotoxy(128,35);
		printf("%c", escolha);
		escolha = tolower(escolha);
		fflush(stdin);
	
			switch (denier1)
			{
				case (1):
					switch (escolha)
					{
						case ('q'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][0]-2]++;
								progresso[comb_dados[0][1]-2]++;
								v_choice = 1;
								break;
					}
				case (0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();							
			}

			switch (denier2)
			{			
				case (1):
					switch (escolha)
					{
						case ('w'):					
								apagar_progresso(progresso);
								progresso[comb_dados[1][0]-2]++;
								progresso[comb_dados[1][1]-2]++;
								v_choice = 1;
								break;
					}
				case (0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}
			
			switch (denier3)
			{			
				case (1):
					switch (escolha)
					{
						case ('e'):
								apagar_progresso(progresso);
								progresso[comb_dados[2][0]-2]++;
								progresso[comb_dados[2][1]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}
			switch (denier4)
			{
				case (1):
					switch(escolha)
					{			
						case ('a'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][0]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}			
			
			switch (denier5)
			{
				case (1):
					switch(escolha)
					{								
						case ('s'):
								apagar_progresso(progresso);
								progresso[comb_dados[0][1]-2]++;
								v_choice = 1;
								break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}

			switch (denier6)
			{
				case (1):
					switch(escolha)
					{						
						case ('d'):
							apagar_progresso(progresso);
							progresso[comb_dados[1][0]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}

			switch (denier7)
			{
				case (1):
					switch(escolha)
					{								
						case ('z'):
							apagar_progresso(progresso);
							progresso[comb_dados[1][1]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}							
							
			switch (denier8)
			{
				case (1):
					switch(escolha)
					{								
						case ('x'):
							apagar_progresso(progresso);
							progresso[comb_dados[2][0]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}	
			
			
			switch (denier9)
			{
				case (1):
					switch(escolha)
					{				
						case ('c'):
							apagar_progresso(progresso);
							progresso[comb_dados[2][1]-2]++;
							v_choice = 1;
							break;
					}
				case(0):
					setColor(0,0);
					showRectAt(128,35,67,0);
					resetColor();								
			}							
	}
	while (!v_choice);
}
#endif
