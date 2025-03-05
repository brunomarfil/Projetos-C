#include<stdio.h>
#include<string.h>
/*Solicite ao usuário que digite uma senha composta por 6 caracteres e na
sequência pergunte novamente a senha. Confira se as duas sequências
de caracteres são iguais e em caso afirmativo, exiba uma mensagem
dizendo que a senha é valida. Caso os três primeiros caracteres sejam
iguais, informe que houve algum erro na digitação, caso contrário, a
senha será inválida*/

  int main() {
    char senha1[7], senha2[7];
    int saoIguais = 1; 

    printf("\nDigite uma senha de 6 caracteres: ");
    scanf("%6s", senha1);

    printf("\nDigite novamente a senha: ");
    scanf("%6s", senha2);

    for (int i = 0; i < 6; i++) {
        if (senha1[i] != senha2[i]) {
            saoIguais = 0; 
            break;
        }
    }
    if (saoIguais) {
        if (senha1[0] == senha1[1] && senha1[1] == senha1[2]) {
            printf("\nErro na digitaçao. Os tres primeiros caracteres sao iguais.\n");
        } else {
            printf("\nSenha valida!\n");
        }
    } else {
        printf("\nSenha invalida. As senhas digitadas sao diferentes.\n");
    }

    return 0;
}
