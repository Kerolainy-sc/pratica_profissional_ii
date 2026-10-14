#include <stdio.h>
#include <stdlib.h>

void limparTela() {
    system("clear");
}

int main() {
    int senhaCorreta = 12345;
    int senhaDigitada;

    limparTela();

    printf("----------------------------------\n");
    printf("PAGINA DE LOGIN\n");
    printf("----------------------------------\n");
    printf("Digite sua senha: ");
    scanf("%d", &senhaDigitada);

    if (senhaDigitada == senhaCorreta) {
        printf("Login aceito!\n");
    } else {
        printf("Senha incorreta!!!!!\n");
    }

    return 0;
}