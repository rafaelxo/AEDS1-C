#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, raiz;
    scanf("%f%f", &a, &b);
    if (a != 0 && b != 0) {
        raiz = -b/(a*1.0);
        printf("%.2f", raiz);
    }
}
