#include <stdlib.h>
#include <stdio.h>

float media (N) {
    float nota, media = 0;
    for (int cont1 = 1; cont1 <= N; cont1++) {
        scanf("%f", &nota);
        media += nota;
    }
    return (media/N*1.0);
}

int main () {
    int N;
    scanf("%d", &N);
    printf("%.1f", media(N));
}