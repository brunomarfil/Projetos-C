#include<stdio.h>
//Receber o ano de nascimento de uma pessoa e mostrar aproximadamente quantos dias de vida ela tem

 int main(){
	
    int anonascimento, ano, dias ;
    int anoatual = 2023;
    
    printf("\nDigite o ano que voce nasceu: ");
    scanf("%d", &anonascimento);

    ano = anonascimento - anoatual;
    dias = ano * 365;
  
    printf("\n\tVoce tem %d dias de vida", dias);
    printf("\n\tAproveite mais sua vida!");

return 0;
}
