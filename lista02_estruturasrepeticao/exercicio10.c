#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0;
    scanf("%d", &N);
    while (N > 0) {
        if (N == 1) {
            c1++;
        } else if (N == 2) {
            c2++;
        } else if (N == 3) {
            c3++;
        } else if (N == 4) {
            c4++;
        } else if (N == 5) {
            nulo++;
        } else if (N == 6) {
            branco++;
        }
        scanf("%d", &N);
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d", c1, c2, c3, c4, nulo, branco);
}
