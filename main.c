#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"

int main(void) {
    setlocale(LC_ALL,"");

    int menu,vetor;//menu

    menu = 0;

    while (menu != 5)
    {
        menu = 0;
        vetor = 0;

        printf("  ______     _______     _           _______ \n");
        printf(" |  __   %c  (  ____ %c   ( )         (  ____ %c \n",92,92,92);
        printf(" | (  %c  )  | (    %c/   | |         | (    %c/ \n",92,92,92);
        printf(" | |   ) |  | |         | |         | |      \n");
        printf(" | |   | |  | |         | |         | |      \n");
        printf(" | |   ) |  | |         | |         | |      \n");
        printf(" | (__/  )_ | (____/%c _ | (____/%c _ | (____/%c \n",92,92,92);
        printf(" (______/(_)(_______/(_)(_______/(_)(_______/\n\n");
        printf("    Dispositivo de Calculo em Linguagem C");

        printf("\n\n");
        printf("     _____________________________________\n");
        printf("    |           Menu Principal            |\n");
        printf("    |_____________________________________|\n");
        printf("    |                                     |\n");
        printf("    |         1- Vetor                    |\n");
        printf("    |         2- Matrizes                 |\n");
        wprintf(L"    |         3- Funções                  |\n");
        printf("    |         4- Derivadas                |\n");
        printf("    |               Sair(5)               |\n");
        printf("    |_____________________________________|\n");
        printf("\n    Digite uma das opcoes acima:");
        scanf("%d",&menu);
        system("cls");

        switch (menu) {
            case 1://vetor
                while (vetor != 3){
                    printf("1- Ordem crescente\n");
                    printf("2- Ordem descrescente\n");
                    printf("3- VOLTAR AO MENU PRINCIPAL\n");

                    printf("Escolha sua opcao: ");
                    scanf("%d",&vetor);
                    system("cls");

                    if(vetor != 3){
                        switch (vetor) {
                            case 1://crescente
                                vetorCrescente();
                                system("pause");
                                system("cls");
                                break;
                            case 2://decrescente
                                vetorDecrescente();
                                system("pause");
                                system("cls");
                                break;

                            default:
                                wprintf(L"Opção Inválida,tente novamente\n");
                                system("pause");
                                system("cls");
                                break;
                        }//fim switch vetor
                    }
                }//fim  menu vetor
                break;
            //case 2://Matrizes
        }//fim switch menu

    }//fim while menu
}
