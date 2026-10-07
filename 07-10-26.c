#include <stdio.h>
#include <string.h>
int main() {
    
    char nome[50];
    
    //CADASTRO
    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "n")] = '\0'; //PARA A GRAVAÇÃO

    //IMPRESSÃO
    printf("NOME = %s \n", nome);
    printf("NOME = %s \n", nome);

    return 0;
}