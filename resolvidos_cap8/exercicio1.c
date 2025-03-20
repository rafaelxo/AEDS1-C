#include <stdio.h>
#include <stdlib.h>

int verificacao(int num) {
    if (num > 0) {
        return 1;
    } else if (num == 0) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
   int N;
   printf("Insira um numero:\n");
   scanf("%d", &N);
   switch (verificacao(N)) {
        case 1: printf("\nNumero positivo!\n"); break;
        case 0: printf("\nZero!\n"); break;
        case -1: printf("\nNumero negativo!\n"); break;
        default: printf("\nErro!\n"); break;
   }
}
