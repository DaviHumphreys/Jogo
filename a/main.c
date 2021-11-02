#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#define LOAD 1500
#define ALTURA 15
#define COMP 115


void paredepiscar(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int menu()
{

    char options;

    printf("    	BEM VINDO AO XXXX\n\n");

    printf("    	O QUE DESEJAS?\n\n");
    printf("	1 - Jogar\n");
    printf("	2 - Placar\n");
    printf("	3 - Instru��es\n");
    printf("	4 - Cr�ditos\n");
    printf("	5 - Sair dessa bosta\n\n");
    printf("	8=D  ");

    options = getch();

    switch (options)
    {
    case '1':
        printf("\n\n	Voc� selecionou Jogar\n\n");
        Sleep(LOAD);
        system("cls");
        system("color 0F");
        jogo();
        break;

    case '2':
        printf("\n\n	Voc� selecionou Placar\n\n");
        Sleep(LOAD);
        break;

    case '3':
        printf("\n\n	Voc� selecionou Instru��es\n\n");
        Sleep(LOAD);
        system("cls");
        //instrucoes();
        break;

    case '4':
        printf("\n\n	Voc� selecionou Cr�ditos\n\n");
        Sleep(LOAD);
        system("cls");
        creditos();

        break;

    case '5':
        printf("\n\n	Tchau seu Z� Buceta\n\n");
        return 0;

    default:
        printf("\n Op��o inv�lida, utilize 1, 2, 3, 4 ou 5");
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


    printf("\n Especialmente >                        Gabriel Queir�z Ven�ncio");


    return 1;
}

int jogo()
{

    char movimento;
    int playerx = 3, playery = 2;
    int descida = 1;

    printf("\n\n");
    for(int h = 0; h < ALTURA; h++)
    {

        for(int c = 0; c < COMP; c++)
        {
            if (c == 0 || c == COMP-1)
            {
                paredepiscar (c, h);
                printf("|");
            }

            else if (h == 0 || h == ALTURA-1)
            {
                paredepiscar (c, h);
                printf("-");
            }
        }
    }

    for ( ; ; )
    {

        for(int h = 0; h < ALTURA; h++)
        {

            for(int c = 0; c < COMP; c++)
            {
                if(playerx == c && playery == h)
                {
                    paredepiscar (c, h);
                    printf("�");
                }
                else if(descida == 2 && playerx == c && playery == h + 1)
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(descida == 3 && playerx == c && (playery == h + 2 || playery == h + 1))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(descida == 4 && playerx == c && (playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(descida == 5 && playerx == c && (playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(descida == 6 && playerx == c && (playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(descida == 7 && playerx == c && (playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(descida == 8 && playerx == c && (playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(descida == 9 && playerx == c && (playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(descida == 10 && playerx == c && (playery == h + 9 || playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(descida == 11 && playerx == c && (playery == h + 10 || playery == h + 9 || playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(descida == 12 && playerx == c && (playery == h + 11 || playery == h + 10 || playery == h + 9 || playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if(c == 112 && h == 8)
                {
                    paredepiscar (c, h);
                    printf("X");
                }
            }

        }
        printf("\n\n");

        movimento = getch();

        switch(movimento)
        {
        case 'w':
        case 'W':
            paredepiscar (1, 15);
            printf ("               ");
            playery -= 1;
            descida--;
            if (playery < 1)
            {
                playery = 1;
                descida++;
            }
            else
            {
                paredepiscar (playerx, playery+1);
                printf (" ");
            }
            break;

        case 's':
        case 'S':
            paredepiscar (1, 15);
            printf ("               ");
            playery += 1;
            descida++;
            if (playery >= ALTURA - 2)
            {
                playery = ALTURA - 2;
                descida = 12;
            }
            else
            {
                paredepiscar (playerx, playery-1);
                printf (" ");
            }
            break;

        case 'a':
        case 'A':
            paredepiscar (1, 15);
            printf ("               ");
            playerx -= 1;

            if (playerx < 1)
            {
                playerx = 1;
            }
            else
            {
                for (int a = 1; a <= descida+1; a++)
                {
                    paredepiscar (playerx+1, a);
                    printf (" ");
                }
            }
            break;

        case 'd':
        case 'D':
            paredepiscar (1, 15);
            printf ("               ");
            playerx += 1;
            if (playerx >= COMP - 1)
            {
                playerx = COMP - 2;
            }
            else
            {
                for (int a = 1; a <= descida+1; a++)
                {
                    paredepiscar (playerx-1, a);
                    printf (" ");
                }
            }
            break;

        default:
            paredepiscar (1, 15);
            printf("Joga qnem gente");
        }
    }
}
