#include <stdio.h>
#include <stdlib.h>

int main() {
    int q_parcelas = 0;
    float valor, p_vista = 0, p_final = 0, perc_acresimo = 0, v_parcelas = 0;
    printf("Insira o valor do carro:\n");
    scanf("%f", &valor);
    p_vista = valor - valor*0.2;
    printf("\nO preco final da compra a vista e de %.2f reais!\n", p_vista);
    do {
        printf("\nEm quantas vezes deseja parcelar?\n");
        scanf("%d", &q_parcelas);
    } while (q_parcelas < 6 || q_parcelas > 60 || q_parcelas % 6 != 0);
    for (int cont1 = 6; cont1 <= q_parcelas; cont1 += 6){
        perc_acresimo += 0.03;
    }
    p_final += valor + valor*perc_acresimo;
    v_parcelas += p_final/(q_parcelas*1.0);
    printf("\nO preco final para %d parcelas e de %.2f reais!\n", q_parcelas, p_final);
}
