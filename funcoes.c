//
// Created by Freire on 06/11/2020.
//

#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

# define PI 3.1415 

int vetorArray[5],aux;//vetor

    void limpaTela(){
    #ifdef _WIN32
        system("cls");
    #endif

    #ifdef __linux__
        system("clear");
    #endif
}

    void pressioneEnter(){
        printf("\n\nPressione ENTER para continuar");
        fflush(stdin);
        getchar();
        limpaTela();
    }

    int vetorCrescente(){
        
        for (int i = 0; i < 5; i++) {//leitura de valores
            printf("Digite o valor %d : ",i + 1);
            scanf("%d",&vetorArray[i]);
        }
        limpaTela();
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
        pressioneEnter();
    }

    int vetorDecrescente(){
    for (int i = 0; i < 5; i++) {//leitura de valores
        printf("Digite o valor %d: ",i + 1);
        scanf("%d",&vetorArray[i]);
    }
    limpaTela();
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
    pressioneEnter();
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

        //PRIMEIRA MULTIPLICA??O EM DIAGONAL
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
        pressioneEnter();
    }

    int matrizSoma(){

        int a[3][3];
        int b[3][3];
        int c[3][3];
        int i,j,soma;

        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf("Elemento[%d][%d] da matriz A = ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }

        limpaTela();

        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf("Elemento[%d][%d] da matriz B = ",i+1,j+1);
                scanf("%d",&b[i][j]);

                c[i][j] = a[i][j] + b[i][j];


            }
        }

        limpaTela();

        printf("\nMATRIZ A\n");
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d |", a[i][j]);
            }
            printf("\n");
        }

        printf("\nMATRIZ B\n");
        for(i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf("%d |",b[i][j]);
            }
            printf("\n");
        }

        printf("\nMATRIZ C\n");
        for(i = 0; i<3; i++) //MOSTRAR A MATRIZ FORMADA
        {
            for(j=0; j<3; j++)
            {
                printf("%d | ", c [i][j]);
            }
            printf("\n");

        }

        pressioneEnter();
    }
    
    int matrizSubtracao(){

        int a[3][3];
        int b[3][3];
        int c[3][3];
        int i,j,soma;

        for (i=0; i<3; i++)
            {
            for (j=0; j<3; j++)
                 {
                printf("Elemento[%d][%d] da matriz A = ",i+1,j+1);
                scanf("%d",&a[i][j]);
                 }
            }

        limpaTela();

        for (i=0; i<3; i++)
            {
            for (j=0; j<3; j++)
                {
                printf("Elemento[%d][%d] da matriz B = ",i+1,j+1);
                scanf("%d",&b[i][j]);

                c[i][j] = a[i][j] - b[i][j];


                }
            }

        limpaTela();

        printf("\nMATRIZ A\n");
        for (i=0; i<3; i++)
            {
            for(j=0; j<3; j++)
            {
                printf("%d |", a[i][j]);
            }
            printf("\n");
            }



        printf("\nMATRIZ B\n");
        for(i=0; i<3; i++)
            {
            for (j=0; j<3; j++)
            {
                printf("%d |",b[i][j]);
            }
            printf("\n");
            }



        printf("\nMATRIZ C\n");
        for(i = 0; i<3; i++){ //MOSTRAR A MATRIZ FORMADA
            for(j=0; j<3; j++)
            {
                printf("%d | ", c [i][j]);
            }
            printf("\n");

        }
        pressioneEnter();
    }

    int matrizProduto(){
    
        int a[3][3];
        int b[3][3];
        int c[3][3];
        int i,j,soma;

        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf("Elemento[%d][%d] da matriz A = ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }

        limpaTela();

        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf("Elemento[%d][%d] da matriz B = ",i+1,j+1);
                scanf("%d",&b[i][j]);


            }
        }

        c[0][0] = (a[0][0]*b[0][0])+(a[0][1]*b[1][0]) + (a[0][2]*b[2][0]);
        c[0][1] = (a[0][0]*b[0][1])+(a[0][1]*b[1][1]) + (a[0][2]*b[2][1]);
        c[0][2] = (a[0][0]*b[0][2])+(a[0][1]*b[1][2]) + (a[0][2]*b[2][2]);
        c[1][0] = (a[1][0]*b[0][0])+(a[1][1]*b[1][0]) + (a[1][2]*b[2][0]);
        c[1][1] = (a[1][0]*b[0][1])+(a[1][1]*b[1][1]) + (a[1][2]*b[2][1]);
        c[1][2] = (a[1][0]*b[0][2])+(a[1][1]*b[1][2]) + (a[1][2]*b[2][2]);
        c[2][0] = (a[2][0]*b[0][0])+(a[2][1]*b[1][0]) + (a[2][2]*b[2][0]);
        c[2][1] = (a[2][0]*b[0][1])+(a[2][1]*b[1][1]) + (a[2][2]*b[2][1]);
        c[2][2] = (a[2][0]*b[0][2])+(a[2][1]*b[1][2]) + (a[2][2]*b[2][2]);

        limpaTela();

        printf("\nMATRIZ A\n");
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d |", a[i][j]);
            }
            printf("\n");
        }



        printf("\nMATRIZ B\n");
        for(i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                printf("%d |",b[i][j]);
            }
            printf("\n");
        }

        printf("\nMATRIZ C\n");
        for (i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d |",c[i][j]);
            }
            printf("\n");
        }
        pressioneEnter();
    }

    void opcaoInvalida() {
        limpaTela();
        printf("Digite uma opção válida\n");
        printf("Pressione ENTER para continuar\n");
        fflush(stdin);
        getchar();
        limpaTela();
    }

    int k(){
        int x,k;

        printf("Digite o valor de x desejado: ");
        scanf("%d",&x);

        k = x;

        limpaTela();

        printf("\nf(x) = %d\n",k);
        pressioneEnter();
    }

    int xk(){
        int x,k,potencia;

        printf("Digite o valor de x desejado: ");
        scanf("%d",&x);
        printf("Digite o valor de k desejado: ");
        scanf("%d",&k);

        potencia = pow(x,k);

        limpaTela();

        printf("\nf(%d) = %d\n",x,potencia);
        pressioneEnter();


    }

    int kx(){
        int x,k,potencia;

        printf("Digite o valor de x desejado: ");
        scanf("%d",&x);
        printf("Digite o valor de k desejado: ");
        scanf("%d",&k);

        potencia = pow(k,x);

        limpaTela();

        printf("\nf(%d) = %d\n",x,potencia);
        pressioneEnter();

    }

    int ex(){
        float x,e,potencia;

        printf("Digite o valor de x desejado: ");
        scanf("%f",&x);
        

       potencia = pow(e,x);

        limpaTela();

        printf("\nf(%.0f) = %.4f\n",x,potencia);
        pressioneEnter();

    }

    int logkx(){
        float k,x,nep;

        printf("f(x) = logk(x) \n\n");
        printf("Digite o logaritmando (x): ");
        scanf("%f",&x);
        printf("Digite a base (k): ");
        scanf("%f",&k);

        nep = log10(x) / log10(k);

        printf("f (%.0f) = log(%.0f) = %.2f",x,k,nep);
        pressioneEnter();

    }

    int lnx(){
        float x,resultado;

        printf("Digite o valor de x desejado: ");
        scanf("%f",&x);

         resultado = log(x);

         limpaTela();

         printf("f(%.0f) = %.4f",x,resultado);
        pressioneEnter();

    }

    int xx(){
        float x;

        printf("Digite o valor de x desejado: ");
        scanf("%f",&x);
        
        limpaTela();

        printf("f(%.0f) = %.2f",x,1/x);
        pressioneEnter();

    }

    int senx(){
        double x;

        printf("Digite o valor de x desejado: ");
        scanf("%lf",&x);
    
        limpaTela();

        printf("f(%.0lf) = %.3f\n",x, sin(x*PI/180));
        pressioneEnter();

    }

    int cosx(){
         double x;

        printf("Digite o valor de x desejado: ");
        scanf("%lf",&x);
        
        limpaTela();
        
        printf("f(%.0lf) = %.3f\n",x, cos(x*PI/180));
        pressioneEnter();

    }

    int tanx(){
            double x;


        printf("Digite o valor de x desejado: ");
        scanf("%lf",&x);
        
        limpaTela();

        printf("f(%.0lf) = %.3f\n",x, tan(x*PI/180));
        pressioneEnter();

    }