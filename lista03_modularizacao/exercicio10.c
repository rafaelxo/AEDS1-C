#include <stdlib.h>
#include <stdio.h>

char categoria (int idade) {
    if (idade >= 5 && idade <= 7) {
        return 'F';
    } else if (idade >= 8 && idade <= 10) {
        return 'E';
    } else if (idade >= 11 && idade <= 13) {
        return 'D';
    } else if (idade >= 14 && idade <= 15) {
        return 'C';
    } else if (idade >= 16 && idade <= 17) {
        return 'B';
    } else if (idade > 18) {
        return 'A';
    }
}

int main () {
    int N, idade;
    scanf("%d", &N);
    for (int cont1 = 1; cont1 <= N; cont1++) {
        scanf("%d", &idade);
        printf("%c\n", categoria(idade));
    }
}
