#include <stdio.h>
#include <string.h>

void main(){

    int na, nb, ma, mb, n;
    printf("Digite as dimensões da matriz A (n m): ");
    scanf("%d %d", &na, &ma);
    printf("Digite as dimensões da matriz B: ");
    scanf("%d %d", &nb, &mb);
    printf("Digite quantas vezes deseja efetuar a multiplicação: ");
    scanf("%d", &n);
    
    //validando

    //verificar se a multiplicação n vezes é possível
        //para isso temos que a matriz C_resultado da multiplicação A_n_m e B_n_m 
        //C_resultado C = C_(número de linhas A)_(número de colunas B)
        //portando a matriz C so podera ser elevada a 2, 3, ... n se e sómente se
        //a matriz C_resultado C for quadrática para isso o número de linhas de A tem que ser o mesmo que o número de colunas de B

    if (ma != nb || na != mb) {
        printf("As matrizes não podem ser multiplicadas n vezes\n");
    } else { //entrando com os dados
        int matrizA[na][ma], matrizB[nb][mb];
        printf("Digite elementos da primeira matriz (%d x %d) linha por linha (Ex: 1 2 3 4 5 6 ...): ", na, ma);
        for (int i = 0; i < na; i++ ) {
            for (int j = 0; j < ma; j++) {
                scanf("%d", &matrizA[i][j]);
            }
        }
        printf("Digite elementos da segunda matriz (%d x %d) linha por linha: ", nb, mb);
        for (int i = 0; i < na; i++ ) {
            for (int j = 0; j < ma; j++) {
                scanf("%d", &matrizB[i][j]);
            }
        }

        //Obtendo matriz C_resultado
        int C_resul[na][mb];

        //preenchendo matriz C_resultante com 0
        //for (int i = 0; i < na; i++) {
        //    for (int j = 0; j < mb; j++) {
        //        C_resul[i][j] = 0;
        //    }
        //}

        for (int i = 0; i < na; i++) {
            for (int j = 0; j < mb; j++) {
                C_resul[i][j] = 0;
                for (int k = 0; k < na; k++) {
                    C_resul[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }

        int matriz_resul[na][mb];

        for (int i = 0; i < na; i++) {
            for (int j = 0; j < mb; j++) {
                matriz_resul[i][j] = 0;
                for (int k = 0; k < na; k++) {
                    matriz_resul[i][j] = C_resul[i][k] * C_resul[k][j];
                }
                
            }

        }
        

        //mostrando matriz C_resultante da multiplicação de A e B
        printf("Matriz C_resultante C (%d x %d):\n", na, mb);
        for (int i = 0; i < na; i++) {
            for (int j = 0; j < mb; j++) {
                printf("%d ", C_resul[i][j]);
        }
        printf("\n");
        //mostrando matriz resultado de n multiplicações
        printf("Multiplicação da matriz n vezes (%d x %d):\n", na, mb);
        for (int i = 0; i < na; i++) {
            for (int j = 0; j < mb; j++) {
                printf("%d ", matriz_resul[i][j]);
        }
        printf("\n");
    }
    }
}