#include <stdio.h>
#include <string.h>

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