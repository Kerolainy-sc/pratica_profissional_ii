#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota[4];
    float soma = 0.0f; // Inicializa soma
    int i;

    // Entrada das notas
    for (i = 0; i < 4; i++) {
        printf("Digite %iª nota: ", i + 1);
        if (scanf("%f", &nota[i]) != 1) {
            printf("Entrada inválida!\n");
            return 1;
        }
        soma += nota[i]; // Acumula a soma
        system("clear"); // No Windows use "cls"
    }

    // Saída das notas
    for (i = 0; i < 4; i++) {
        printf("%iª nota: %.2f\n", i + 1, nota[i]);
    }

    // Cálculo e exibição da média
    float media = soma / 4.0f;
    printf("Média: %.2f\n", media);

    return 0;
}
