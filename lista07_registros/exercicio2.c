#include <stdlib.h>
#include <stdio.h>

typedef struct loja {
    char *nome;
    char *tel;
    float preco;
} loja;

int main () {
    loja l[15];
    float media = 0;
    for (int i = 0; i < 15; i++) {
        (l + i)->nome = (char*)malloc(100*sizeof(char));
        (l + i)->tel = (char*)malloc(100*sizeof(char));
        scanf(" %[^\n]", (l + i)->nome);
        scanf(" %[^\n]", (l + i)->tel);
        scanf("%f", &l[i].preco);
        media += l[i].preco;
    }
    media /= 15;
    printf("A media dos precos cadastrados e: %.2f\n", media);
    printf("Lojas com precos abaixo da media:\n");
    for (int i = 0; i < 15; i++) {
        if (l[i].preco < media) printf("Nome: %s\nTelefone: %s\n", (l + i)->nome, (l + i)->tel);
    }
    for (int i = 0; i < 15; i++) {
        free((l + i)->nome);
        free((l + i)->tel);
    }
}