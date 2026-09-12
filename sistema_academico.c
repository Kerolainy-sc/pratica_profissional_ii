#include<stdio.h>

void mostrarMenu(void){
    printf("======================\n");
    printf(" SISTEMA ACADEMICO\n");
    printf("======================\n");
    printf("\n1 - Boletim");
    printf("\n2 - Calculadora");
    printf("\n0 - Sair");
    printf("\nOpcao: ");
}

float somar(float a, float b) {
return a + b;
}
    
float subtrair(float a, float b){
return a - b;
}
    
float multiplicar(float a, float b){
return a * b;
}

float dividir(float a, float b){
return a / b;
}


int main(void){

    int opcao;
    do{
        mostrarMenu();
        scanf("%d", &opcao);

        // swith...

    }while (opcao |= 0);

    float numa,numb;
    
    printf("\n Digite o primeiro número: ");
    scanf("\n %f", &numa);
    
    printf("\n Digite o segundo número: ");
    scanf("\n %f", &numb);
    
    float resposta;

    resposta = somar(numa, numb);
    printf("\n %.2f", resposta);

    resposta = subtrair(numa, numb);
    printf("\n %.2f", resposta);

    resposta = multiplicar(numa, numb);
    printf("\n %.2f", resposta);

    resposta = dividir(numa, numb);
    printf("\n %.2f", resposta);
    
    float lerNota(int bimestre){
        float nota;
        
        do{
            printf("\n Nota do %d° bimestre (0-10:): ", bimestre);
            scanf("%f", &nota);
            
        if (nota < 0 || nota > 10)
            printf("Nota invalida \n");
            
        }while (nota < 0 || nota > 10 );
        
        return nota;
            
        }
        
float calcularMedia(float n1,
                    float n2,
                    float n3,
                    float n4){
                        
    return (n1 + n2 + n3 + n4) / 4.0f;                   
 }
 
 void mostrarSituacao(float media){
     
     if (media >= 5.0f)
        printf("APROVADO \n");
        
    else if (media >= 3.0f)
        printf("RECUPERACAO \n");
    else
        printf("REPROVADO \n");
        
 }
 
 void boletim(void) {
     float n1, n2, n3, n4, media;
     
     n1 = lerNota(1);
     n2 = lerNota(2);
     n3 = lerNota(3);
     n4 = lerNota(4);
     
     media = calcularMedia(n1, n2, n3, n4);
     
     printf("\nMedia: %.2f\n", media);
     printf("Situação: ");
     mostrarSituacao(media);
 }
 
    boletim();
     
 }
    
    