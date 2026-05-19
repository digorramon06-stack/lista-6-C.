#include <stdio.h>

int main() {

int numeros [10];
int pos;

for(pos = 0; pos < 10; pos++){
    printf("Digite o Número da Posição %d: ", pos);
    scanf("%d", &numeros[pos]);
}
printf("\nVALORES DIGITADOS: ");
for(pos = 0; pos < 10; pos++){
    printf("\nO Número Registrado na Posição %d foi: %d", pos, numeros[pos]);
}
    
   
   
    return 0;
}
