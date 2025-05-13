#include <stdlib.h>
#include <stdio.h>

void preenche (int *A, int *B) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) scanf("%d", (A + i*6 + j));
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) scanf("%d", (B + i*6 + j));
    }
}

int *somaAB (int *A, int *B) {
    int *S = (int*)malloc(4*6*sizeof(int));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) *(S + i*6 + j) = *(A + i*6 + j) + *(B + i*6 + j);
    }
    return S;
}

int *diferencaAB (int *A, int *B) {
    int *D = (int*)malloc(4*6*sizeof(int));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) *(D + i*6 + j) = *(A + i*6 + j) - *(B + i*6 + j);
    }
    return D;
}

int main () {
    int *A = (int*)malloc(4*6*sizeof(int));
    int *B = (int*)malloc(4*6*sizeof(int));
    preenche(A, B);
    int *S = somaAB(A, B);
    int *D = diferencaAB(A, B);
    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 6; j++) printf("%d ", *(S + i*6 + j));
    }
    printf("\n");
    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 6; j++) printf("%d ", *(D + i*6 + j));
    }
    free (A); free(B); free(S); free(D);
}