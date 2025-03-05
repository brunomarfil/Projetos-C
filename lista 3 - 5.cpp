#include<stdio.h>
//Receber três números e mostrar qual é o maior deles

 int main(){
	int num1, num2, num3;
 
     printf("\nDigite tres numeros: ");
     scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 >num3){
	 printf("\tO maior numero eh %d", num1);
}else if(num2 > num1 && num2> num3){
	 printf("\tO maior numero eh %d", num2);
}else if(num3 > num1 && num3 > num2){
	 printf("\tO maior numero eh %d", num3);

}

return 0;
}
