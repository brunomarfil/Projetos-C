#include<stdio.h>

//Receber 2 números inteiros e exibir todos os números inteiros existentes entre eles

int main(){
	
 int numero1, numero2;

    printf("\nDigite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("\nDigite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    printf("\nNumeros inteiros entre %d e %d:\n", numero1, numero2);

   
    if (numero1 > numero2) {
        int temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }

    for (int i = numero1 + 1; i < numero2; i++) {
        printf("%d\n", i);

}

return 0;
}
