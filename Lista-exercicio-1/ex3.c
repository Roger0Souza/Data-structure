#include <stdio.h>

/* Eu usei o vscode para programar, e usei o cógido gcc -o "nome do executavel que desejar" "nome do programa".c

isso vai criar um executavel do programa e para executar eu usava ./"nome do executavel indicou anteriormente"

assim ele vai executar o programa pelo terminal e todos as saídas também seram lá. */

//para testar digite a quantidade de notas que deseja qualcular se a quantidade for válida então ele vai fazer a média, caso contrário dara um erro
//caso a quantidade de notas digitadas no inicio é diferente da quantidade de notas passadas em "Digite os valores das notas" então ocorrera um erro e o programa vai parar
//certifique-se de digitar corretamente os valores pedidos


void main(){
    int q;
    printf("Digite quantidade de notas: ");
    scanf("%d", &q);
    if (q != 0){
        float notas[q], soma = 0.0, media = 0.0;
        printf("Digite os valores das notas separados por um espaço: ");
        // digite as notas seguidas de um espaço Exemplo: 1 3 5 7 ...
        for(int i=0; i < q; i++){
            scanf("%f", &notas[i]);
            soma += notas[i];
        }
        media = soma/q;
        printf("A média é: %.2f \n", media);
    }else{
        printf("Valor de quantidade de notas invalido");
    }

}