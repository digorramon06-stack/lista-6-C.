#include <stdio.h>

int main() {

int numeros [12];
int c, pares = 0;

for(c = 0; c < 12; c++){
    printf("Digite o Número da Posição %d: ", c);
    scanf("%d", &numeros[c]);

    if(numeros[c] % 2 == 0){
    pares++;
    }
    else{
        
    }
}
    
printf("Quantidade de Pares: %d", pares);
   
   
    return 0;
}
