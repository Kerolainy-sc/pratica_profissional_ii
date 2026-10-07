#include <stdio.h>
int main() {
    int idade[3];
    int i;
    
    for(i=0; i <= 2; i ++){
        printf("Digite uma idade: ");
        scanf("%d", &idade[i]);
    }
    
    for(i=0; i <= 2; i ++){
        printf("Idade: %d \n", idade[i]);
    }
    
    return 0;
}