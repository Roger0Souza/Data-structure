#include <stdio.h>

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