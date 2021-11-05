#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <sys/time.h>

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
    int valida;

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

void nascerseta() // nascerseta com vetor
{
    objetos seta[19];

    int r = 0;

    r=rand()%20+1;

    if (r == 1)
    {
        if(seta[0].valida = 1)
        {
            posicaosetax(&seta[0].x);
            posicaosetay(&seta[0].y);
            direcaoseta(&seta[0].dir);
            paredepiscar(seta[0].x, seta[0].y);
            printf("%c", seta[0].dir);
            seta[0].valida = 0;
        }
    }
    if (r == 2)
    {
        if(seta[2].valida = 1)
        {
            posicaosetax(&seta[2].x);
            posicaosetay(&seta[2].y);
            direcaoseta(&seta[2].dir);
            paredepiscar(seta[2].x, seta[2].y);
            printf("%c", seta[2].dir);
            seta[2].valida = 0;
        }
    }
    if (r == 3)
    {
        if(seta[3].valida = 1)
        {
            posicaosetax(&seta[3].x);
            posicaosetay(&seta[3].y);
            direcaoseta(&seta[3].dir);
            paredepiscar(seta[3].x, seta[3].y);
            printf("%c", seta[3].dir);
            seta[3].valida = 0;
        }
    }
    if (r == 4)
    {
        if(seta[4].valida = 1)
        {
            posicaosetax(&seta[4].x);
            posicaosetay(&seta[4].y);
            direcaoseta(&seta[4].dir);
            paredepiscar(seta[4].x, seta[4].y);
            printf("%c", seta[4].dir);
            seta[4].valida = 0;
        }
    }
    if (r == 5)
    {
        if(seta[5].valida = 1)
        {
            posicaosetax(&seta[5].x);
            posicaosetay(&seta[5].y);
            direcaoseta(&seta[5].dir);
            paredepiscar(seta[5].x, seta[5].y);
            printf("%c", seta[5].dir);
            seta[5].valida = 0;
        }
    }
    if (r == 6)
    {
        if(seta[6].valida = 1)
        {
            posicaosetax(&seta[6].x);
            posicaosetay(&seta[6].y);
            direcaoseta(&seta[6].dir);
            paredepiscar(seta[6].x, seta[6].y);
            printf("%c", seta[6].dir);
            seta[6].valida = 0;
        }
    }
    if (r == 7)
    {
        if(seta[7].valida = 1)
        {
            posicaosetax(&seta[7].x);
            posicaosetay(&seta[7].y);
            direcaoseta(&seta[7].dir);
            paredepiscar(seta[7].x, seta[7].y);
            printf("%c", seta[7].dir);
            seta[7].valida = 0;
        }
    }
    if (r == 8)
    {
        if(seta[8].valida = 1)
        {
            posicaosetax(&seta[8].x);
            posicaosetay(&seta[8].y);
            direcaoseta(&seta[8].dir);
            paredepiscar(seta[8].x, seta[8].y);
            printf("%c", seta[8].dir);
            seta[8].valida = 0;
        }
    }
    if (r == 9)
    {
        if(seta[9].valida = 1)
        {
            posicaosetax(&seta[9].x);
            posicaosetay(&seta[9].y);
            direcaoseta(&seta[9].dir);
            paredepiscar(seta[9].x, seta[9].y);
            printf("%c", seta[9].dir);
            seta[9].valida = 0;
        }
    }
    if (r == 10)
    {
        if(seta[10].valida = 1)
        {
            posicaosetax(&seta[10].x);
            posicaosetay(&seta[10].y);
            direcaoseta(&seta[10].dir);
            paredepiscar(seta[10].x, seta[10].y);
            printf("%c", seta[10].dir);
            seta[10].valida = 0;
        }
    }
    if (r == 11)
    {
        if(seta[11].valida = 1)
        {
            posicaosetax(&seta[11].x);
            posicaosetay(&seta[11].y);
            direcaoseta(&seta[11].dir);
            paredepiscar(seta[11].x, seta[11].y);
            printf("%c", seta[11].dir);
            seta[11].valida = 0;
        }
    }
    if (r == 12)
    {
        if(seta[12].valida = 1)
        {
            posicaosetax(&seta[12].x);
            posicaosetay(&seta[12].y);
            direcaoseta(&seta[12].dir);
            paredepiscar(seta[12].x, seta[12].y);
            printf("%c", seta[12].dir);
            seta[12].valida = 0;
        }
    }
    if (r == 13)
    {
        if(seta[13].valida = 1)
        {
            posicaosetax(&seta[13].x);
            posicaosetay(&seta[13].y);
            direcaoseta(&seta[13].dir);
            paredepiscar(seta[13].x, seta[13].y);
            printf("%c", seta[13].dir);
            seta[13].valida = 0;
        }
    }
    if (r == 14)
    {
        if(seta[14].valida = 1)
        {
            posicaosetax(&seta[14].x);
            posicaosetay(&seta[14].y);
            direcaoseta(&seta[14].dir);
            paredepiscar(seta[14].x, seta[14].y);
            printf("%c", seta[14].dir);
            seta[14].valida = 0;
        }
    }
    if (r == 15)
    {
        if(seta[0].valida = 1)
        {
            posicaosetax(&seta[15].x);
            posicaosetay(&seta[15].y);
            direcaoseta(&seta[15].dir);
            paredepiscar(seta[15].x, seta[15].y);
            printf("%c", seta[15].dir);
            seta[15].valida = 0;
        }
    }
    if (r == 16)
    {
        if(seta[0].valida = 1)
        {
            posicaosetax(&seta[16].x);
            posicaosetay(&seta[16].y);
            direcaoseta(&seta[16].dir);
            paredepiscar(seta[16].x, seta[16].y);
            printf("%c", seta[16].dir);
            seta[16].valida = 0;
        }
    }
    if (r == 17)
    {
        if(seta[17].valida = 1)
        {
            posicaosetax(&seta[17].x);
            posicaosetay(&seta[17].y);
            direcaoseta(&seta[17].dir);
            paredepiscar(seta[17].x, seta[17].y);
            printf("%c", seta[17].dir);
            seta[17].valida = 0;
        }
    }
    if (r == 18)
    {
        if(seta[0].valida = 1)
        {
            posicaosetax(&seta[18].x);
            posicaosetay(&seta[18].y);
            direcaoseta(&seta[18].dir);
            paredepiscar(seta[18].x, seta[18].y);
            printf("%c", seta[18].dir);
            seta[18].valida = 0;
        }
    }
    if (r == 19)
    {
        if(seta[19].valida = 1)
        {
            posicaosetax(&seta[19].x);
            posicaosetay(&seta[19].y);
            direcaoseta(&seta[19].dir);
            paredepiscar(seta[19].x, seta[19].y);
            printf("%c", seta[19].dir);
            seta[19].valida = 0;
        }
    }
    if (r == 20)
    {
        if(seta[1].valida = 1)
        {
            posicaosetax(&seta[1].x);
            posicaosetay(&seta[1].y);
            direcaoseta(&seta[1].dir);
            paredepiscar(seta[1].x, seta[1].y);
            printf("%c", seta[1].dir);
            seta[1].valida = 0;
        }
    }
}

/*                   nascerseta sem vetor
void nascerseta()
{
    objetos seta;
    int setas=0;

    posicaosetax(&seta.x);
    posicaosetay(&seta.y);
    direcaoseta(&seta.dir);
    paredepiscar(seta.x, seta.y);
    printf("%c", seta.dir);

/*  tentativa de Game Over
    setas++;
    if (setas >=17)
    {

    }
*/

int jogo()
{

    char movimento;
    int playerx = 22, playery = 2;
    int descida = 1;
    struct timeval begin, end;
    long seconds=0;
    long microseconds=0;
    double elapsed=0;
    int nivel = 1;

    printf("\n\n");


    for ( ; ; )
    {
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
                else if ((nivel == 1) && (c>=50 && c<=59 && h>=1 && h<=5)|| (nivel == 1) && (c>=53 && c<=58 && h==7) || (nivel == 1) && (c>=50 && c<=59 && h>=9 && h<=12) || (nivel == 1) && (c>=61 && c<=64 && h>=2 && h<=10) || (nivel == 1) && (c>=68 && c<=84 && h>=1 && h<=2) || (nivel == 1) && (c>=67 && c<=71 && h>=4 && h<=6)
                         || (nivel == 1) && (c>=80 && c<=86 && h>=7 && h<=8) || (nivel == 1) && (c>=67 && c<=72 && h>=9 && h<=13) || (nivel == 1) && (c>=75 && c<=77 && h>=5 && h<=10) || (nivel == 1) && (c>=76 && c<=85 && h>=12 && h<=13) || (nivel == 1) && (c>=87 && c<=90 && h>=1 && h<=4) || (nivel == 1) && (c>=81 && c<=85 && h>=4 && h<=5)
                         || (nivel == 1) && (c>=83 && c<=89 && h>=10 && h<=11) || (nivel == 1) && (c==90 && h>=6 && h<=8))
                {
                    paredepiscar (c, h);
                    printf ("+");
                }
                else if ((nivel == 2) && (c>= 50 && c<=53 && h>=1 && h<=5) || (nivel == 2) && (c== 50 && h>=7 && h<=8) || (nivel == 2) && (c>= 52 && c<=54 && h==8) || (nivel == 2) && (c>= 51 && c<=53 && h==10) || (nivel == 2) && (c>= 50 && c<=65 && h>=12 && h<=13)
                         || (nivel == 2) && (c>= 56 && c<=63 && h>=7 && h<=10) ||  (nivel == 2) && (c>= 58 && c<=67 && h==5) || (nivel == 2) && (c==67 && h>=7 && h<=10) || (nivel == 2) && (c== 68 && h>=12 && h<=13) || (nivel == 2) && (c>= 55 && c<=75 && h>=2 && h<=3) || (nivel == 2) && (c>= 71 && c<=74 && h>=5 && h<=11)
                         || (nivel == 2) && (c>= 71 && c<=81 && h==13) || (nivel == 2) && (c>= 76 && c<=84 && h==10) || (nivel == 2) && (c>= 77 && c<=85 && h>=6 && h<=7) || (nivel == 2) && (c>= 79 && c<=81 && h>=1 && h<=3) || (nivel == 2) && (c>= 84 && c<=88 && h>=2 && h<=3) || (nivel == 2) && (c>= 88 && c<=90 && h>=5 && h<=9)
                         || (nivel == 2) && (c == 83 && h>=11 && h<=13) || (nivel == 2) && (c>= 90 && c<=95 && h>=12 && h<=13) || (nivel == 2) && (c>= 94 && c<=95 && h>=1 && h<=8) || (nivel == 2) && (c == 93 && h==10))
                {
                    paredepiscar (c, h);
                    printf ("0");
                }
                else if ((nivel == 3) && (c>=52 && c<=60 && h >=1 && h <=2) || (nivel == 3) && (c>=53 && c<=54 && h >=4 && h <=6) || (nivel == 3) && (c>=58 && c<=59 && h ==5) || (nivel == 3) && (c>=50 && c<=53 && h >=8 && h <=11) || (nivel == 3) && (c>=56 && c<=67 && h >=8 && h <=9) || (nivel == 3) && (c==57 && h >=10 && h <=11)
                         || (nivel == 3) && (c>=65 && c<=66 && h >=11 && h <=13) || (nivel == 3) && (c>=69 && c<=71 && h >=12 && h <=13) || (nivel == 3) && (c==63 && h >=1 && h <=6) || (nivel == 3) && (c>=66 && c<=69 && h >=2 && h <=3) || (nivel == 3) && (c>=68 && c<=71 && h==5) || (nivel == 3) && (c==70 && h ==7)
                         || (nivel == 3) && (c>=70 && c<=71 && h >=9 && h <=10) || (nivel == 3) && (c==75 && h >=1 && h <=3) || (nivel == 3) && (c==75 && h >=5 && h <=7) || (nivel == 3) && (c==75 && h >=9 && h <=11) || (nivel == 3) && (c==75 && h ==13) || (nivel == 3) && (c>=76 && c<=83 && h ==3) || (nivel == 3) && (c>=76 && c<=83 && h ==6)
                         || (nivel == 3) && (c>=76 && c<=83 && h ==11) || (nivel == 3) && (c>=79 && c<=83 && h ==4) || (nivel == 3) && (c>=79 && c<=82 && h >=8 && h <=9) || (nivel == 3) && (c>=81 && c<=83 && h >=12 && h <=13) || (nivel == 3) && (c>=86 && c<=87 && h >=3 && h <=6) || (nivel == 3) && (c>=86 && c<=89 && h >=9 && h <=12) || (nivel == 3) && (c>=90 && c<=93 && h >=1 && h <=4)
                         || (nivel == 3) && (c>=90 && c<=93 && h >=6 && h <=7) || (nivel == 3) && (c>=92 && c<=95 && h ==8) || (nivel == 3) && (c>=92 && c<=95 && h >=11 && h<= 12))
                {
                    paredepiscar (c, h);
                    printf (">");
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
        if (nivel==1 && elapsed>=40)
        {
            nascerseta();
            elapsed = 0;
        }
        if (nivel==2 && elapsed>=25)
        {
            nascerseta();
            elapsed = 0;
        }
        if (nivel==3 && elapsed>=13)
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
        // relojão
        movimento = '\0';
        gettimeofday(&end, 0);
        seconds = end.tv_sec - begin.tv_sec;
        microseconds = end.tv_usec - begin.tv_usec;
        elapsed += seconds + (microseconds*0,000001);


        // passar de nivel
        if (playerx == 30 && playery == 13) // precisa mudar para as coordenadas certas
        {
            system ("CLS");
            nivel++;
            playerx = 22;
            playery = 2;
            descida = 1;
        }
        if (nivel > 3)
        {
            printf ("\n\n       parabéns por concluir o jogo! \n       Suas habilidades são incríveis :)");
            break;
        }
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
    printf ("\n    2 - Ao longo do jogo aparecerão setas pelo mapa. Pegue - as para construir o caminho para a Vitória!");
    Sleep (600);
    printf ("\n    3 - Cuidado! O caminho a ser criado não pode atingir os obstáculos, caso atinja é fim de jogo.");
    Sleep (600);
    printf ("\n    4 - Fique de olho nas setas, caso exceda o limite de 17 é fim de jogo!");
    Sleep (600);
    printf ("\n    5 - Você também pode 'apagar' as setas utilizando a linha acima do personagemm, porém, sua pontuação será penalizada.");
}
