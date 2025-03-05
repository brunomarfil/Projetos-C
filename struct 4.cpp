#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  struct cliente{
  	char nome[30];
  	int conta;
  	float saldo;
  };
  
  void aloca(cliente **ptr, int tam);
  void cadastro(cliente *ptr, int tam);
  void deposito(cliente *ptr, int tam);
  void retirada(cliente *ptr, int tam);
  
  main(){
  	
  	int op, tam = 0;
  	char opcao;
  	cliente *ptr = NULL;
  	
  	printf("\n\n\tPrograma Sistema Bancario");
  	printf("\n\n\tBem Vindo! ");
  	printf("\n\n\t");
  	system("pause");
  	
  	do{
  		printf("\nDeseja continuar? <S/N> : ");
  		scanf(" %c", &opcao);
  		
  		if(opcao == 'S' || opcao == 's'){
  			
  		    printf("\n\t[1]Cadastro");
  		    printf("\n\t[2]Deposito");
  		    printf("\n\t[3]Retirada");
  		    printf("\n\t[4]Sair do Programa");
  		
  		    printf("\n\nEscolha uma opcao: ");
  		    scanf("%i", &op);
  		    fflush(stdin);
  		
  		switch (op){
  			case 1:
  				aloca(&ptr, tam);
				cadastro(ptr, tam);                    
  				tam++;
  				break;
  			
			case 2:
		        deposito(ptr, tam);
	            break;
		    
			case 3:
		    	retirada(ptr, tam);
		        break;
		    
			case 4:
		    	printf("\nSaindo do Programa...");
		    	break;
			
			default: 
		        printf("\nNumero invalido");
		        break;
		  
	    }    
    } 
    }while(opcao != 'N' && opcao != 'n');
  	
  	return 0;
  }
  
  void aloca(cliente **ptr, int tam){
  	
  	if((*ptr = (cliente*) realloc (*ptr, tam*sizeof(cliente)))== NULL){
  		printf("\nAlocacao Falhou!");
	  }else{
	  	printf("\nCliente alocado com sucesso!");
	  }
  }
  
  void cadastro(cliente *ptr, int tam){
  	
  	if(tam < 10){
  	    printf("\n<Cadastro do Cliente>\n");
  	
  	    printf("\nNome: ");
  	    scanf("%s", &((ptr + tam)->nome));
  	    fflush(stdin);
  	
  	    printf("\nConta: ");
  	    scanf("%i", &((ptr + tam)->conta));
  	    fflush(stdin);
  	
        printf("\nSaldo: ");
  	    scanf("%f", &((ptr + tam)->saldo));
        fflush(stdin);
	
	    tam++;
	
        printf("\nCliente cadastrado com sucesso!");
   }else{
   	    printf("\nNumero de clientes atingido! ");
   }
  }
  
  void deposito(cliente *ptr, int tam){
  	
  	int i, conta;
  	float novosaldo;
  	int encontrar = 0;
  	
  	printf("\n<Deposito>\n");
  	
  	printf("\nDigite o numero da conta: ");
  	scanf("%i", &conta);
  	fflush(stdin);
  	
  	for(i=0; i<tam; i++){
  		
  		if((ptr+i)->conta == conta){
  			printf("\nCliente: %s", (ptr+i)->nome);
  			printf("\nSaldo atual: %.2f", (ptr+i)->saldo);
  			
  			printf("\nValor do deposito: ");
  			scanf("%f", &novosaldo);
  			fflush(stdin);
  			
  			((ptr+i)->saldo) = ((ptr+i)->saldo) + novosaldo;
  			
  			printf("\nNovo Saldo: %.2f", (ptr+i)->saldo);
  			
			encontrar= 1;
			break;
  	}
        }
  		
		if(!encontrar){
  			printf("\nCliente nao encontrado...");
		}	
  }
  
  void retirada(cliente *ptr, int tam){
  
   int i, conta;
   float valor;
   
   printf("\n<Retirada>\n");
   
   printf("\nDigite o numero da conta: ");
   scanf("%i", &conta);
   fflush(stdin); 
   
   for(i=0; i<tam; i++){
   	
	if((ptr+i)->conta == conta){
	   
   		printf("\nCliente: %s", (ptr+i)->nome);
   		printf("\nSaldo: %.2f", (ptr+i)->saldo);
   		
   		printf("\nValor da retirada: ");
   		scanf("%f", &valor );
   		fflush(stdin);
   	
   	if(valor <= ((ptr+i)->saldo)){
   		
		((ptr+i)->saldo) = ((ptr+i)->saldo) - valor;
   		
   		printf("\nRetirada realizada com sucesso!");
   		printf("\nNovo saldo: %.2f", ((ptr+i)->saldo));
   	
	}else{ 
	   	printf("\nSaldo insuficiente para retirada...");
	}
	
	return;
   
    }
        printf("\nCliente nao encontrado...");
   }
  }

  
