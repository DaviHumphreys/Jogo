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

    printf("\n    BEM VINDO AO PEGUE SEU CANINHO E SAIA DE MANSINHO!\n\n");

    printf("    	O QUE DESEJAS?\n\n");
    printf("\t    1 - Jogar\n");
    printf("	    2 - Placar\n");
    printf("	    3 - Instruções\n");
    printf("	    4 - Créditos\n");
    printf("	    5 - Sair do Jogo -_-\n\n");
    printf("        -->  ");

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
        instrucoes();
        break;

    case '4':
        printf("\n\n	Você selecionou Créditos\n\n");
        Sleep(LOAD);
        system("cls");
        creditos();
        break;

    case '5':
        printf("\n\n	Obrigado por jogar!\n\n");
        return 0;

    default:
        printf("\n Opção inválida, utilize 1, 2, 3, 4 ou 5");
    }
    return 1;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand( (unsigned)time(NULL) );
    while(menu())
    {

        printf("\n\n Aperte Enter para continuar...");
        fflush(stdin);
        getchar();
        system("color 07");
        system("cls");
    }

}

int creditos()
{


    printf("                  Obrigado por jogar o Pegue seu Caninho e Saia de Mansinho! \n                                  Nossa equipe agradece :D");

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

typedef struct
{
    int x;
    int y;
    int dir;

} objetos;

void direcaoseta(int *dd)
{

    int rdir = 0;

    rdir=rand()%3+1;

    if (rdir == 1)
    {
        *dd = 24;
    }
    else if (rdir == 2)
    {
        *dd = 25;
    }
    else if (rdir == 3)
    {
        *dd = 26;
    }
}

void posicaosetax(int *xx)
{
    int rx;

    rx=rand()%20+1;

    if (rx == 1)
    {
        *xx = 11;
    }
    else if (rx == 2)
    {
        *xx = 12;
    }
    else if (rx == 3)
    {
        *xx = 13;
    }
    else if (rx == 4)
    {
        *xx = 14;
    }
    else if (rx == 5)
    {
        *xx = 15;
    }
    else if (rx == 6)
    {
        *xx = 16;
    }
    else if (rx == 7)
    {
        *xx = 17;
    }
    else if (rx == 8)
    {
        *xx = 18;
    }
    else if (rx == 9)
    {
        *xx = 19;
    }
    else if (rx == 10)
    {
        *xx = 20;
    }
    else if (rx == 11)
    {
        *xx = 21;
    }
    else if (rx == 12)
    {
        *xx = 22;
    }
    else if (rx == 13)
    {
        *xx = 23;
    }
    else if (rx == 14)
    {
        *xx = 24;
    }
    else if (rx == 15)
    {
        *xx = 25;
    }
    else if (rx == 16)
    {
        *xx = 26;
    }
    else if (rx == 17)
    {
        *xx = 27;
    }
    else if (rx == 18)
    {
        *xx = 28;
    }
    else if (rx == 19)
    {
        *xx = 29;
    }
    else if (rx == 20)
    {
        *xx = 30;
    }
}

void posicaosetay(int *yy)
{
    int ry;

    ry=rand()%8+1;

    if (ry == 1)
    {
        *yy = 4;
    }
    else if (ry == 2)
    {
        *yy = 5;
    }
    else if (ry == 3)
    {
        *yy = 6;
    }
    else if (ry == 4)
    {
        *yy = 7;
    }
    else if (ry == 5)
    {
        *yy = 8;
    }
    else if (ry == 6)
    {
        *yy = 9;
    }
    else if (ry == 7)
    {
        *yy = 10;
    }
    else if (ry == 8)
    {
        *yy = 11;
    }
}

void nascerseta()
{

    objetos seta;

    posicaosetax(&seta.x);
    posicaosetay(&seta.y);
    direcaoseta(&seta.dir);
    paredepiscar(seta.x, seta.y);
    printf("%c", seta.dir);
}

int jogo()
{

    char movimento;
    int playerx = 22, playery = 2;
    int descida = 1;
    struct timeval begin, end;
    long seconds=0;
    long microseconds=0;
    double elapsed=0;

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
        gettimeofday(&begin, 0);
        for(int h = 0; h < ALTURA; h++)
        {
            for(int c = 0; c < COMP; c++)
            {
                if(playerx == c && playery == h)
                {
                    paredepiscar (c, h);
                    printf("J");
                }
                else if ((descida == 2 && playerx == c && playery == h + 1) || (descida == 3 && playerx == c && (playery == h + 2 || playery == h + 1)) || (descida == 4 && playerx == c && (playery == h + 3 || playery == h + 2 || playery == h + 1))
                         || (descida == 5 && playerx == c && (playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1)) || (descida == 6 && playerx == c && (playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                         || (descida == 7 && playerx == c && (playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1)) || (descida == 8 && playerx == c && (playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                         || (descida == 9 && playerx == c && (playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                         || (descida == 10 && playerx == c && (playery == h + 9 || playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                         || (descida == 11 && playerx == c && (playery == h + 10 || playery == h + 9 || playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1))
                         || (descida == 12 && playerx == c && (playery == h + 11 || playery == h + 10 || playery == h + 9 || playery == h + 8 || playery == h + 7 || playery == h + 6 || playery == h + 5 || playery == h + 4 || playery == h + 3 || playery == h + 2 || playery == h + 1)))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if((h == 1 && c == 10) || (h == 2 && c == 10) || (h == 3 && c == 10) || (h == 11 && c == 10) || (h == 12 && c == 10) || (h == 13 && c == 10) || (h == 1 && c == 31) || (h == 2 && c == 31)
                        || (h == 3 && c == 31) || (h == 4 && c == 31) || (h == 5 && c == 31) || (h == 6 && c == 31) || (h == 7 && c == 31) || (h == 8 && c == 31) || (h == 9 && c == 31) || (h == 10 && c == 31)
                        || (h == 11 && c == 31) || (h == 12 && c == 31) || (h == 13 && c == 31))
                {
                    paredepiscar (c, h);
                    printf("|");
                }
                else if ((c>=50 && c<=59 && h>=1 && h<=5)|| (c>=53 && c<=58 && h==7) || (c>=50 && c<=59 && h>=9 && h<=12) || (c>=61 && c<=64 && h>=2 && h<=10) || (c>=68 && c<=84 && h>=1 && h<=2) || (c>=67 && c<=71 && h>=4 && h<=6)
                         || (c>=80 && c<=86 && h>=7 && h<=8) || (c>=67 && c<=72 && h>=9 && h<=13) || (c>=75 && c<=77 && h>=5 && h<=10) || (c>=76 && c<=85 && h>=12 && h<=13) || (c>=87 && c<=90 && h>=1 && h<=4) || (c>=81 && c<=85 && h>=4 && h<=5)
                         || (c>=83 && c<=89 && h>=10 && h<=11) || (c==90 && h>=6 && h<=8))
                {
                    paredepiscar (c, h);
                    printf ("+");
                }
                else if(c == 32 && h == 3)
                {
                    paredepiscar (c, h);
                    printf("=");
                }
                else if(c == 107 && h == 7)
                {
                    paredepiscar (c, h);
                    printf("X");
                }
            }
        }

        printf("\n\n");


        if (kbhit())
        {
            movimento = getch();
        }

        if (elapsed>=40)
        {
            nascerseta();
            elapsed = 0;
        }

        switch(movimento)
        {
        case 'w':
        case 'W':
            paredepiscar (1, 15);
            printf ("                             \n                                                                                                                    \n                                                                                                                   \n                                                                                                                     ");
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
            printf ("                             \n                                                                                                                    \n                                                                                                                   \n                                                                                                                     ");
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
            printf ("                             \n                                                                                                                    \n                                                                                                                   \n                                                                                                                     ");
            playerx -= 1;
            if (playerx < 11)
            {
                playerx = 11;
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
            printf ("                             \n                                                                                                                    \n                                                                                                                    \n                                                                                                                    ");
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

        case '\0':
            break;


        default:
            paredepiscar (1, 15);
            printf("Movimento Inválido! \n Utilize WASD para se mover");

        }
        movimento = '\0';
        gettimeofday(&end, 0);
        seconds = end.tv_sec - begin.tv_sec;
        microseconds = end.tv_usec - begin.tv_usec;
        elapsed += seconds + (microseconds*0,000001);
        paredepiscar(1, 20);
        printf("\n\n %lf", elapsed);
    }
}

void instrucoes ()
{
    printf ("\n           Bem Vindo ao Pegue seu Caninho e Saia de Mansinho!\n\n\n");
    Sleep (600);
    printf ("Objetivo:\n    Construir um caminho que chegue até o ponto X, evitando os obstáculos.");
    Sleep (600);
    printf ("\n\nInstruções: \n    1 - Utilizando o W A S D, movimente-se pelo mapa!");
    Sleep (600);
    printf ("\n    2 - Utilizando o SPACE, coloque os bloquinhos coletados e forme o caminho :)");
    Sleep (600);
    printf ("\n    3 - Ao longo do jogo aparecerão seta se deslocando pelo mapa. Pegue - os para construir o caminho para a Vitória!");
    Sleep (600);
    printf ("\n    4 - Cuidado! O caminho a ser criado não pode atingir os obstáculos, caso atinja você perderá uma vida e ao perder 3 vidas é fim de jogo.");
}
