#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
    int N;
    scanf("%d", &N);
    char *caracter = (char*)malloc(N*sizeof(char));
    for (int i = 0; i < N; i++) scanf(" %c", (caracter + i));
    for (char *inversao = caracter + N; inversao >= caracter; inversao--) printf("%c", *inversao);
    free(caracter);
}