#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura[5];
    int i;
    
    for(i=0; i<=4; i++){
        printf("Digite %iº altura: ", i+1);
        scanf("%f", &altura[i]);
        system("clear");
    }
    
    for(i=0; i<=4; i++){
        printf("%iº Altura: %.2fm \n", i, altura[i]);
    }
 
    return 0;
}