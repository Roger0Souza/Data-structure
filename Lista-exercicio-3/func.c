#include <stdio.h>
#include <stdlib.h>
#include "strc.h"

void cria_lista_vazia(){
    Lista *novaLista = (Lista*)malloc(sizeof(Lista));
    if (novaLista == NULL) {
        prinf("erro ao alocar memória para o nó\n");
        exit(1);
    }
    novaLista->nome = NULL;
    novaLista->proximo = NULL;
    novaLista->anterior = NULL; 
}