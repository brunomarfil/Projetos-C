#include <stdio.h>
/* Criar um programa de calculadora que vai realizando os cálculos entre
dois números enquanto o usuário desejar. Criar um menu de opções
conforme mostrado a seguir:
1 – Soma
2 – Subtração
3 – Multiplicação
4 – Divisão
5 – Sair*/

int main() {
    int escolha;
    float num1, num2, resultado;

    do {
        printf("\nEscolha a operacao:\n");
        printf("\t1 - Soma\n");
        printf("\t2 - Subtraçao\n");
        printf("\t3 - Multiplicacao\n");
        printf("\t4 - Divisao\n");
        printf("\t5 - Sair\n");
        printf("\t\tOpcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                // Soma
                printf("\nDigite dois numeros para soma: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 + num2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case 2:
                // Subtração
                printf("\nDigite dois numeros para subtracao: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 - num2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case 3:
                // Multiplicação
                printf("\nDigite dois numeros para multiplicacao: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 * num2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case 4:
                // Divisão
                printf("\nDigite dois numeros para divisao: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("\nResultado: %.2f\n", resultado);
                } else {
                    printf("\nErro: Divisao por zero.\n");
                }
                break;
            case 5:
                printf("\nSaindo do programa.\n");
                break;
            default:
                printf("\nOpção invalida. Tente novamente.\n");
        }

    } while (escolha != 5);  // Continuar enquanto a escolha for diferente de 5 (Sai)

    return 0;
}

