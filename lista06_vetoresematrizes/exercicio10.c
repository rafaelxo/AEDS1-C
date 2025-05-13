#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
    char *texto = (char*)malloc(100*sizeof(char));
    scanf(" %[^\n]", texto);
    int tam = strlen(texto);
    char letra;
    int vogais = 0, consoantes = 0;
    for (int i = 0; i < tam; i++) {
        letra = *(texto + i);
        while (letra != ' ' && letra != '\0') {
            if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'U' || letra == 'u' || letra == 'U') vogais++;
            else consoantes++;
            letra = '\0';
        }
    }
    printf("Vogais: %d\nConsoantes: %d\n", vogais, consoantes);
    free(texto);
}