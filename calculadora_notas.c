#include <stdio.h>

int main() {
    int opcao;
    char operador;
    float n1, n2, n3, n4;
    float media, resultado;
    float a, b;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Boletim\n");
        printf("2 - Calculadora\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Encerrando...\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Abrindo boletim...\n");
                
                printf("Digite a nota 1: ");
                scanf("%f", &n1);
                while (n1 < 0 || n1 > 10) {
                    printf("Nota invalida! Digite novamente: ");
                    scanf("%f", &n1);
                }
                printf("Nota aceita: %.1f\n", n1);

                printf("Digite a nota 2: ");
                scanf("%f", &n2);
                while (n2 < 0 || n2 > 10) {
                    printf("Nota invalida! Digite novamente: ");
                    scanf("%f", &n2);
                }
                printf("Nota aceita: %.1f\n", n2);

                printf("Digite a nota 3: ");
                scanf("%f", &n3);
                while (n3 < 0 || n3 > 10) {
                    printf("Nota invalida! Digite novamente: ");
                    scanf("%f", &n3);
                }
                printf("Nota aceita: %.1f\n", n3);

                printf("Digite a nota 4: ");
                scanf("%f", &n4);
                while (n4 < 0 || n4 > 10) {
                    printf("Nota invalida! Digite novamente: ");
                    scanf("%f", &n4);
                }
                printf("Nota aceita: %.1f\n", n4);

                media = (n1 + n2 + n3 + n4) / 4.0f;
                printf("Media final: %.2f\n", media);

                if (media >= 5.0f) {
                    printf("APROVADO\n");
                } else if (media >= 3.0f) {
                    printf("RECUPERACAO\n");
                } else {
                    printf("REPROVADO\n");
                }
                break;

            case 2:
                printf("Abrindo calculadora...\n");
                printf("Digite a conta (Exemplo: 10 + 5): ");
                
               
                scanf("%f %c %f", &a, &operador, &b);
                
                switch (operador) {
                    case '+': 
                        resultado = a + b;
                        printf("Resultado: %.2f\n", resultado);
                        break;
                    
                    case '-': 
                        resultado = a - b;
                        printf("Resultado: %.2f\n", resultado);
                        break;
                    
                    case '*': 
                        resultado = a * b;
                        printf("Resultado: %.2f\n", resultado);
                        break;
                    
                    case '/': 
                        if (b == 0) {
                            printf("Erro: divisao por zero\n");
                        } else {
                            resultado = a / b;
                            printf("Resultado: %.2f\n", resultado);
                        }
                        break;
                        
                    default:
                        printf("Operador invalido!\n");
                        break;
                } 
                break; 

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

