#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int verificarSenha(char senha[]) {
    if (strcmp(senha, "1234") == 0) {
        return 1;
    }
    return 0;
}

int main() {
    char senha[20];
    int resultado = 0;
    
   
    while (resultado == 0) {
        printf("Digite a senha: ");
        fgets(senha, 20, stdin);
        senha[strcspn(senha, "\n")] = '\0';
      
        resultado = verificarSenha(senha);


        if (resultado == 0) {
            printf("Senha incorreta!! Tente novamente! \n");
        }
    }
    
    printf("Acesso liberado");
    return 0;
} 