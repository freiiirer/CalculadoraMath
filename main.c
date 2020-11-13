#include <stdio.h>
#include <locale.h>
#include "funcoes.h"

int main(void) {
    setlocale(LC_ALL,"");

    int menu,vetor,matriz,funcao;//menu

    menu = 0;

    while (menu != 5)
    {
        menu = 0;
        vetor = 0;
        matriz = 0;

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
        printf("    |         3- Funções                  |\n");
        printf("    |         4- Derivadas                |\n");
        printf("    |               Sair(5)               |\n");
        printf("    |_____________________________________|\n");
        printf("\n    Digite uma das opcoes acima:");
        scanf("%d",&menu);
        limpaTela();
        if (menu > 5){
            printf("Digite uma opção valida\n\n\n");
            continue;
        }
        switch (menu) {
            case 1://vetor
                while (vetor != 3){
                    printf("1- Ordem crescente\n");
                    printf("2- Ordem descrescente\n");
                    printf("3- VOLTAR AO MENU PRINCIPAL\n");

                    printf("Escolha sua opcao: ");
                    scanf("%d",&vetor);


                    if(vetor != 3){
                        switch (vetor) {
                            case 1://crescente
                                vetorCrescente();
                                break;
                            case 2://decrescente
                                vetorDecrescente();
                                break;

                            default:
                                printf("Opção Inválida,tente novamente\n");
                                break;
                        }//fim switch vetor
                    }
                }//fim  menu vetor
                break;
            case 2://Matrizes
                while(matriz != 5){
                    printf("\n1- Determinantes\n");
                    printf("2- Soma\n");
                    printf("3- Subtração\n");
                    printf("4- Produto\n");
                    printf("5- VOLTAR AO MENU PRINCIPAL\n");

                    printf("Escolha sua opção: ");
                    scanf("%d",&matriz);

                    switch (matriz) {
                        case 1://Determinantes
                            matrizDeterminante();
                            break;
                        case 2://Soma
                            matrizSoma();
                            break;
                        case 3://Subtracao
                            matrizSubtracao();
                            break;
                        case 4://Produto
                            matrizProduto();
                            break;
                        case 5://voltar
                            continue;
                        default:
                            printf("Digite uma opção Válida\n\n\n");
                            continue;
                    }
                }
                break;
            case 3:// Funcoes
                while(funcao != 11){
                printf("1- f(x) = k\n");
                printf("2- f(x) = x^k\n");
                printf("3- f(x) = k^x\n");
                printf("4- f(x) = e^k\n");
                printf("5- f(x) = logk(x)\n");
                printf("6- f(x) = ln(x)\n");
                printf("7- f(x) = 1//x\n");
                printf("8- f(x) = sen(x)\n");
                printf("9- f(X) = cos(x)\n");
                printf("10- f(x) = tg(x)\n");
                printf("11- Voltar ao menu principal\n");

                printf("Escolha sua opção: ");
                scanf("%d",&funcao );

                switch (funcao){
                        case 1: //k

                            break;
                        case 2: //x^k

                            break;
                        case 3: //k^x

                            break;
                        case 4: //e^k

                            break;
                        case 5: //logk(x)

                            break;
                        case 6: //ln(x)

                            break;
                        case 7: //1/x

                            break;
                        case 8: //sen(x)

                            break;
                        case 9: //cos(x)

                            break;
                        case 10: //tg(x)

                            break;
                        case 11: //voltar
                            continue;
                        
                        default:
                            printf("Digite uma opção valida\n\n\n");
                            continue;
                }   
            }


                break;
            
            case 4://derivadas
                derivada();
                break;
        }//fim switch menu

    }//fim while menu
}
