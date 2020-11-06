#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL,"");

    int menu,vetor;//menus
    int vetorArray[5],aux;//vetor

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
                                for (int i = 0; i < 5; i++) {//leitura de valores
                                    printf("Digite o valor %d : ",i+1);
                                    scanf("%d",&vetorArray[i]);
                                }
                                system("cls");
                                for (int i = 0; i < 5; i++) {//ordenacao de valores
                                    for (int j = i+1; j < 5; j++) {
                                        if (vetorArray[i] > vetorArray[j]){

                                           aux = vetorArray[i];
                                           vetorArray[i] = vetorArray[j];
                                           vetorArray[j] = aux;
                                        }
                                    }
                                }
                                for (int i = 0; i < 5; i++) {//exibicao
                                    wprintf(L"\nO Valor da posicao %d agora é : %d\n", i, vetorArray[i]);
                                }
                                system("pause");
                                system("cls");
                                break;
                            case 2://decrescente
                                for (int i = 0; i < 5; i++) {//leitura de valores
                                    printf("Digite o valor %d: ",i +1);
                                    scanf("%d",&vetorArray[i]);
                                }
                                system("cls");
                                for (int i = 0; i < 5; i++) {//ordenacao de valores
                                    for (int j = i+1; j < 5; j++) {
                                        if (vetorArray[i] < vetorArray[j]){

                                            aux = vetorArray[i];
                                            vetorArray[i] = vetorArray[j];
                                            vetorArray[j] = aux;
                                        }
                                    }
                                }
                                for (int i = 0; i < 5; i++) {//exibicao
                                    wprintf(L"\nO Valor da posicao %d agora é: %d\n", i, vetorArray[i]);
                                }
                                system("pause");
                                system("cls");
                                break;

                            default:
                                break;
                        }//fim switch vetor
                    }
                }//fim  menu vetor
                break;
            //case 2://Matrizes
        }

    }//fim while menu
}
