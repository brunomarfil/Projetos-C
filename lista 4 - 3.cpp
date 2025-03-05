#include<stdio.h>
/*Receber 10 números e informar se cada um deles é negativo, positivo ou
nulo*/

 int main() {
    int numero;

    for (int i = 0; i <= 10; i++) {
        printf("\nDigite o numero: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            printf("O numero %d eh positivo.\n", numero);
        } else if (numero < 0) {
            printf("O numero %d eh negativo.\n", numero);
        } else {
            printf("O numero %d eh nulo.\n", numero);
        }
    }

    return 0;
}





