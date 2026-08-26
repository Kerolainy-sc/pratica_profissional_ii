
#include <stdio.h>
int main(){
    
    float n1, n2, media;
    
    printf("Insira sua nota 1: ");
    scanf("%f", &n1);
    
     
    printf("Insira sua nota 2: ");
    scanf("%f", &n2);
    
    
    media = (n1 + n2) / 2;
    
    printf("Media: %.2f", media);
    
      if (media >= 7){ 
          printf("Aprovado! ");
      }else{ 
          printf("Reprovado! ");
      }
    
    return 0;
}