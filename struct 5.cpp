#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct aluno{
 	char nome[80];
 	char ra [7];
 	float nota [2];
 	float media;
 };
 
  void aloca(aluno **ptr, int tam);
  void cadastro(aluno *ptr, int tam);
  void controle(aluno *ptr, int tam);
  
  main(){
  	
  	int op, tam=0;
  	char opcao;
	aluno *ptr = NULL;
  	
  	printf("\n\n\tPrograma Diario Eletronico");
  	printf("\n\n\tBem Vindo!");
  	printf("\n\n\t");
  	system("pause");
  	
  	do{
  		printf("\nDeseja continuar ? <S/N> : ");
  		scanf(" %c", &opcao);
  		fflush(stdin);
  		
  		if(opcao=='S' || opcao=='s'){
  			printf("\n\t[1]Cadastro");
  			printf("\n\t[2]Controle de Notas");
  			printf("\n\t[3]Sair do Programa");
  			
  			printf("\n\nEscolha uma opcao: ");
  			scanf("\n%i", &op);
  			fflush(stdin);
  			
  		switch (op){
  			case 1 : 
  				aloca(&ptr, tam);
  		        cadastro(ptr, tam);
  				tam++;
  				break;
  			case 2:
  				controle(ptr, tam);
  				break;
  			case 3:
  				printf("\n\n\tSaindo do programa...");
  				break;
  			default: 
  				printf("\nValor nao encontrado!");
  				break;
		}
		}
  			
	  }while(opcao !='N' && opcao !='n');
  	
  	return 0;
  }
  
  
  void aloca(aluno **ptr, int tam){
  	
  	if((*ptr = (aluno*)realloc(*ptr, tam*sizeof(aluno))) == NULL){
  		printf("\nErro ao alocar!");
    }else{
   	    printf("\nAlocado com sucesso!");
    } 
  }
  
  void cadastro(aluno *ptr, int tam){
  	
  	if(tam<10){
  	
  	printf("\n<CADASTRO DE ALUNO>\n");
  	
  	printf("\nDigite seu nome: ");
  	scanf("%s", &((ptr + tam)->nome));
  	fflush(stdin);
  	
  	printf("\nDigite seu ra: ");
  	scanf("%s", &((ptr + tam)->ra));
  	fflush(stdin);
  	
  	printf("\nDigite a primeira nota: ");
  	scanf("%f", &((ptr + tam)->nota[0]));
  	fflush(stdin);
	  
	printf("\nDigite a segunda nota: ");
	scanf("%f", &((ptr + tam)->nota[1]));
	fflush(stdin);
	
	tam++;
	
	printf("\nAluno cadastrado com sucesso!");
    
	}else{
    	printf("\nNumero de clientes atingido!");
	}
  }
  
  void controle(aluno *ptr, int tam){
  	
  	int i;
  	char ra[7];
  	float media;
  	
  	printf("\n<CONTROLE DE ALUNO>\n");
  	
  	printf("\nDigite o ra do aluno: ");
  	scanf("%s", &ra);
  	fflush(stdin);
  	
  	for(i=0; i<tam; i++){
  		
		if(strcmp((ptr+i)->ra, ra) == 0){
  		    printf("\nAluno: %s", (ptr+i)->nome);
  			printf("\nNota: %.2f", (ptr+i)->nota[0]);
  			printf("\nNota: %.2f", (ptr+i)->nota[1]);
  			
  			printf("\n<CALCULAR A MEDIA>\n");
  			
  			((ptr+i)->media)=(((ptr+i)->nota[0])+((ptr+i)->nota[1]))/2;
  			
  			printf("\nA media do aluno %s eh %.2f", (ptr+i)->nome, (ptr+i)->media);
  		
  		if((ptr+i)->media > 5){
  			printf("\nAprovado!");
		  }else{
		  	printf("\nReprovado!");
		}
		}
	}
  }
