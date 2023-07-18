#ifndef _GAME_DESCRIPTION_	
#define _GAME_DESCRIPTION_	
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

void english_description()
{

	int percurso[11]={2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int topo[11]={3, 5, 7, 9, 11, 13, 11, 9, 7, 5, 3};
	int jogado1[11]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int jogado2[11]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int progresso[11]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i=0;

	tabuleiro (percurso, topo);
	
	setColor(15,0);
	showRectAt(0,0, 198, 58);
	showDoubleRectAt(110, 10, 85, 35);			
									gotoxy(165,57);
									setColor(0,0);
									system("pause");
									resetColor();
	gotoxy(118,11);	
	printf("In this Sid Sackson classic, players must press their luck with dice and"); 
	gotoxy(114,12);	
	printf("choose combinations tactically to close out three columns.");
									gotoxy(165,57);
									setColor(0,0);
									system("pause");
									resetColor();
	gotoxy(118,13);	
	printf("The board has one column for each possible total of two six-sided dice,");
	gotoxy(114,14);	
	printf("but the number of spaces in each column varies: the more probable a total,");
	gotoxy(114,15);
	printf("the more spaces in that column and the more rolls it takes to complete.");
	
									gotoxy(165,57);
									setColor(0,0);
									system("pause");
									resetColor();
	gotoxy(114,18);	
	printf("On their turn, a player rolls four dice and arranges them in duos:"); 
	gotoxy(118,20);	
	printf("Dice 1: ");
			gotoxy(126,20);
			setColor(2,0);
			printf("1");
			resetColor();
	gotoxy(118,21);	
	printf("Dice 2: ");
			gotoxy(126,21);
			setColor(3,0);
			printf("4");
			resetColor();
	gotoxy(118,22);
	printf("Dice 3: ");
			gotoxy(126,22);
			setColor(5,0);
			printf("5");
			resetColor();
	gotoxy(118,23);	
	printf("Dice 4: ");
			gotoxy(126,23);
			setColor(6,0);
			printf("6");
			resetColor();
									gotoxy(165,57);
									setColor(0,0);
									system("pause");
									resetColor();
	gotoxy(114,25);	
	printf("These values can result in the following combinations:"); 
	gotoxy(117,27);	
	printf(" +   and   +   to climb columns   and   .");			
	
	gotoxy(116,27);
	setColor(2,0);	
	printf("1");
	resetColor();
	
	gotoxy(120,27);
	setColor(3,0);	
	printf("4");
	resetColor();
	
	gotoxy(126,27);
	setColor(5,0);	
	printf("5");
	resetColor();
	
	gotoxy(130,27);
	setColor(6,0);	
	printf("6");
	resetColor();
	
	gotoxy(149,27);
	setColor(8,0);	
	printf("5");
	resetColor();
	setColor(8,8);
	showRectAt(36,44,1,0);
	
	gotoxy(155,27);
	setColor(8,0);	
	printf("11");										
	resetColor();													
	setColor(8,8);
	showRectAt(84,36,1,0);
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setColor(0,0);
	showRectAt(36,44,1,0);
	showRectAt(84,36,1,0);
	resetColor();
	
	gotoxy(117,28);	
	printf(" +   and   +   to climb columns   and   .");
	
	gotoxy(116,28);
	setColor(2,0);	
	printf("1");
	resetColor();
	
	gotoxy(120,28);
	setColor(5,0);	
	printf("5");
	resetColor();
	
	gotoxy(126,28);
	setColor(3,0);	
	printf("4");
	resetColor();
	
	gotoxy(130,28);
	setColor(6,0);	
	printf("6");
	resetColor();
	
	gotoxy(149,28);
	setColor(8,0);	
	printf("6");
	resetColor();
	setColor(8,8);
	showRectAt(44,48,1,0);
	
	gotoxy(155,28);
	setColor(8,0);	
	printf("10");
	resetColor();
	setColor(8,8);
	showRectAt(76,40,1,0);
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setColor(0,0);
	showRectAt(44,48,1,0);
	showRectAt(76,40,1,0);
	resetColor();
	gotoxy(117,29);	
	printf(" +   and   +   to climb columns   and   ."); 		
	gotoxy(116,29);
	setColor(2,0);	
	printf("1");
	resetColor();
	
	gotoxy(120,29);
	setColor(6,0);	
	printf("6");
	resetColor();
	
	gotoxy(126,29);
	setColor(3,0);	
	printf("4");
	resetColor();
	
	gotoxy(130,29);
	setColor(5,0);	
	printf("5");
	resetColor();
	
	gotoxy(149,29);
	setColor(8,0);	
	printf("7");
	resetColor();
	setColor(8,8);
	showRectAt(52,52,1,0);
	gotoxy(155,29);
	setColor(8,0);	
	printf("9");
	resetColor();
	setColor(8,8);
	showRectAt(68,44,1,0);															
	
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	resetColor();
	setColor(0,0);
	showRectAt(52,52,1,0);
	showRectAt(68,44,1,0);
	resetColor();
	gotoxy(118,31);	
	printf("The player places or advances progress markers in the open column(s)"); 
	gotoxy(114,32);	
	printf("associated with their chosen totals.");
	
	setColor(8,8);
	showRectAt(36,16,1,0);
	showRectAt(52,24,1,0);
	showRectAt(84,20,1,0);
	resetColor();
	gotoxy(118,33);	
	printf("Then chooses whether to roll again or end their turn and replace the");
	gotoxy(114,34);
	printf("progress markers with markers of their color.");
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setlocale(LC_ALL, "C");
	setColor(10,10);
	showRectAt(36,16,1,0);
	showRectAt(52,24,1,0);
	showRectAt(84,20,1,0);
	resetColor();
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setlocale(LC_ALL, "Portuguese");
	gotoxy(118,37);	
	printf("A player can only advance three different columns in a turn and cannot");
	gotoxy(114,38);	
	printf("advance a column which any player has closed out by reaching the end space.");
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setlocale(LC_ALL, "C");
	char down_arrow=25;												
	
	gotoxy(44,6);
	setColor(4,0);
	printf("%c%c", down_arrow, down_arrow);		
	
	i=0;
	for (i=0; i<11; i++)
	{
		setColor(4,4);
		showRectAt(44, 48-(4*i),1,0);
		resetColor();
	}																		
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	
	gotoxy(44,6);
	setColor(0,0);
	printf("%c%c", down_arrow, down_arrow);	
	
	i=0;
	for (i=0; i<11; i++)
	{
	setColor(0,0);
	showRectAt(44,48-(4*i),1,0);
	resetColor();
}
	
	resetColor();
	setlocale(LC_ALL, "Portuguese");
	gotoxy(118,41);	
	printf("If a roll doesn’t result in any legal plays, the turn ends with that turn’s");
	gotoxy(114,42);	
	printf("progress lost.");
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setlocale(LC_ALL, "C");
	setColor(0,0);
	showRectAt(36,16,1,0);
	showRectAt(52,24,1,0);
	showRectAt(84,20,1,0);
	resetColor();
	setlocale(LC_ALL, "C");														
	setColor(10,10);
	showRectAt(36,28,1,0);
	showRectAt(52,44,1,0);
	showRectAt(84,24,1,0);
	resetColor();
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	gotoxy(114,44);	
	printf("Good Luck!");
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	system("cls");
	}
	
	
void portuguese_description()
{
	
	int percurso[11]={2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int topo[11]={3, 5, 7, 9, 11, 13, 11, 9, 7, 5, 3};
	int jogado1[11]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int jogado2[11]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int progresso[11]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i=0;
		
	tabuleiro (percurso, topo);
	
	setColor(15,0);
	showRectAt(0,0, 198, 58);
	showDoubleRectAt(110, 10, 85, 35);
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	gotoxy(118,11);	
	printf("Neste clássico de Sid Sackson, os jogadores devem tentar a sua sorte com os"); 
	gotoxy(114,12);	
	printf("dados e escolher combinações para preencher/fechar três colunas.");
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	gotoxy(114,13);	
	printf("O tabuleiro tem uma coluna para cada total possível do lançamento de dois dados,");
	gotoxy(114,14);	
	printf("mas o número de espaços/casas em cada coluna varia: quanto mais provável for o ");
	gotoxy(114,15);
	printf("total, mais espaços/casas existem nessa coluna e mais lançamentos são");
	gotoxy(114,16);
	printf("necessários para a completar.");
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	gotoxy(114,18);	
	printf("Assim, são lançados quatro dados e são organizados em duplas:"); 
	gotoxy(118,20);	
	printf("Dado 1: ");
	gotoxy(126,20);
	setColor(2,0);
	printf("1");
	resetColor();
	gotoxy(118,21);	
	printf("Dado 2: ");
	gotoxy(126,21);
	setColor(3,0);
	printf("4");
	resetColor();
	gotoxy(118,22);
	printf("Dado 3: ");
	gotoxy(126,22);
	setColor(5,0);
	printf("5");
	resetColor();
	gotoxy(118,23);	
	printf("Dado 4: ");
	gotoxy(126,23);
	setColor(6,0);
	printf("6");
	resetColor();
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	gotoxy(114,25);	
	printf("Estes valores podem resultar nas seguintes combinações:"); 
	gotoxy(118,27);	
	printf("  +   e   +   para subir nas colunas   e   .");		
	
	gotoxy(118,27);
	setColor(2,0);	
	printf("1");
	resetColor();
	
	gotoxy(122,27);
	setColor(3,0);	
	printf("4");
	resetColor();
	
	gotoxy(126,27);
	setColor(5,0);	
	printf("5");
	resetColor();
	
	gotoxy(130,27);
	setColor(6,0);	
	printf("6");
	resetColor();
	
	gotoxy(155,27);
	setColor(8,0);	
	printf("5");
	resetColor();
	setColor(8,8);
	showRectAt(36,44,1,0);
	
	gotoxy(159,27);
	setColor(8,0);	
	printf("11");										
	resetColor();													
	setColor(8,8);
	showRectAt(84,36,1,0);
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setColor(0,0);
	showRectAt(36,44,1,0);
	showRectAt(84,36,1,0);
	resetColor();
	
	gotoxy(118,28);	
	printf("  +   e   +   para subir nas colunas   e   .");				
	
	gotoxy(118,28);
	setColor(2,0);	
	printf("1");
	resetColor();
	
	gotoxy(122,28);
	setColor(5,0);	
	printf("5");
	resetColor();
	
	gotoxy(126,28);
	setColor(3,0);	
	printf("4");
	resetColor();
	
	gotoxy(130,28);
	setColor(6,0);	
	printf("6");
	resetColor();
	
	gotoxy(155,28);
	setColor(8,0);	
	printf("6");
	resetColor();
	setColor(8,8);
	showRectAt(44,48,1,0);
	
	gotoxy(159,28);
	setColor(8,0);	
	printf("10");
	resetColor();
	setColor(8,8);
	showRectAt(76,40,1,0);
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setColor(0,0);
	showRectAt(44,48,1,0);
	showRectAt(76,40,1,0);
	resetColor();
	gotoxy(118,29);	
	printf("  +   e   +   para subir nas colunas   e  ."); 				
	gotoxy(118,29);
	setColor(2,0);	
	printf("1");
	resetColor();
	
	gotoxy(122,29);
	setColor(6,0);	
	printf("6");
	resetColor();
	
	gotoxy(126,29);
	setColor(3,0);	
	printf("4");
	resetColor();
	
	gotoxy(130,29);
	setColor(5,0);	
	printf("5");
	resetColor();
	
	
	gotoxy(155,29);
	setColor(8,0);	
	printf("7");
	resetColor();
	setColor(8,8);
	showRectAt(52,52,1,0);
	gotoxy(159,29);
	setColor(8,0);	
	printf("9");
	resetColor();
	setColor(8,8);
	showRectAt(68,44,1,0);															
	
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	resetColor();
	setColor(0,0);
	showRectAt(52,52,1,0);
	showRectAt(68,44,1,0);
	resetColor();
	
	setlocale(LC_ALL, "Portuguese");
	gotoxy(118,31);	
	printf("O jogador posiciona, ou avança, os marcadores de progresso na(s)"); 
	gotoxy(114,32);	
	printf("coluna(s) aberta(s) associada(s) aos totais por si escolhidos.");
	
	setColor(8,8);
	showRectAt(36,16,1,0);
	showRectAt(52,24,1,0);
	showRectAt(84,20,1,0);
	resetColor();
	
	setlocale(LC_ALL, "Portuguese");
	gotoxy(114,33);	
	printf("Após isso, o jodador escolhe se vai lançar os dados novamente");
	gotoxy(114,34);
	printf("ou se vai finalizar seu turno e substituir os marcadores");
	gotoxy(114,35);
	printf("de progresso por marcadores da sua cor.");
	
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setlocale(LC_ALL, "C");
	setColor(10,10);
	showRectAt(36,16,1,0);
	showRectAt(52,24,1,0);
	showRectAt(84,20,1,0);
	resetColor();
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setlocale(LC_ALL, "Portuguese");
	gotoxy(114,37);	
	printf("Um jogador só pode avançar em três colunas diferentes por cada turno");
	gotoxy(114,38);	
	printf("e não pode avançar numa coluna que qualquer outro jogador já tenha fechado");
	gotoxy(114,39);
	printf("(atingido e fechado no topo).");
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	setlocale(LC_ALL, "C");
	
	char down_arrow=25;												
	
	gotoxy(44,6);
	setColor(4,0);
	printf("%c%c", down_arrow, down_arrow);		
	
	i=0;
	for (i=0; i<11; i++)
	{
	setColor(4,4);
	showRectAt(44, 48-(4*i),1,0);
	resetColor();
	}																		
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	
	gotoxy(44,6);
	setColor(0,0);
	printf("%c%c", down_arrow, down_arrow);	
	
	i=0;
	for (i=0; i<11; i++)
	{
		setColor(0,0);
		showRectAt(44,48-(4*i),1,0);
		resetColor();
	}
	
	resetColor();
	setlocale(LC_ALL, "Portuguese");
	gotoxy(118,41);	
	printf("Se uma determinada combinação de dados não resultar em nenhuma jogada");
	gotoxy(114,42);	
	printf("possível, o turno termina com a perda do progresso naquele mesmo turno.");
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	
	setlocale(LC_ALL, "C");
	setColor(0,0);
	showRectAt(36,16,1,0);
	showRectAt(52,24,1,0);
	showRectAt(84,20,1,0);
	resetColor();
	
	setlocale(LC_ALL, "C");														
	setColor(10,10);
	showRectAt(36,28,1,0);
	showRectAt(52,44,1,0);
	showRectAt(84,24,1,0);
	resetColor();
	
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	
	gotoxy(114,44);	
	printf("Boa Sorte!");
	gotoxy(165,57);
	setColor(0,0);
	system("pause");
	resetColor();
	system("cls");
}
#endif
