#include <stdio.h>
#include <stdlib.h>

void converteHora(int segundos) {
    int h, min, r, seg;
    h = segundos/3600;
    r = segundos%3600;
    min = r/60;
    seg = r%60;
    printf("%d:%d:%d", h, min, seg);
}

int main() {
   int seg;
   scanf("%d", &seg);
   converteHora(seg);
}