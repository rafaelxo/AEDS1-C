#include <stdio.h>
#include <stdlib.h>

float expressao (N) {
    float S = 1;
    for (int cont1 = 1; cont1 <= N; cont1++) {
        int fat = 1;
        for (int cont2 = 1; cont2 <= cont1; cont2++) {
            fat *= cont2;
        }
        S += 1.0/fat;
    }
    return S;
}

int main () {
    int N;
    printf("Insira o valor para calcular a expressao:\n");
    scanf("%d", &N);
    printf("\nO valor da expressao e %.2f!\n", expressao(N));
}