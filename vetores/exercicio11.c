#include <stdlib.h>
#include <stdio.h>

int main() {
    float t[12], maior_t, menor_t, maior_mes, menor_mes;
    for (int cont1 = 0; cont1 < 12; cont1++) {
        printf("Digite a temperatura media do mes %d: ", cont1 + 1);
        scanf("%f", &t[cont1]);
        if (cont1 == 0) {
            maior_t = t[cont1];
            menor_t = t[cont1];
            maior_mes = cont1 + 1;
            menor_mes = cont1 + 1;
        } else {
            if (t[cont1] > maior_t) {
                maior_t = t[cont1];
                maior_mes = cont1 + 1;
            }
            if (t[cont1] < menor_t) {
                menor_t = t[cont1];
                menor_mes = cont1 + 1;
            }
        }
    }
    if (maior_mes == 1) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em janeiro!\n", maior_t);
    else if (maior_mes == 2) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em fevereiro!\n", maior_t);
    else if (maior_mes == 3) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em marco!\n", maior_t);
    else if (maior_mes == 4) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em abril!\n", maior_t);
    else if (maior_mes == 5) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em maio!\n", maior_t);
    else if (maior_mes == 6) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em junho!\n", maior_t);
    else if (maior_mes == 7) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em julho!\n", maior_t);
    else if (maior_mes == 8) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em agosto!\n", maior_t);
    else if (maior_mes == 9) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em setembro!\n", maior_t);
    else if (maior_mes == 10) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em outubro!\n", maior_t);
    else if (maior_mes == 11) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em novembro!\n", maior_t);
    else if (maior_mes == 12) printf("\nA maior media de temperatura, equivalente a %.2f graus, foi em dezembro!\n", maior_t);
}