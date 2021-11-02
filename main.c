#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

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
    Sleep (700);

    printf("\n\n Roteirista(s):                         Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (700);

    printf("\n\n Designer(s):                           Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (700);

    printf("\n\n Designer(s) de Personagens:            Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (700);

    printf("\n\n Game Tester(s):                        Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (700);

    printf("\n\n Dublador(es):                          Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (700);

    printf("\n\n Engenheiro(s) de Som:                  Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (700);

    printf("\n\n Musicita(s):                           Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (700);

    printf("\n\n Diretor(es):                           Davi Humphreys Varotto, Matteus Vieprz de Souza, Gabriel Neves Contiero");
    Sleep (700);

    printf("\n\n\n 	                AGRADECIMENTOS ESPECIAIS: Equipe The Wallers\n\n");


    printf("\n Especialmente >                        Gabriel Queiróz Venâncio");


    return 1;
}


typedef struct{

    int eixox[10], eixoy[6];

}objetos;

int spawny(int *yy)
{
    objetos caninho;

    int l = 0;
            srand (time(NULL));

            for (int i = 0; i<1; i++)
            {
                l=rand()%7+1;
                if (l == 1)
                {
                    caninho.eixoy[0] = 4;
                    *yy = caninho.eixoy[0];
                    return yy;
                }
                else if (l == 2)
                {
                    caninho.eixoy[1] = 5;
                    *yy = caninho.eixoy[1];
                    return yy;
                }
                else if (l == 3)
                {
                    caninho.eixoy[2] = 6;
                    *yy = caninho.eixoy[2];
                    return yy;
                }
                else if (l == 4)
                {
                    caninho.eixoy[3] = 7;
                    *yy = caninho.eixoy[3];
                    return yy;
                }
                else if (l == 5)
                {
                    caninho.eixoy[4] = 8;
                    *yy = caninho.eixoy[4];
                    return yy;
                }
                else if (l == 6)
                {
                    caninho.eixoy[5] = 9;
                    *yy = caninho.eixoy[5];
                    return yy;
                }
                else if (l == 7)
                {
                    caninho.eixoy[6] = 10;
                    *yy = caninho.eixoy[6];
                    return yy;
                }

            }
}


int jogo()
{

    char movimento;
    int playerx = 22, playery = 2;
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
                    printf("§");
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
                else if((h == 1 && c == 20) || (h == 2 && c == 20) || (h == 3 && c == 20) || (h == 11 && c == 20) || (h == 12 && c == 20) || (h == 13 && c == 20) || (h == 1 && c == 31) || (h == 2 && c == 31)
                         || (h == 3 && c == 31) || (h == 4 && c == 31) || (h == 5 && c == 31) || (h == 6 && c == 31) || (h == 7 && c == 31) || (h == 8 && c == 31) || (h == 9 && c == 31) || (h == 10 && c == 31)
                         || (h == 11 && c == 31) || (h == 12 && c == 31) || (h == 13 && c == 31))
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


        while(!kbhit())
        {

        objetos caninho;

            int y = 0;
            int x = 0;
            int r = 0;
            srand (time(NULL));

            for (int i = 0; i<1; i++)
            {
                r=rand()%10+1;
                if (r == 1)
                {
                    caninho.eixox[0] = 5;
                    caninho.eixoy[0] = 4;
                    x = caninho.eixox[0];
                    y = caninho.eixoy[0];
                    paredepiscar (x, y);
                    printf ("C");
                }
                else if (r == 2)
                {
                    spawny(&y);
                    caninho.eixox[1] = 6;
                    x = caninho.eixox[1];
                    paredepiscar (x, y);
                    printf ("C");
                }
                else if (r == 3)
                {
                    spawny(&y);
                    caninho.eixox[2] = 7;
                    x = caninho.eixox[2];
                    paredepiscar (x, y);
                    printf ("C");
                }
                else if (r == 4)
                {
                    spawny(&y);
                    caninho.eixox[3] = 8;
                    x = caninho.eixox[3];
                    paredepiscar (x, y);
                    printf ("C");
                }
                else if (r == 5)
                {
                    spawny(&y);
                    caninho.eixox[4] = 9;
                    x = caninho.eixox[4];
                    paredepiscar (x, y);
                    printf ("C");
                }
                else if (r == 6)
                {
                    spawny(&y);
                    caninho.eixox[5] = 10;
                    x = caninho.eixox[5];
                    paredepiscar (x, y);
                    printf ("C");
                }
                else if (r == 7)
                {
                    spawny(&y);
                    caninho.eixox[6] = 11;
                    x = caninho.eixox[6];
                    paredepiscar (x, y);
                    printf ("C");
                }
                else if (r == 8)
                {
                    spawny(&y);
                    caninho.eixox[7] = 12;
                    x = caninho.eixox[7];
                    paredepiscar (x, y);
                    printf ("C");
                }
                else if (r == 9)
                {
                    spawny(&y);
                    caninho.eixox[8] = 13;
                    x = caninho.eixox[8];
                    paredepiscar (x, y);
                    printf ("C");
                }
                else if (r == 10)
                {
                    spawny(&y);
                    caninho.eixox[9] = 14;
                    x = caninho.eixox[9];
                    paredepiscar (x, y);
                    printf ("C");
                }

                paredepiscar (caninho.eixox - 1, caninho.eixoy);
                printf(" ");
            }
        }

/*
            Sleep (100);
            paredepiscar (caninhox - 1, caninhoy);
            printf(" ");
            paredepiscar (caninhox, caninhoy);
            printf("C");
            if(caninhox == 30)
            {
                caninhox--;
            }
            else if(caninhox == 29)
            {
                paredepiscar (caninhox, caninhoy);
                printf(" ");
                caninhox == 29;
            }
            else
            {
            caninhox++;
            }
*/
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
            if (playerx < 21)
            {
                playerx = 21;
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
            if (playerx > 30)
            {
                playerx = 30;
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

