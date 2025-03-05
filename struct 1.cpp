#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  struct cliente{
  	char nome[30];
  	int conta;
  	float saldo;
  };
  
  void cadastro(struct cliente clientes[], int total_cli);
  void deposito(struct cliente clientes[], int total_cli);
  void retirada(struct cliente clientes[], int total_cli);
  
  main(){
  	
  	struct cliente clientes[10];
  	int op, total_cli = 0;

  	printf("\n\n\tSistema Bancario");
  	printf("\n\tBem Vindo!");
  	printf("\n\t");	
  	system("pause");
  	
	do{
	  
  	printf("\n[1]Cadastro\n");
  	printf("\n[2]Deposito\n");
  	printf("\n[3]Retirada\n");
  	printf("\n[4]Sair do programa");
  	
  	printf("\n\n\tEscolha uma opcao: "); 
  	scanf("%i", &op);
  	fflush(stdin);
  	
  	switch (op){
  		case 1:
  			cadastro(clientes, total_cli);
  			total_cli++;
		    break;
  		case 2:
  			deposito(clientes, total_cli);
  			break;
  		case 3:
  			retirada(clientes, total_cli);
  			break;
  		case 4:
  			printf("\n\tSaindo do programa...");
  			break;
  		default:
            printf("\n\tOpcao invalida! Tente novamente.");
            break;
        }  
	
	}while(op != 4);  
  }
  
  void cadastro(struct cliente clientes[], int total_cli){

  	if(total_cli < 10){
  		printf("\n<Cadastro de Clientes>\n");
  		printf("\nNome do cliente: ");
  		scanf("%s", &(clientes[total_cli].nome));
  		fflush(stdin);
  		
  		printf("\nNumero da conta: ");
  		scanf("\n%i", &(clientes[total_cli].conta));
  		fflush(stdin);
  		
  		printf("\nDigite o Saldo inicial: ");
	    scanf("%f", &(clientes[total_cli].saldo));
	    fflush(stdin);
  		
  		total_cli ++;
  		
		printf("\nCliente cadastrado com sucesso!");
  	
  	}else{
  		printf("\n\tNumero de clientes atingido...");
  	}	
  }
  
  void deposito(struct cliente clientes[], int total_cli){
  	
  	int i, conta;
  	float valor;
  	int encontrado = 0;
  	
  	printf("\n<Deposito>\n");
  	printf("\nNumero da conta: ");
  	scanf("%i", &conta);
  	fflush(stdin);
  	
  	for(i=0; i<10; i++){
  		
		  if(clientes[i].conta == conta){
  			printf("\nCliente: %s", clientes[i].nome);
  			printf("\nSaldo atual: %.2f", clientes[i].saldo);
  			
			printf("\nValor do deposito: ");
  			scanf("%f", &valor);
  			fflush(stdin);
  			
  			clientes[i].saldo = clientes[i].saldo + valor;
  			
  			printf("\nNovo saldo : %.2f", clientes[i].saldo);
  			
  			encontrado = 1;
  			break;

		  if (!encontrado){ 
             printf("\nCliente nao encontrado...");
	      }
        } 
   }
  }
  
  void retirada(struct cliente clientes[], int total_cli){
  	
  	int i, conta;
  	float valor;
  	
  	printf("\n<Retirada>\n");
  	printf("\nNumero da conta: ");
  	scanf("%i", &conta);
  	fflush(stdin);
  	
  	for(i=0; i<10; i++){
  		
		  if(clientes[i].conta == conta){
  		    printf("\nCliente: %s", clientes[i].nome);
  			printf("\nSaldo atual: %.2f", clientes[i].saldo);
  			
  			printf("\nValor da retirada: ");
  			scanf("\n%f", &valor);
  			fflush(stdin);
  			
  			if(valor <= clientes[i].saldo){
  			    clientes[i].saldo = clientes[i].saldo - valor;
  				
				printf("\nRetirada realizada com sucesso!");
  				printf("\nNovo valor : %.2f", clientes[i].saldo);
  			
			}else{
				printf("\n\tSaldo insuficiente para fazer a retirada!");
		    }
	return;
  	    }
    }
    printf("\n\tCliente nao encontrado...");
  }
