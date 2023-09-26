/*
    Para Executar o o TAD basta usar: gcc -o "nome executavel" complexo.h

    Fiz o programa de forma que o usuário consiga definir 2 números complexos exemplo de digitação: a+bi sendo a e b qualquer número real

    Para executar o programa main basta usar: gcc -0 "nome executavel" Ex1.c
*/

#include <stdio.h>
#include <complexo.h>
#include <math.h>

int main() {
    Complexo n1, n2, resul;
    double Abs[2];
    char operacao;

    printf("Digite o primeiro número complexo (Forma: a+bi): ");
    scanf("%lf%lfi", &n1.real, &n1.img);

    printf("Digite o segundo número complexo (Forma: a+bi): ");
    scanf("%lf%lfi", &n2.real, &n2.img);

    while (getchar() != '\n');
    printf("\nPara obter parte real digite: R\nPara obter parte imaginária digite: I\nPara somar digite: +\nSubtrair -\nMultiplicar *\nDividir /\nValor absoluto digite: A\nDigite alguma das opções de operação listadas acima: \n");
    scanf("%c", &operacao);

    switch (operacao) {
        
        case 'R':
            printf("Parte real n1: %lf \n", obterParteReal(&n1));
            printf("Parte real n2: %lf \n", obterParteReal(&n2));
            break;
        case 'I':
            printf("Parte imaginária n1: %lf \n", obterParteImaginaria(&n1));
            printf("Parte imaginária n2: %lf \n", obterParteImaginaria(&n2));
            break;
        case '+':
            resul = somarComplexos(&n1, &n2);
            imprimiComplexo(resul);
            break;
        case '-':
            resul = subtrairComplexos(&n1, &n2);
            imprimiComplexo(resul);
            break;
        case '*':
            resul = multiplicarComplexos(&n1, &n2);
            imprimiComplexo(resul);
            break;
        case '/':
            resul = dividirComplexos(&n1, &n2);
            imprimiComplexo(resul);
            break;
        case 'A':
            Abs[0] = sqrt(valorAbsolutoComplexo(&n1));
            printf("Valor absoluto do primeiro número: %lf \n", Abs[0]);
            Abs[1] = sqrt(valorAbsolutoComplexo(&n2));
            printf("Valor absoluto do segundo número: %lf \n", Abs[1]);  
            break;
        default:
            printf("Operação invalida. \n");
    }
    return 0;   
}

