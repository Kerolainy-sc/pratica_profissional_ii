#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char nome[100];
    char cidade[100];
    char nomeMaePai[100];
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    getchar();
    system("clear");
    
    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "n")] = '\0'; 
    printf("NOME = %s \n", nome);
    system("clear");
    
    printf("Qual cidade você reside? ");
    fgets(cidade, 100, stdin);
    cidade[strcspn(cidade, "n")] = '\0'; 
    printf("CIDADE = %s \n", cidade);
    system("clear");
    
    getchar();
    printf("Nome Mãe/Pai: ");
    fgets(nomeMaePai, 100, stdin);
    nomeMaePai[strcspn(nomeMaePai, "n")] = '\0'; 
    printf("NOME MÃE/PAI = %s \n", nomeMaePai);
    system("clear");
 
    printf("Nome: %s. Idade: %i anos\n", cidade);
    


    return 0;
}