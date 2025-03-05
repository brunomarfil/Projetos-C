/*Dado a estrutura abaixo, implemente uma rotina de cadastro, deve-se consultar o usuário
para continuar. O registro deve ser gerado automaticamente pelo sistema. Utilizar
alocação dinâmica e ponteiros para a estrutura.
struct agenda{
int reg;
char nome[80];
float nota;
};*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  struct agenda{
  	int reg;
  	char nome[80];
  	float nota;
  };

  void aloca(agenda **ptr, int tam);
  void cadastro(agenda *ptr, int tam);
  void mostra(agenda *ptr, int tam);
  
  main(){
  	
  	int opcao, tam = 0;
  	char op;
  	agenda *ptr = NULL;
  	
  	printf("\n\tPrograma para Cadastrar Agenda !!");
  	printf("\n\t");
  	system("pause");
  	
  	do{
  		printf("\nDeseja continuar <S/N> : ");
  		scanf(" %c", &op);
  		fflush(stdin);
  		
		if(op == 'S' || op == 's'){
  			printf("\n[1]Cadastro\n");
  			printf("\n[2]Mostrar Cadastro\n");
  			printf("\n[3]Sair do Programa\n");
  			
  			printf("\nEscolha uma opcao: ");
  			scanf("%i", &opcao);
  			fflush(stdin);
  			
  		switch (opcao){
  			case 1:
  				aloca(&ptr, tam);
  				cadastro(ptr, tam);
  				tam ++;
  				break;
  			case 2:
  				mostra(ptr, tam);
  				break;
  			case 3:
  				printf("\nSaindo do programa...");
  				break;
  			default:
  				printf("\nOpcao invalida...");
		  }
		  }
	  }while(op!='N' && op != 'n');
  	
  	return 0;
  }
  
  void aloca(agenda **ptr, int tam){
  	
  	if((*ptr = (agenda*) realloc (*ptr, tam * sizeof (agenda))) == NULL){
  		printf("\nAlocacao falhou!");
  		exit(1);
	  }else{
	  	printf("\nAlocado com sucesso!");
	  }
  	
  }
  
  void cadastro(agenda *ptr, int tam){
  	
  	int i;
  	static int reg_usuario = 1000;
  	
  	printf("\n\n<Cadastro>\n");
  	
  	printf("\nDigite seu nome: ");
  	scanf("%s", &((ptr + tam)->nome));
  	fflush(stdin);
  	
  	(ptr + tam)-> reg = reg_usuario;
  	reg_usuario++;
  	
  	printf("\nRegistro: %i", (ptr+tam)->reg);
  	
  	printf("\nDigite uma nota: ");
  	scanf("%f", &((ptr+tam)->nota));
  	fflush(stdin);
  }
  
  void mostra(agenda *ptr, int tam){
  	
  	int confere, i;
  	int encontrado = 0;
  	
  	printf("\n\n<Mostrar o Cadastro>\n");
  	
  	printf("\nDigite o numero do registro: ");
  	scanf("%i", &confere);
  	fflush(stdin);
  	
  	for(i=0; i<tam ; i++){
  		
  		if(confere ==(ptr+i)->reg){
  			printf("\nNome: %s\n", (ptr+i)->nome);
  			printf("\nNota: %.2f\n", (ptr+i)->nota);
  			encontrado = 1;
		}
  		
	}
  	    if(!encontrado){
  	 	    printf("\nUsuario nao encontrado...");
	    }
  	
  }
