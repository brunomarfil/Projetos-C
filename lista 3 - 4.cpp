#include<stdio.h>
/*Receber três números e dizer se existe algum número repetido entre eles.
Em caso afirmativo, mostre qual o número esta repetido*/

 int main(){
	
   int num1, num2, num3;

   printf("\nDigite tres numeros: ");
   scanf("%d %d %d", &num1, &num2, &num3);

   if(num1 == num2 || num1 == num3){
	 printf("O numero %d esta repetido", num1);
}else if (num2 == num3){
	printf("O numero %d esta repetido", num2);
}else{
	printf("Nao tem numero repetido");
}

return 0;
}
