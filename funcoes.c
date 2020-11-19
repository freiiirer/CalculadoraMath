//
// Created by Freire on 06/11/2020.
//

#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

# define PI 3.1415 
# define e 2.7182

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
            printf("\nO Valor da posicao %d agora � : %d\n", i, vetorArray[i]);
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
        printf("\nO Valor da posicao %d agora �: %d\n", i, vetorArray[i]);
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
        printf("Digite uma op��o v�lida\n");
        printf("Pressione ENTER para continuar\n");
        fflush(stdin);
        getchar();
        limpaTela();
    }

    int k(menu){
        int x,k;
        if (menu == 3) {
            printf("Digite o valor de x desejado: ");
            scanf("%d", &x);
            k = x;
            limpaTela();
            printf("\nf(x) = %d\n", k);
        }else if (menu == 4){
            printf("Insira o valor para x: ");
            scanf("%d",&x);

            limpaTela();

            printf ("f(x) = k\n");
            printf("(%d)' = 0\n",x);
        }
        pressioneEnter();
    }

    int xk(menu){
        int x,k,potencia;
        if (menu == 3){
            printf("Digite o valor de x desejado: ");
            scanf("%d",&x);
            printf("Digite o valor de k desejado: ");
            scanf("%d",&k);

            potencia = pow(x,k);

            limpaTela();

            printf("\nf(%d) = %d\n",x,potencia);

        }else if (menu == 4){

            printf("Digite o valor de x desejado: ");
            scanf("%d",&x);
            printf("Digite o valor de k desejado: ");
            scanf("%d",&k);
            limpaTela();

            printf("[x^k]' = k . x^k-1\n");
            printf("\n");

            printf("Resultado com numeros\n");
            printf("\n");

            printf("[%d^%d]' = %d . %d^%d ",x,k,k,x,k-1);

        }
        pressioneEnter();

    }

    int kx(menu){
        int x,k,potencia;
        if (menu ==3){
            printf("Digite o valor de x desejado: ");
            scanf("%d",&x);
            printf("Digite o valor de k desejado: ");
            scanf("%d",&k);

            potencia = pow(k,x);

            limpaTela();

            printf("\nf(%d) = %d\n",x,potencia);

        }else if (menu ==4){
            printf("Digite o valor de x desejado: ");
            scanf("%d",&x);
            printf("Digite o valor de k desejado: ");
            scanf("%d",&k);

            printf("[k^x]' = k . ln(k)\n");
            printf("\n");

            printf("Resultado com numeros\n");
            printf("\n");

            printf("[%d^%d]' = %d . ln(%d)",k,x,k,k);
        }
        pressioneEnter();

    }

    int ex(menu){
        float x,potencia;
        if (menu ==3){
            printf("Digite o valor de x desejado: ");
            scanf("%f",&x);


            potencia = pow(e,x);

            limpaTela();

            printf("\nf(%.0f) = %.4f\n",x,potencia);

        }else if (menu ==4){
            printf("Digite o valor de x: ");
            scanf("%f",&x);
            limpaTela();
            printf("[e^x] = e . ln(e) = e^x\n");
            printf("            { 1 } \n");

            printf("\n");

            printf("Resultado com numeros\n");

            printf("\n");

            printf("[%.2f^%.0f] = %.2f . ln(%.2f) = %.2f^%.0f\n",e,x,e,e,e,x);
            printf("                  {  1  } \n");
        }
        pressioneEnter();

    }

    int logkx(menu){
        float k,x,nep;
        if (menu == 3){
            printf("f(x) = logk(x) \n\n");
            printf("Digite o logaritmando (x): ");
            scanf("%f",&x);
            printf("Digite a base (k): ");
            scanf("%f",&k);

            nep = log10(x) / log10(k);

            printf("f (%.0f) = log(%.0f) = %.2f",x,k,nep);

        }else if (menu == 4){
            printf("Digite o valor de x: ");
            scanf("%f",&x);
            printf("Digite o valor de k desejado: ");
            scanf("%f",&k);
            limpaTela();

            printf("logk (x)' =   1\n");
            printf("            -----\n");
            printf("           x . ln(k)\n");

            printf("\nResultados com numeros \n");
            printf("\n");

            printf("log%.0f (%.0f)' =   1\n",k,x);
            printf("            -----\n");
            printf("           %.0f . ln(%.0f)\n",x,k);

        }
        pressioneEnter();

    }

    int lnx(menu){
        float x,resultado;
        if (menu == 3){
            printf("Digite o valor de x desejado: ");
            scanf("%f",&x);

            resultado = log(x);

            limpaTela();

            printf("f(%.0f) = %.4f",x,resultado);

        }else if (menu == 4){
            printf("Digite o valor de x: ");
            scanf("%f",&x);
            limpaTela();
            printf("[ln(x)]' = [log e(x)]' = 1 =     1 \n");
            printf("                       -----    ---\n");
            printf("                      x . ln(e)  x\n");
            printf("                           {1}");
            printf("\n");
            printf("e = %.2f",e);
            printf("\n");

            printf("\n Resultado com numeros\n");
            printf("\n");

            printf("[ln(%.0f)]' = [log %.2f(%.0f)]' = 1 =     1 \n",x,e,x);
            printf("                          -----    ---\n");
            printf("                      %.0f . ln(%.2f)  %.0f\n",x,e,x);
            printf("                           {1}");
            printf("\n");
        }
        pressioneEnter();

    }

    int xx(menu){
        float x;
        if (menu== 3){
            printf("Digite o valor de x desejado: ");
            scanf("%f",&x);

            limpaTela();

            printf("f(%.0f) = %.2f",x,1/x);

        }else if (menu == 4) {
            printf("Digite o valor de x desejado: ");
            scanf("%f", &x);
            limpaTela();
            printf(" 1 =  1\n");
            printf("---  ---\n");
            printf(" x   x^2\n");
            printf("\n");

            printf("Resultado com numeros");
            printf("\n");

            printf(" 1 =  1\n");
            printf("---  ---\n");
            printf(" %.0f   %.0f^2\n", x, x);
        }
        pressioneEnter();
    }

    int senx(menu){
        double x;
        if (menu == 3){
            printf("Digite o valor de x desejado: ");
            scanf("%lf",&x);

            limpaTela();

            printf("f(%.0lf) = %.3f\n",x, sin((x*PI)/180));

        }else if (menu == 4){
            printf("Digite o valor de x desejado: ");
            scanf("%lf",&x);

            printf("[sen(x)] = cos(x)\n");
            printf("\n");

            printf("Resultado com numeros");
            printf("\n");

            printf("[sen(%.0lf)]' = cos(%.0lf)\n",x,x);
        }
        pressioneEnter();

    }

    int cosx(menu){
         double x;
        if (menu == 3){
            printf("Digite o valor de x desejado: ");
            scanf("%lf",&x);

            limpaTela();

            printf("f(%.0lf) = %.3f\n",x, cos((x*PI)/180));

        }else if(menu == 4){
            double x;
            printf("Digite o valor de x desejado: ");
            scanf("%lf",&x);

            printf("[cos(x)]' = -sen(x)\n");
            printf("\n");

            printf("Resultado com numeros");
            printf("\n");

            printf("[cos(%.0lf)]' = -sen(%.0lf)\n",x,x);
        }
        pressioneEnter();

    }

    int tanx(menu){
        double x;
        if (menu ==3){
            printf("Digite o valor de x desejado: ");
            scanf("%lf",&x);

            limpaTela();

            printf("f(%.0lf) = %.3f\n",x, tan((x*PI)/180));
        }else if(menu == 4){
            printf("Digite o valor de x desejado: ");
            scanf("%lf",&x);
            limpaTela();
            printf("[tg(x)]' = sec^2(x)\n");
            printf("\n");

            printf("Resultado com numeros");
            printf("\n");

            printf("[tg(%.0lf)]' = sec^2(%.0lf)\n",x,x);
        }
        pressioneEnter();
    }

