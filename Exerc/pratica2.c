
#include <stdio.h>

void main() {
    int vetor[] = { 1,2,3,4,5,6,7,8,9,10 };
    int size =  9;
    int *cont = &size;

    for (; size >= 0; (*cont)--) {
        printf("%d \n", vetor[size]);
    }

}
