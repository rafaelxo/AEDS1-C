#include <stdio.h>
#include <stdlib.h>

int conversao(int tempo) {
    int h, min, r, t;
    h = tempo/3600;
    r = tempo%3600;
    min = r/60;
    t = r%60;
    printf("\nOs segundos inseridos transformados em hora equivale a:\n%d horas : %d minutos : %d segundos", h, min, t);
}

int main() {
   int seg;
   printf("Insira os segundos para realizar a conversao:\n");
   scanf("%d", &seg);
   conversao(seg);
}
