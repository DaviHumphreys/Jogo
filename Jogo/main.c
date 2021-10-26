#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define LOAD 1500

int menu()
{

     int options;

    printf("        BEM VINDO AO XXXX\n\n");

    printf("        O QUE DESEJAS?\n\n");
    printf("    1 - Jogar\n");
    printf("    2 - Placar\n");
    printf("    3 - Instruções\n");
    printf("    4 - Créditos\n");
    printf("    5 - Sair dessa bosta\n\n");
    printf("    8=D  ");
    scanf("%i", &options);

    switch (options)
    {
    case 1:
        printf("\n\n    Você selecionou Jogar\n\n");
        Sleep(LOAD);
        system("cls");
        system("color 0F");
        jogo();
        break;

    case 2:
        printf("\n\n    Você selecionou Placar\n\n");
        Sleep(LOAD);
        break;

    case 3:
        printf("\n\n    Você selecionou Instruções\n\n");
        Sleep(LOAD);
        break;

    case 4:
        printf("\n\n    Você selecionou Créditos\n\n");
        Sleep(LOAD);
        system("cls");
        creditos();

        break;

    case 5:
        printf("\n\n    Tchau seu Zé Buceta\n\n");
        return 0;

    default:
        printf("\n Opção inválida, utilize 1, 2, 3, 4 ou 5");
    }
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

    printf("\n\n");

    for(int h = 1; h <= 22; h++)
    {
        printf("|");

        for(int c = 1; c <= 115; c++)
        {
            if(h == 1 || h == 22)
            {
                printf("-");
            }
            else
            {
                printf(" ");
            }
        }

        printf("|\n");
    }
    printf("\n\n");
}
