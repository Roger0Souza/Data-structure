#include <stdio.h>
#include <math.h>
 
#define MAX_LINHA 10
#define MAX_COL 10


typedef struct matriz
{
    int linhas;
    int colunas;
    double data[MAX_LINHA][MAX_COL]; 
} Matriz;

void imprimi(Matriz mt){
    for (int i = 0; i < mt.linhas; i++) {
        printf("\n");
        for (int j = 0; j < mt.colunas; j++) {
            printf("%lf ", mt.data[i][j]);
        }        
    }
    printf("\n");
}

void imprimiComEdereco(Matriz *mt){
    for (int i = 0; i < mt->linhas; i++) {
        printf("\n");
        for (int j = 0; j < mt->colunas; j++) {
            printf("%lf ", mt->data[i][j]);
        }        
    }
    printf("\n");
}

Matriz createMatriz(int linhas, int colunas) {
    if (linhas <= 0 || colunas <= 0 || linhas > MAX_LINHA || colunas > MAX_COL) {
       printf("Dimensões invalidas");
    }
    else {
        Matriz matrix;
        matrix.linhas = linhas;
        matrix.colunas = colunas;
        for (int i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
                printf("digite linha %d e coluna %d e aperte enter: ", i+1, j+1);
                scanf("%lf", &matrix.data[i][j]);
            }    
        }
    return matrix;
    }
}


void multMatriz(Matriz *multAB, Matriz A,  Matriz B){
    if (A.colunas != B.linhas && A.linhas != B.colunas){
        printf("Esta matriz não pode ser multiplicada n vezes");
    } else {
        for (int i = 0; i < A.linhas; i++){
            for (int j = 0; j < B.colunas; j++){
                for (int k = 0; k < A.linhas; k++){
                    multAB->data[i][j] += A.data[i][k] * B.data[k][j];
                }
            }
        }
    }
}

void n_Mult(int n, Matriz *C, Matriz mult_AB) {
    if (n < 0){
        printf("Erro, expoente não pode ser negativo");
    }if (n == 0) {
        
        for (int i = 0; i < C->linhas; i++) {
            for (int j = 0; j < C->colunas; j++) {
                if (i == j) {
                    C->data[i][j] = 1.0;
                }else{
                    C->data[i][j] = 0.0;
                }
            }
        }        
    } else {
        multMatriz(C, mult_AB, mult_AB);
    }    
}

void sum_matriz(Matriz *C, Matriz A, Matriz B) {
    if (A.linhas != B.linhas || A.colunas != B.colunas) {
        printf("Erro: As matrizes A e B devem ter as mesmas dimensões para soma.\n");
    }else{
        for (int i = 0; i < A.linhas; i++) {
            for (int j = 0; j < A.colunas; j++) {
                C->data[i][j] = A.data[i][j] + B.data[i][j];
            }
        }
    }
}

Matriz sub_matriz(Matriz *C, Matriz A, Matriz B) {
    if (A.linhas != B.linhas || A.colunas != B.colunas) {
        printf("Erro: As matrizes A e B devem ter as mesmas dimensões para soma.\n");
    }else{
        for (int i = 0; i < A.linhas; i++) {
            for (int j = 0; j < A.colunas; j++) {
                C->data[i][j] = A.data[i][j] - B.data[i][j];
            }
        }
    }
}


