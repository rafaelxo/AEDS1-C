#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont1, N, num, cont2;
    float fat;
    printf("Insira quantas vezes deseja calcular o fatorial de um numero:\n");
    scanf("%d", &N);
    while (cont1 < N) {
        printf("\nInsira um numero para calcular o fatorial:\n");
        scanf("%d", &num);
        fat = 1;
        cont1++;
        for (cont2 = 1; cont2 <= num; cont2++) {
            fat *= cont2;
        }
    printf("\nO valor do fatorial de %d e:\n%.0f\n", num, fat);
    }
}
