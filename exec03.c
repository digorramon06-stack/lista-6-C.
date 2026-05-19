#include <stdio.h>

int main() {

int numeros [10];
int c, maior = -9999;

for(c = 0; c < 10; c++){
    printf("Digite o Número da Posição %d: ", c);
    scanf("%d", &numeros[c]);
    
    if(numeros[c] > maior){
    maior = numeros[c];
}
    else{
        
    }
}
printf("Maior Valor: %d", maior);
   
   
    return 0;
}
