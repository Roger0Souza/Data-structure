#include <stdio.h>
#include <math.h>

typedef struct {
    double real;
    double img;
} Complexo;
//Função pra imprimir

void imprimiComplexo(Complexo c){
    if (c.img >= 0){
        printf("%.2lf + %.2lfi\n", c.real, c.img);
    } else {
        printf("%.2lf - %.2lfi\n", c.real, fabs(c.img));
    }
}

// Funções para obter a parte imaginária e parte real de um número complexo
double obterParteImaginaria(const Complexo* z) {
    return z->img;
}

double obterParteReal(const Complexo* z) {
    return z->real;
}

// Funções para realizar operações com números complexos
Complexo somarComplexos(const Complexo* z1, const Complexo* z2) {
    Complexo resultado;
    resultado.real = z1->real + z2->real;
    resultado.img = z1->img + z2->img;
    return resultado;
}

Complexo subtrairComplexos(const Complexo* z1, const Complexo* z2) {
    Complexo resultado;
    resultado.real = z1->real - z2->real;
    resultado.img = z1->img - z2->img;
    return resultado;
}

Complexo multiplicarComplexos(const Complexo* z1, const Complexo* z2) {
    Complexo resultado;
    resultado.real = z1->real * z2->real - z1->img * z2->img;
    resultado.img = z1->real * z2->img + z1->img * z2->real;
    return resultado;
}

Complexo dividirComplexos(const Complexo* z1, const Complexo* z2) {
    Complexo resultado;
    double divisor = z2->real * z2->real + z2->img * z2->img;
    resultado.real = (z1->real * z2->real + z1->img * z2->img) / divisor;
    resultado.img = (z1->img * z2->real - z1->real * z2->img) / divisor;
    return resultado;
}

double valorAbsolutoComplexo(const Complexo* z) {
    return z->real * z->real + z->img * z->img;
}

