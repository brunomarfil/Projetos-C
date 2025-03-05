/*Calcular o consumo médio de gasolina de um tanque de automóvel. Pedir para o usuário entrar
com a distância (km) e volume (litros). Cm = d (km) / v (litros)*/

#include<stdio.h>

 void consumo(float km, float litros);
 
 int main(){
 	
 	float km, litros;
 	
 	printf("\n\tVamos calcular o consumo medio de gasolina!! :)");
    consumo(km, litros);
    
 	return 0;
 }
 
 void consumo(float km, float litros){
 	
 	float conta;
 	
 	printf("\nDigite a distancia (km): ");
 	scanf("%f", &km);
 	printf("Digite o volume (litros): ");
 	scanf("%f", &litros);
 	
 	conta = km/litros;
 	
 	printf("\n\tO consumo medio de gasolina eh %.f ", conta);
 	
 }
