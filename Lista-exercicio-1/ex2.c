#include <stdio.h>
#include <string.h>

/* fiz o programa de forma com que o professor ou corretor possa digitar sua matriz, e suas dimensões, a princípio para treinar

eu uso o vscode como editor e rodo tudo pelo terminal criando um executavel, para criar eu uso o gcc -o "qualquer nome do executavel que desejar" "nome do programa".c

depois do executavel criado eu rodo pelo próprio terminal usando ./"nome do executavel que colocou no gcc"
*/

int multiplica_matriz(int na, int ma, int nb, int mb, float matrizA[na][ma], float matrizB[nb][mb], float matrizC[na][mb], int n, float matriz_resul[na][mb]) {
    for (int i = 0; i < na; i++) {
        for (int j = 0; j < mb; j++){
            matrizC[i][j] = 0.0;
            for (int k = 0; k < na; k++){
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    //inicializando matriz resultante de C
    for(int i = 0; i < na; i++){
        for (int j=0; j<mb; j++){
            matriz_resul[i][j] = matrizC[i][j];
        }
    }

    for (int count = 1; count < n; count++) {
        float matrizTemp[na][mb];

        //copia matriz resultado atual
        for (int i = 0; i < na; i++) {
            for (int j = 0; j < mb; j++) {
                matrizTemp[i][j] = matriz_resul[i][j];
            }
        }
        // multiplicação matriz resultado atual com matrizC original
        for (int i = 0; i < na; i++) {
            for (int j = 0; j < mb; j++) {
                matriz_resul[i][j] = 0;

                for (int k = 0; k < na; k++) {
                    matriz_resul[i][j] += matrizTemp[i][k] * matrizC[k][j];
                }
            }
        }
    }
}

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
        if (n >= 1) {
            float matrizA[na][ma];
            float matrizB[nb][mb];
            float matrizC[na][mb];
            float matriz_resul[na][mb];

            //Exemplo digite o valor como: 1 2 3 4 5 6 ... n, espaçados apenas por um espaço
            printf("Digite os valores de matriz A linha por linha: ");
            //lendo matriz
            for (int i = 0; i < na; i++){
                for (int j = 0; j <ma; j++){
                    scanf("%2f", &matrizA[i][j]);
                }
            }
            printf("Digite os valores da matriz B: ");
            //lendo matriz
            for (int i = 0; i < na; i++){
                for (int j = 0; j <ma; j++){
                    scanf("%2f", &matrizB[i][j]);
                }
            }

            multiplica_matriz(na,ma,nb,mb,matrizA,matrizB,matrizC,n,matriz_resul);

            printf("MatrizC (%d x %d) resultante da multiplicação n vezes: \n", na, mb);
            for(int i = 0; i < na; i++){
                for (int j=0; j<mb; j++){
                    printf("%f ", matriz_resul[i][j]);
                }
                printf("\n");
            }
        } 
    }
}

