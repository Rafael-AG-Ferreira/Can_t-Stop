#ifndef _P_1_		//protectes from multiple including...
#define _P_1_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include <dos.h>
#include <windows.h>
#include <MMsystem.h>
									#include "lab.h"
									#include "dados.h"
									#include "saved_game.h"
									#include "main_game_screen.h"


void p_1()
{

	do
	{
	
			switch (escolha)
			{
				case ('j'):
					gotoxy(112,28);
					printf("You have chosen J");
					
					progresso[combinar_dados[0][0]-2]++;
					progresso[combinar_dados[0][1]-2]++;
					
					see_vetor(progresso, 11);
					
					v_choice = 1;
					break;
				
				
				case ('k'):
					gotoxy(112,28);
					printf("You have chosen K");
					
					
					progresso[combinar_dados[1][0]-2]++;
					progresso[combinar_dados[1][1]-2]++;
					
					
					
					
					v_choice = 1;
					break;
					
				case ('l'):
					gotoxy(112,28);
					printf("You have chosen L");
					
					
					progresso[combinar_dados[2][0]-2]++;
					progresso[combinar_dados[2][1]-2]++;
					
					
					
					v_choice = 1;
					break;
																	
																case ('m'):
																	gotoxy(112,28);
																	printf("You have chosen M");
																	v_choice = 1;
																	break;
																	
																case ('n'):
																	gotoxy(112,28);
																	printf("You have chosen N");
																	v_choice = 1;
																	break;
																	
																case ('o'):
																	gotoxy(112,28);
																	printf("You have chosen O");
																	v_choice = 1;
																	break;		
			}
	}
	while (!v_choice);
	
	
	
	
	
	
}


#endif
