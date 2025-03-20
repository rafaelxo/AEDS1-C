#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int cont1, cont2, exp= 2, N, x, num = 1, sinal = -1, incr = 1;
    float S = 0, fat;
    printf("Insira o numero de termos e o valor de X:\n");
    scanf("%d%d", &N, &x);
    while (cont1 < N) {
        fat = 1;
        cont1++;
        for (cont2 = 1; cont2 <= num; cont2++) {
            fat *= cont2;
        }
        S += sinal * (pow(x, exp)/fat);
        sinal *= -1;
        exp++;
        if (num == 4) {
            incr -= 1;
        } else if (num == 1) {
            incr += 1;
        }
        num += incr;
    }
    printf("\nO valor da formula para %d termos e X=%d e de:\n%f\n", N, x, S);
}
