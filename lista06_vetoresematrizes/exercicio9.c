#include <stdlib.h>
#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);
    int *vet = (int*)malloc(N*sizeof(int));
    for (int i = 0; i < N; i++) scanf("%d", (vet + i));
    int aux;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= N - 1; j++) {
            if (*(vet + j) > *(vet + j + 1)) {
                aux = *(vet + j);
                *(vet + j) = *(vet + j + 1);
                *(vet + j + 1) = aux;
            }
        }
    }
    for (int i = 0; i < N; i++) printf("%d ", *(vet + i));
    free(vet);
}