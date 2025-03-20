#include <stdio.h>
#include <stdlib.h>

int main() {
    float num;
    int d39 = 0, d2 = 0, d5 = 0;
    for (int cont1 = 1; cont1 <= 10; cont1++) {
        scanf("%f", &num);
        if ((num / 3 == (int)(num / 3)) && (num / 9 == (int)(num / 9))) {
            d39++;
        } 
        if (num / 2 == (int)(num / 2)) {
            d2++;
        }
        if (num / 5 == (int)(num / 5)) {
            d5++;
        }
        if (!((num / 3 == (int)(num / 3)) && (num / 9 == (int)(num / 9)) || num / 2 == (int)(num / 2) || num / 5 == (int)(num / 5))) {
            printf("Numero nao e divisivel pelos valores\n");
        }
    }
    printf("%d Numeros sao divisiveis por 3 e por 9\n%d Numeros sao divisiveis por 2\n%d Numeros sao divisiveis por 5", d39, d2, d5);
}
