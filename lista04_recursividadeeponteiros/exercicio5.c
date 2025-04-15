#include <stdio.h>
#include <stdlib.h>

int fatorial (int N) {
    if (N == 1) return 1;
    else return N*fatorial(N-1);
}

double serie (int n) {
    if (n == 1) return 1;
    else return 1.0/fatorial(n) + serie(n-1);
}

int main () {
    int N;
    scanf("%d", &N);
    printf("%.2f", serie(N));
}