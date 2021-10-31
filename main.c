#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

#define LOAD 1500
#define ALTURA 15
#define COMP 115


int menu()
{

	char options;

	printf("    	BEM VINDO AO XXXX\n\n");

	printf("    	O QUE DESEJAS?\n\n");
	printf("	1 - Jogar\n");
	printf("	2 - Placar\n");
	printf("	3 - Instruções\n");
	printf("	4 - Créditos\n");
	printf("	5 - Sair dessa bosta\n\n");
	printf("	8=D  ");

	options = getch();

	switch (options)
	{
	case '1':
    	printf("\n\n	Você selecionou Jogar\n\n");
    	Sleep(LOAD);
    	system("cls");
    	system("color 0F");
    	jogo();
    	break;

	case '2':
    	printf("\n\n	Você selecionou Placar\n\n");
    	Sleep(LOAD);
    	break;

	case '3':
    	printf("\n\n	Você selecionou Instruções\n\n");
    	Sleep(LOAD);
    	system("cls");
    	//instrucoes();
    	break;

	case '4':
    	printf("\n\n	Você selecionou Créditos\n\n");
    	Sleep(LOAD);
    	system("cls");
    	creditos();

    	break;

	case '5':
    	printf("\n\n	Tchau seu Zé Buceta\n\n");
    	return 0;

	default:
    	printf("\n Opção inválida, utilize 1, 2, 3, 4 ou 5");
	}
	return 1;
}


int main()
{
    setlocale(LC_ALL, "portuguese");

    while(menu())
    {

        printf("\n\nSeja mais gentil Senpai-kun");
        fflush(stdin);
        getchar();
        system("color 07");
        system("cls");
    }

}

int creditos()
{


    printf("                                  Obrigado por jogar o XXX \n                                  Nossa equipe agradece :D");

    system("color 06");

    Sleep (1000);

    printf("\n\n Programador(es):                       Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (1000);

    printf("\n\n Roteirista(s):                         Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (1000);

    printf("\n\n Designer(s):                           Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (1000);

    printf("\n\n Designer(s) de Personagens:            Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (1000);

    printf("\n\n Game Tester(s):                        Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (1000);

    printf("\n\n Dublador(es):                          Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (1000);

    printf("\n\n Engenheiro(s) de Som:                  Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (1000);

    printf("\n\n Musicita(s):                           Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (1000);

    printf("\n\n Diretor(es):                           Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (1000);

    printf("\n\n\n 	                AGRADECIMENTOS ESPECIAIS: Equipe The Wallers\n\n");


    printf("\n Especialmente >                        Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");


    return 1;
}

int jogo()
{

	char movimento;
	int playerx = 3, playery = 3;
	int descida = 1;

	printf("\n\n");
	for ( ; ; )
	{
    	system ("CLS");
    	for(int h = 1; h <= ALTURA; h++)
    	{
        	printf("|");

        	for(int c = 1; c <= COMP; c++)
        	{
            	if(h == 1 || h == ALTURA)
            	{
                	printf("-");
            	}
            	else if(playerx == c && playery == h)
            	{
                	printf("§");
            	}
            	else if(descida == 2 && playerx == c && playery == h + 1)
                {
                    printf("|");
                }
                else if(descida == 3 && playerx == c && (playery == h + 2 || playery == h + 1))
                {
                    printf("|");
                }
                else if(descida == 4 && playerx == c && (playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    printf("|");
                }
                else if(descida == 5 && playerx == c && (playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    printf("|");
                }
                else if(descida == 6 && playerx == c && (playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    printf("|");
                }
                else if(descida == 7 && playerx == c && (playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    printf("|");
                }
                else if(descida == 8 && playerx == c && (playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    printf("|");
                }
                else if(descida == 9 && playerx == c && (playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    printf("|");
                }
                else if(descida == 10 && playerx == c && (playery == h + 9 || playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    printf("|");
                }
                else if(descida == 11 && playerx == c && (playery == h + 10 || playery == h + 9 || playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    printf("|");
                }
                else if(descida == 12 && playerx == c && (playery == h + 11 || playery == h + 10 || playery == h + 9 || playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    printf("|");
                }
            	else if(c == 112 && h == 8)
                {
                    printf("X");
                }
            	else
            	{
                	printf(" ");
            	}

        	}

        	printf("|\n");

    	}
    	printf("\n\n");

    	movimento = getch();

    	switch(movimento)
    	{
    	case 'w':
        case 'W':
        	playery -= 1;
        	descida--;
        	if (playery < 2)
        	{
            	playery = 2;
            	descida++;
        	}
        	break;

    	case 's':
        case 'S':
        	playery += 1;
        	descida++;
        	if (playery >= ALTURA - 1)
        	{
            	playery = ALTURA - 1;
                descida = 12;
        	}

        	break;

    	case 'a':
        case 'A':
        	playerx -= 1;
        	if (playerx < 1)
        	{
            	playerx = 1;
        	}
        	break;

    	case 'd':
        case 'D':
        	playerx += 1;
        	if (playerx >= COMP)
        	{
            	playerx = COMP;
        	}
        	break;

    	default:
        	printf("Joga qnem gente");
    	}
	}
}




