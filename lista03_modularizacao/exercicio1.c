#include <stdlib.h>
#include <stdio.h>

void parametro (float n1, float n2, float n3, char opcao) {
    if (opcao == 'A') {
        printf("%.2f\n", (n1 + n2 + n3)/3.0);
    } else if (opcao == 'P') {
        printf("%.2f\n", (n1*5 + n2*3 + n3*2)/(5+3+2));
    }
}

int main () {
    int N;
    float n1, n2, n3;
    char opcao;
    scanf("%d", &N);
    for (int cont1 = 1; cont1 <= N; cont1++) {
        scanf("%f%f%f %c", &n1, &n2, &n3, &opcao);
        parametro(n1, n2, n3, opcao);
    }
}