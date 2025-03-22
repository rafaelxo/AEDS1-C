#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, soma;
    printf("Digite o valor de m e n:\n");
    scanf("%d", &m);
    scanf("%d", &n);
    while (m < n) {
        soma = 0;
        for (int cont1 = m; cont1 <= n; cont1++) {
            soma += cont1;
        }
        printf("A soma dos inteiros entre de m ate n e de:\n%d\n", soma);
        scanf("%d", &m);
        scanf("%d", &n);
    }
}