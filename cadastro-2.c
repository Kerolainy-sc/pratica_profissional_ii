#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void cadastrar(char nome[], char telefone[], char endereco[]) {
    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    system("clear"); 

    printf("Digite seu número de telefone: ");
    fgets(telefone, 40, stdin);
    telefone[strcspn(telefone, "\n")] = '\0';

    system("clear");

    printf("Digite seu endereço completo: ");
    fgets(endereco, 80, stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    system("clear");
}


void imprimir(char nome[], char telefone[], char endereco[]) {
    printf("NOME     = %s\n", nome);
    printf("TELEFONE = %s\n", telefone);
    printf("ENDEREÇO = %s\n", endereco);
}

int main() {
    char nome[100];
    char telefone[40];
    char endereco[80];

    cadastrar(nome, telefone, endereco);
    imprimir(nome, telefone, endereco);

    return 0;
}
