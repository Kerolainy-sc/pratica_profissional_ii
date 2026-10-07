#include <stdio.h>
#include <string.h>
int main() {
    
    char empresa[40];
    
    //CADASTRO
    printf("DIGITE O NOME DA USA EMPRESA: ");
    fgets(empresa, 40, stdin);
    empresa[strcspn(empresa, "n")] = '\0'; //PARA A GRAVAÇÃO

    //IMPRESSÃO
    printf("EMPRESA = %s \n", empresa);

    return 0;
}