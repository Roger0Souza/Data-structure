#include <stdio.h>
#include <string.h>

/* Eu usei o vscode para programar, e usei o cógido gcc -o "nome do executavel que desejar" "nome do programa".c

isso vai criar um executavel do programa e para executar eu usava ./"nome do executavel indicou anteriormente"

assim ele vai executar o programa pelo terminal e todos as saídas também seram lá. */


int main() {
    char p1[100], p2[100], p[100];
    char resul[100];

    printf("a = ");
    scanf("%s", p1);
    printf("b = ");
    scanf("%s", p2);
    printf("c = ");
    scanf("%s", p);

    strcat(p1,p);
    strcat(p1,p2);

    return printf("%s \n", p1); 
}