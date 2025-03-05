#include <stdio.h>
#include<string.h>
/*Elabore um programa que recebe um caractere e um número inteiro n
menor ou igual a 20. Declare e inicialize uma string com n caracteres
iguais ao caractere digitado.
Exemplo:
Caracter: a
Número (n): 3
Saída: aaa*/

 int main() {
    char caractere;
    int n;

    printf("\nCaractere: ");
    scanf("%c", &caractere);

    printf("\nNumero (n): ");
    scanf("%d", &n);

    if (n > 20) {
        printf("\nNumero deve ser menor ou igual a 20.\n");
        return 1;
    }
    char string[n + 1]; 
    for (int i = 0; i < n; i++) {
        string[i] = caractere;
    }
    string[n] = '\0'; 

    printf("Saida: %s\n", string);

    return 0;
}
