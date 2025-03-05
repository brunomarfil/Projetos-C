#include <stdio.h>
//Receber base e altura de um triângulo, calcular sua área e exibir o valor calculado

 int main() {
	 
   int base, altura, area;

    printf("\nDigite a base do triangulo: ");
    scanf("%d", &base);

    printf("\nDigite a altura do triangulo: ");
    scanf("%d", &altura);

    area = base * altura / 2;

    printf("\n\tO valor da area do triangulo eh %d", area);

    
return 0; 
}
