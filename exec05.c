#include <stdio.h>

int main() {

float numeros[6];
float soma = 0, media;
int c;

for(c = 0; c < 6; c++){
    printf("Digite o Número da Posição %d: ", c);
    scanf("%f", &numeros[c]);
    
    soma = soma + numeros[c];
}
    media = soma / 6;
    
printf("A Média é: %.2f", media);
   
   
    return 0;
}
