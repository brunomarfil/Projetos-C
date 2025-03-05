#include<stdio.h>
//Receber dois números e mostrar o maior deles

 int main(){
	
 int num1, num2;

  printf("\nDigite o primeiro numero: ");
  scanf("%d", &num1);
 
  printf("\nDigite o segundo numero: ");
  scanf("%d", &num2);

  if (num1 > num2){
	printf("O numero maior eh %d", num1);
	}
  if (num1 < num2){
	printf("O numero maior eh %d", num2);
    }

  
return 0;
}
