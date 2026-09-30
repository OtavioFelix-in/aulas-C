// ponteiros vamos fazer questões sobre ponteiros em C
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", (void *)&x);
    printf("Valor de p (endereço guardado): %p\n", (void *)p);
    printf("Valor apontado por p: %d\n", *p);

    *p = 20;
    printf("\nApós *p = 20, x vale: %d\n", x);

    return 0;
}
