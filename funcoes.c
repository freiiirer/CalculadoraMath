//
// Created by Freire on 06/11/2020.
//

#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>


int vetorArray[5],aux;//vetor

void limpaTela(){
    #ifdef _WIN32
        system("cls");
    #endif

    #ifdef __linux__
        system("clear");
    #endif
}

int vetorCrescente(){
    //int vetorArray[5],aux;//vetor

    for (int i = 0; i < 5; i++) {//leitura de valores
        printf("Digite o valor %d : ",i+1);
        scanf("%d",&vetorArray[i]);
    }
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
        printf("\nO Valor da posicao %d agora é : %d\n", i, vetorArray[i]);
    }

}

int vetorDecrescente(){
    for (int i = 0; i < 5; i++) {//leitura de valores
        printf("Digite o valor %d: ",i +1);
        scanf("%d",&vetorArray[i]);
    }
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
        printf("\nO Valor da posicao %d agora é: %d\n", i, vetorArray[i]);
    }
}

    int matrizDeterminante(){
        int m[3][3];
    int m2[3][2];
    int i, j,det, temp;


    for ( i=0; i<3; i++ ) //ATRIBUIR VALORES A MATRIZ
        for ( j=0; j<3; j++ )
        {
            printf ("\nElemento [%d][%d] = ", i+1, j+1);
            scanf ("%d", &m[ i ][ j ]);
        }

    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            m2 [i][j] = m[i][j];
        }
    }

    //PRIMEIRA MULTIPLICAÇÃO EM DIAGONAL
    det = (m[0][0] * m[1][1] * m[2][2]) + (m[0][1] * m[1][2] * m2[2][0]) + (m [0][2] * m2[1][0] * m2[2][1]);
    temp = ((m [0][2] * m[1][1] * m[2][0]) * (-1)) + ((m2[0][0] * m[1][2] * m[2][1]) * (-1)) + ((m2[0][1] * m2[1][0] * m[2][2]) * (-1));

    //SOMA DOS RESULTADOS
    det = det + temp;

    limpaTela();

    for(i = 0; i<3; i++) //MOSTRAR A MATRIZ FORMADA
    {
        for(j=0; j<3; j++)
        {
            printf("%d | ", m [i][j]);
        }
        printf("\n");

    }
    printf("\nDeterminante = %d \n", det);

    }