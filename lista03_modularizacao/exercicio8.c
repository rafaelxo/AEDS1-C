#include <stdlib.h>
#include <stdio.h>

float conta (int N) {
    int num = 2;
    float S = 0;
    for (int cont1 = 1; cont1 <= N; cont1++) {
        S += num*1.0/(cont1+3);
        num += cont1*2 + 1;
    }
    return S;
}

int main () {
    int N;
    scanf("%d", &N);
    printf("%.6f\n", conta(N));
}