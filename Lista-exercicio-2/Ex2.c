//Aluno: Roger Rafael Serqueira de souza Nº USP: 11895006
//Aluno: Danilo Carneiro Oliveira Nº USP: 11895006


/*

para executar o programa eu usei o gcc -o "nome executavel" Ex2.c

no menu tem algumas intruções de como usa-lo, em geral testei para matrizes 2x2

na hora de definir o tamanho da matriz, defina separado por virgula exemplo: Digite as dimensões da primeira matriz:
2,2

para colocar os dados das duas matrizes deve digitar o número e em seguida apertar enter assim vai colocando linha por linha e coluna por coluna

uma maneira rapida tb é executar o programa main, com o arquivo .txt de acordo com o input e operação que deseja realizar

*/


#include <stdio.h>
#include <math.h>
#include "matriz.h"

int main(){
    int m1,n1,n2,m2, n, opera;
    printf("Digite as dimensões da primeira matriz Exemplo: 2,2 \n");
    scanf("%d,%d", &n1, &m1);
    printf("Digite as dimensões da sugunda matriz \n");
    scanf("%d,%d", &n2, &m2);
    printf("Digite os valores da matriz 1 \n");
    Matriz matrix1 = createMatriz(n1,m1);
    printf("Digite os valores da matriz 2 \n");
    Matriz matrix2 = createMatriz(n2,m2);
    printf("\n Multiplicar matrizes Digite: 1 \n Multiplicar (A*B)^n Digite: 2 \n Somar Digite: 3 \n Subtrair Digite: 4  \n Digite qual operação deseja realizar: ");
    scanf("%d", &opera);
    Matriz mult_AB;
    Matriz C;
    Matriz Sum;
    Matriz Sub;
    if (opera == 1){
        mult_AB.linhas =  matrix1.linhas;
        mult_AB.colunas =  matrix2.colunas;
        multMatriz(&mult_AB, matrix1, matrix2);
        printf("\n");
        imprimi(mult_AB);
    } else if(opera == 2){
        printf("Digite qual a potencia usada para multiplicação (n): \n");
        scanf("%d", &n);
        C.linhas = mult_AB.linhas;
        C.colunas = mult_AB.colunas;
        printf("\n");
        n_Mult(n, &C, mult_AB);
        imprimi(C);
    }else if(opera == 3){
        Sum.linhas = matrix1.linhas;
        Sum.colunas = matrix2.colunas;
        printf("\n");
        sum_matriz(&Sum, matrix1, matrix2);
        imprimi(Sum);
    }else{
        Sub.linhas = matrix1.linhas;
        Sub.colunas = matrix2.colunas;
        printf("\n");
        sub_matriz(&Sub, matrix1, matrix2);
        imprimi(Sub);

    }

    

    






}