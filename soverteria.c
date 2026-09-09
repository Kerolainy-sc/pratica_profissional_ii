#include <stdio.h>

int main(){
    
    char opcao;
     printf("A - Napolitano \n");
     printf("B - Baunilha \n");
     printf("C - Chocolate \n");
     printf("D - Flocos \n");
     printf("Escolha um sabor: ");
     scanf("%s", &opcao);
     
     switch(opcao){
         case 'A': 
         case 'a':
             printf("Você escolheu o sabor Napolitano \n");
             break;
         case 'B': 
         case'b':
             printf("Você escolheu o sabor Baunilha \n");
             break;
         case 'C': 
         case'c':
             printf("Você escolheu o sabor Chocolate \n");
             break;
         case 'D': 
         case 'd':
             printf("Você escolheu o sabor Flocos \n");
             break;
         default: 
             printf("Valor inválido! \n");
             
     }
             
    return 0;
    
}