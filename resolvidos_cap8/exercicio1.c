#include <stdio.h>
#include <stdlib.h>

void verificacao(int num) {
    if (num > 0) {
        printf("\nNumero positivo!");
    } else if (num == 0) {
        printf("\nNumero nulo!");
    } else {
        printf("\nNumero negativo!");
    }
}

int main() {
   int N;
   printf("Insira um numero:\n");
   scanf("%d", &N);
   (verificacao(N));
}
