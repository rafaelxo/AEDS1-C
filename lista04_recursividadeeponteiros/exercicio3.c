#include <stdio.h>
#include <stdlib.h>

int divisao (int numerador, int denominador) {
    return numerador/denominador;
}

int main () {
    int num, den;
    scanf("%d%d", &num, &den);
    printf("%d", divisao(num, den));
}
