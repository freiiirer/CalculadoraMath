#include <stdio.h>
#include <locale.h>
#include "funcoes.h"


int main(void) {
    setlocale(LC_ALL, "");

    int menu, vetor, matriz, funcao, derivadas;//menu
    system("MODE con cols=46 lines=30 ");
    menu = 0;

    printf("  ______     _______     _           _______ \n");
    printf(" |  __   %c  (  ____ %c   ( )         (  ____ %c \n", 92, 92, 92);
    printf(" | (  %c  )  | (    %c/   | |         | (    %c/ \n", 92, 92, 92);
    printf(" | |   ) |  | |         | |         | |      \n");
    printf(" | |   | |  | |         | |         | |      \n");
    printf(" | |   ) |  | |         | |         | |      \n");
    printf(" | (__/  )_ | (____/%c _ | (____/%c _ | (____/%c \n", 92, 92, 92);
    printf(" (______/(_)(_______/(_)(_______/(_)(_______/\n\n");
    printf("    Dispositivo de Calculo em Linguagem C");

    printf("\n\n\n\n");
    printf("        Pressione ENTER para continuar");
    fflush(stdin);
    getchar();
    limpaTela();


    while (menu != 5) {
        menu = 0;
        vetor = 0;
        matriz = 0;
        funcao = 0;
        derivadas = 0;

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


        printf("\n    Digite uma das opções acima:");


        scanf("%d", &menu);
        limpaTela();
        if (menu > 5) {
            opcaoInvalida();
            continue;
        }
        switch (menu) {
            case 1://vetor
                while (vetor != 3) {
                    printf("1- Ordem crescente\n");
                    printf("2- Ordem descrescente\n");
                    printf("3- VOLTAR AO MENU PRINCIPAL\n");

                    printf("Escolha sua opção ");
                    scanf("%d", &vetor);
                    limpaTela();

                        switch (vetor) {
                            case 1://crescente
                                vetorCrescente();
                                break;
                            case 2://decrescente
                                vetorDecrescente();
                                break;
                            case 3:
                                limpaTela();
                                continue;
                            default:
                                opcaoInvalida();
                                continue;
                        }//fim switch vetor

                    limpaTela();
                }//fim  menu vetor

                break;
            case 2://Matrizes
                while (matriz != 5) {

                    printf("\n1- Determinantes\n");
                    printf("2- Soma\n");


                    printf("3- Subtração\n");


                    printf("4- Produto\n");
                    printf("5- VOLTAR AO MENU PRINCIPAL\n");

                    printf("Escolha sua opção: ");
                    scanf("%d", &matriz);
                    limpaTela();
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
                        case 5:
                            limpaTela();
                            continue;
                        default:
                            opcaoInvalida();
                            continue;
                    }
                }
                break;
            case 3:// Funcoes
                while (funcao != 11) {
                    printf("Escolha a função\n\n\n");
                    printf("1- f(x) = k\n");
                    printf("2- f(x) = x^k\n");
                    printf("3- f(x) = k^x\n");
                    printf("4- f(x) = e^k\n");
                    printf("5- f(x) = logk(x)\n");
                    printf("6- f(x) = ln(x)\n");
                    printf("7- f(x) = 1/x\n");
                    printf("8- f(x) = sen(x)\n");
                    printf("9- f(X) = cos(x)\n");
                    printf("10- f(x) = tg(x)\n");
                    printf("11- Voltar ao menu principal\n\n");

                    printf("Escolha sua opção:\n>>> ");
                    scanf("%d", &funcao);
                    limpaTela();
                    switch (funcao) {
                        case 1: //k
                            k(menu);
                            break;
                        case 2: //x^k
                            xk(menu);
                            break;
                        case 3: //k^x
                            kx(menu);
                            break;
                        case 4: //e^k
                            ex(menu);
                            break;
                        case 5: //logk(x)
                            logkx(menu);
                            break;
                        case 6: //ln(x)
                            lnx(menu);
                            break;
                        case 7: //1/x
                            xx(menu);
                            break;
                        case 8: //sen(x)
                            senx(menu);
                            break;
                        case 9: //cos(x)
                            cosx(menu);
                            break;
                        case 10: //tg(x)
                            tanx(menu);
                            break;
                        case 11: //voltar
                            continue;

                        default:
                            opcaoInvalida();
                            continue;
                    }
                }
                break;

            case 4://derivadas
                while (derivadas != 11) {
                    printf("Escolha a função a ser derivada\n\n");
                    printf("1- f(x) = k\n");
                    printf("2- f(x) = x^k\n");
                    printf("3- f(x) = k^x\n");
                    printf("4- f(x) = e^k\n");
                    printf("5- f(x) = logk(x)\n");
                    printf("6- f(x) = ln(x)\n");
                    printf("7- f(x) = 1/x\n");
                    printf("8- f(x) = sen(x)\n");
                    printf("9- f(X) = cos(x)\n");
                    printf("10- f(x) = tg(x)\n");
                    printf("11- Voltar ao menu principal\n\n");

                    printf("Escolha sua opção:\n>>> ");
                    scanf("%d", &derivadas);
                    limpaTela();

                    switch (derivadas) {
                        case 1: //k
                            k(menu);
                            break;
                        case 2: //x^k
                            xk(menu);
                            break;
                        case 3: //k^x
                            kx(menu);
                            break;
                        case 4: //e^k
                            ex(menu);
                            break;
                        case 5: //logk(x)
                            logkx(menu);
                            break;
                        case 6: //ln(x)
                            lnx(menu);
                            break;
                        case 7: //1/x
                            xx(menu);
                            break;
                        case 8: //sen(x)
                            senx(menu);
                            break;
                        case 9: //cos(x)
                            cosx(menu);
                            break;
                        case 10: //tg(x)
                            tanx(menu);
                            break;
                        case 11: //voltar
                            continue;

                        default:
                            opcaoInvalida();
                            continue;
                    }

                }//fim switch menu

        }//fim while menu
    }
    pressioneEnter();
}