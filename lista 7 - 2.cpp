#include<stdio.h>

/*Receber 10 números e armazená-los em um vetor. Ao final, exibir os
números na ordem inversa da que foram recebidos*/

 int main() {
    
   int numeros[10];

    printf("\nDigite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nNumero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros na ordem inversa:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
