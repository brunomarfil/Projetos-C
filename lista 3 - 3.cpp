#include<stdio.h>
/*Calcular o IMC (Índice de Massa Corporal) de uma pessoa através da
fórmula IMC = Peso (kg) / Altura (m). Informe a classificação do IMC na
tela de acordo com as regras abaixo*/

 int main(){
	float peso, altura, imc;
 
     printf("\nDigite seu peso: ");
     scanf("%f", &peso);
 
     printf("\nDigite sua altura: ");
     scanf("%f", &altura);

    imc = peso / altura;

    printf("Seu imc eh %.f", imc);

return 0;
}
