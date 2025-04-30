#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *arquivo = fopen("arq7.txt", "w");
    int N, vogais = 0;
    char letra;
    scanf("%d", &N);
    for (int cont1 = 1; cont1 <= N; cont1++) {
        scanf(" %c", &letra);
        fprintf(arquivo, "%c\n", letra);
    }
    rewind(arquivo);
    while (fscanf(arquivo, "%c", &letra) != EOF) if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') vogais++;
    fclose(arquivo);
    printf("%d", vogais);
}