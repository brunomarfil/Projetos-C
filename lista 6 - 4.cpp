#include<stdio.h>
/*Receber números enquanto o usuário quiser digitá-los (a cada número
informado peça que o usuário digite 1 se quiser informar mais um número
ou 2 se quiser parar). No final, exibir:
• o maior número;
• a média aritmética dos números*/

 int main() {
    int numero;
    int continuar;
    int maior = 0;
    int soma = 0;
    int contador = 0;

    do {
        printf("\n\tInforme um numero: ");
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        soma += numero;
        contador++;
       
        printf("\nDeseja informar mais um numero? (1 para sim, 2 para parar): ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("\nO maior numero informado eh: %d\n", maior);

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("\nA media aritmetica dos numeros eh: %.2f\n", media);
    } else {
        printf("\nNenhum numero foi informado.\n");
    }

    return 0;
}
