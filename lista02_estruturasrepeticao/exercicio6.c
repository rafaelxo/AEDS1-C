#include <stdio.h>
#include <stdlib.h>

int main() {
    int N
    float S;
    scanf("%d", &N);
    for (int cont1 = 1; cont1 <= N; cont1++) {
        S = 1;
        for (int cont2 = 1; cont2 <= cont1; cont2++) {
            S *= cont2;
        }
        printf("%.2f", S);
    }
}