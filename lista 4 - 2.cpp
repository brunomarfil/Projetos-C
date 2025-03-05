#include<stdio.h>

//Receber um número e mostrar sua tabuada do 1 ao 10]

 int main(){
	
   int i, numero, resultado;

  printf("Digite um numero: ");
  scanf("%d", &numero);

    for (int i = 0; i <= 10; i++) {
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
}
return 0;
}

 
