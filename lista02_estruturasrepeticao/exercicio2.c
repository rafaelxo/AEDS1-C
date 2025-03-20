#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    float p_pos = 0, p_neg = 0, p_zero = 0;
    long int pos = 0, neg = 0, zero = 0;
    scanf("%d", &N);
    for (int cont1 = 1; cont1 <= N; cont1++) {
        long int num;
        scanf("%ld", &num);
        if (num < 0) {
        neg += 1;
        } else if (num == 0) {
        zero += 1;
        } else {
        pos += 1;
        }
    }
    p_pos = pos*100/N;
    p_neg = neg*100/N;
    p_zero = zero*100/N;
    printf("%.0f%% POSITIVOS\n%0.f%% NEGATIVOS\n%0.f%% ZEROS", p_pos, p_neg, p_zero);
}
