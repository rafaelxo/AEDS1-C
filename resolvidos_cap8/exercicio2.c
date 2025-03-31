#include <stdio.h>
#include <stdlib.h>

int soma (int n1, int n2) {
    int soma = 0, troca;
    if (n1 > n2) {
        troca = n1;
        n1 = n2;
        n2 = troca;
    }
    for (int cont1 = n1; cont1 <= n2; cont1++) {
        soma += cont1;
    }
    return soma;
}

int main () {
    int n1, n2;
    printf("Insira dois numeros para somar os valores entre si:\n");
    scanf("%d%d", &n1, &n2);
    printf("\nO valor da soma dos valores entre %d e %d e %d!\n", n1, n2, soma(n1, n2));
}
