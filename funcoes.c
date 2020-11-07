//
// Created by Freire on 06/11/2020.
//

#include "funcoes.h"
#include <stdlib.h>
#include <stdio.h>

int vetorArray[5],aux;//vetor


int vetorCrescente(){
    //int vetorArray[5],aux;//vetor

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

}

int vetorDecrescente(){
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
}