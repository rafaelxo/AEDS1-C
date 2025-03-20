#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont1, N, cont2;
    float fat, E = 1;
    printf("Insira um numero para realizar o calculo:\n");
    scanf("%d", &N);
    while (cont1 < N) {
        fat = 1;
        cont1++;
        for (cont2 = 1; cont2 <= cont1; cont2++) {
            fat *= cont2;
        }
        E += 1.0/fat;
    }
    printf("\nO valor da formula para o numero %d e:\n%f\n", N, E);
}
