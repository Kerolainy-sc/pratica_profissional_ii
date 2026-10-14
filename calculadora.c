#include <stdio.h>


float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    
    if (b == 0) {
        printf("\nErro: Divisao por zero não é permitida!\n");
        return 0; 
    }
    return a / b;
}

int main() {
    int opcao;
    float a, b, resultado;

    do {
        
        printf("\n===========================\n");
        printf("    CALCULADORA EM C       \n");
        printf("===========================\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("0. Sair\n");
        printf("---------------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
     if (opcao == 0) {
            printf("\nEncerrado!\n");
            break;
        }

        
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &a);
            printf("Digite o segundo numero: ");
            scanf("%f", &b);
        }

       
        switch (opcao) {
            case 1:
                resultado = somar(a, b);
                printf("Resultado: %.2f + %.2f = %.2f\n", a, b, resultado);
                break;
            case 2:
                resultado = subtrair(a, b);
                printf("Resultado: %.2f - %.2f = %.2f\n", a, b, resultado);
                break;
            case 3:
                resultado = multiplicar(a, b);
                printf("Resultado: %.2f * %.2f = %.2f\n", a, b, resultado);
                break;
            case 4:
        
                if ('b! = 0') {
                    resultado = dividir(a, b);
                    printf("Resultado: %.2f / %.2f = %.2f\n", a, b, resultado);
                }
                break;
            default:
                printf("\nOpcao invalida! Por favor, escolha uma opcao valida.\n");
        }

    } while (opcao != 0);

    return 0;
}