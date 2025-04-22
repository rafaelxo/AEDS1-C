#include <stdio.h>
#include <stdlib.h>

int main() {
    int y = 10;
    int *ptrY = &y;
    int **ptrPtrY = &ptrY;
    printf("O conteudo de y e %d\n", y);
    printf("O endereco de y e %x\n", &y);
    printf("O conteudo de ptrY e %d\n", *ptrY);
    printf("O endereco de ptrY e %x referenciando a %x\n", &ptrY, ptrY);
    printf("O conteudo de ptrPtrY e %d\n", **ptrPtrY);
    printf("O endereco de ptrPtrY e %x referenciando a %x\n", &ptrPtrY, ptrPtrY);
    printf("\n");
    (*ptrY)++;
    printf("O conteudo de y e %d\n", y);
    printf("O endereco de y e %x\n", &y);
    printf("O conteudo de ptrY e %d\n", *ptrY);
    printf("O endereco de ptrY e %x referenciando a %x\n", &ptrY, ptrY);
    printf("O conteudo de ptrPtrY e %d\n", **ptrPtrY);
    printf("O endereco de ptrPtrY e %x referenciando a %x\n", &ptrPtrY, ptrPtrY);
    printf("\n");
    ptrY++;
    printf("O conteudo de y e %d\n", y);
    printf("O endereco de y e %x\n", &y);
    printf("O conteudo de ptrY e %d\n", *ptrY);
    printf("O endereco de ptrY e %x referenciando a %x\n", &ptrY, ptrY);
    printf("O conteudo de ptrPtrY e %d\n", **ptrPtrY);
    printf("O endereco de ptrPtrY e %x referenciando a %x\n", &ptrPtrY, ptrPtrY);
    printf("\n");
    **ptrPtrY += 5;
    printf("O conteudo de y e %d\n", y);
    printf("O endereco de y e %x\n", &y);
    printf("O conteudo de ptrY e %d\n", *ptrY);
    printf("O endereco de ptrY e %x referenciando a %x\n", &ptrY, ptrY);
    printf("O conteudo de ptrPtrY e %d\n", **ptrPtrY);
    printf("O endereco de ptrPtrY e %x referenciando a %x\n", &ptrPtrY, ptrPtrY);
    printf("\n");
    int x = 5, z = 6, *px = &x, *pz = &z;
    if (px < pz) {
        printf("px = %p e pz = %p", px, pz);
        printf("\nQuantidade de casas inteiras de diferenca entre os enderecos apontados:\npz - px = %ld", (pz-px));
    } else {
        printf("\npx = %p e pz = %p", px, pz);
        printf("\nQuantidade de casas inteiras de diferenca entre os enderecos apontados:\npx - pz = %ld\n", (px-pz));
    }
    printf("\nValores atualizados:");
    printf("\npx= %p, *px= %d, &px = %p", px, *px, &px);
    printf("\npz= %p, *pz= %d, &pz = %p\n", pz, *pz, &pz);
    pz++;
    printf("\npz aponta para um inteiro a frente (px aponta para ele tambem):\npz= %p, *pz= %d, &pz = %p\n", pz, *pz, &pz);
    px = pz + 5;
    printf("\npx aponta para 5 inteiros apos o que pz aponta (diferenca em hexa e 14 e em decimal 20):\npx= %p, *px= %d, &px = %p\n", px, *px, &px);
    printf("\nQuantidade de casas inteiras de diferenca entre os enderecos apontados:\npx - pz = %ld\n", (px-pz));
}
