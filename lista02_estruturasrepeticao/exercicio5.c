#include <stdio.h>
#include <stdlib.h>

int main() {
    int filhos, s_pessoas = 0;
    float salario, m_salario = 0, m_filhos = 0, maior_salario = 0, salario_M_100;
    for (int cont1 = 1; cont1 >= 0; cont1++) {
        scanf("%f%d", &salario, &filhos);
        m_salario += salario;
        m_filhos += filhos;
        s_pessoas++;
        if (salario > maior_salario) {
            maior_salario = salario;
        }
        if (salario <= 100) {
            salario_M_100++;
        }
    }
    printf("%.2f\n%.0f\n%.2f\n%.2f", m_salario/s_pessoas, m_filhos/s_pessoas, maior_salario, salario_M_100/s_pessoas*100);
}
