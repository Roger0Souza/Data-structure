
/*Pratique a declaração e utilização de
ponteiros.
defina e inicialize uma variável inteira
defina um ponteiro para inteiro
modifique o valor da variável através do
ponteiro
verifique os novos valores da variável usando
printf */


#include <stdio.h>

void main() {
    int x = 0;    
    int *po = &x;
    
    for (; *po <= 10; (*po)++) {
        printf("%d \n", x);
    }

}
