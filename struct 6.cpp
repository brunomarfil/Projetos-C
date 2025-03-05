#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  typedef struct hospede{
  	int quarto;
  	char nome[80];
  	int acompanhante;
  	char categoria;
  	int dias;
  }hospede;
  typedef struct quarto{
  	int num;
  	char categoria;
  	char status;
  }quarto;
 
  void aloca_hospede(hospede **h, int tam);
  void aloca_quarto(quarto **q, int tam);
  void cadastra_quarto(quarto *q, int tam);
  void cadastra_hospede(hospede *h, quarto *q);
  int busca_quarto(quarto *q, char categ);
  void check_out(hospede *h, int tam, quarto *q);
  int busca_vaga(hospede *h, int tam, int q);
  
main(){
	
	int op, posicao;
	int tam = 0;
	hospede *h = NULL;
	quarto *q = NULL;
	
	printf("\n\n\tPrograma de Hospedagem");
	printf("\n\n\tBem Vindo!");
	printf("\n\n\t");
	system("pause");
	
	aloca_quarto(&q, 15);
	cadastra_quarto(q, 15);
	
	
	do{
		printf("\n[1]Check-in");
		printf("\n[2]Check-out");
		printf("\n[3]Sair do programa");
		
		printf("\n\nEscolha uma das opcaoes: ");
		scanf("%i", &op);
		fflush(stdin);
		system("cls");
		
	switch(op){
		case 1:
			posicao = busca_vaga(h, tam, -1);
			if(posicao== -1){
				aloca_hospede(&h, tam+1);
				posicao=tam;
				tam++;
			}
			cadastra_hospede(h+posicao, q);
			break;
		case 2:
			check_out(h, tam, q);
			break;
		case 3:
			printf("\nSaindo do programa...");
		default:
			printf("\nErro...");
			break;
	}
	}while(op!=3);
	
	return 0;
  }

  void aloca_hospede(hospede **h, int tam){
  	
  	if((*h=(hospede*)realloc(*h, tam*sizeof(hospede)))==NULL){
  		printf("\nErro ao alocar!");
  		exit(1);
	  }
  }
  
  void aloca_quarto(quarto **q, int tam){
  	
  	if((*q=(quarto*)realloc(*q, tam*sizeof(quarto)))==NULL){
  		printf("\nErro ao alocar!");
  		exit(1);
	  }
  }
  
  void cadastra_quarto(quarto *q, int tam){
  	
  	int i;
  	
  	for(i=0; i<tam; i++){
  		(q+i)->num= i+1;
  		(q+i)->status ='L';
	if(i<5){
		(q+i)->categoria = 'S';
	}else{
		(q+i)->categoria = 'F';
	 }
	}	
  }
  
  void cadastra_hospede(hospede *h, quarto *q){
  	
  	int pessoas, num_quarto;
  	char categ;
  	
  	do{
  		printf("\n<Cadastro do Hospede>\n");
  		
  		printf("\nQuantos acompanhantes ? <MAX 4> : ");
  		scanf("%i", &pessoas);
  		fflush(stdin);	
  		
  }while(pessoas<1 || pessoas >4);
  
  if(pessoas == 1){
  	categ = 'S';
  }
  else if(pessoas>1){
  	categ = 'F';
  }
  num_quarto = busca_quarto(q,categ);
  
  if(num_quarto == -1){
  	printf("\nNao ha quarto disponiveis!");
  }else{
  	h->quarto = num_quarto;
  	h->acompanhante = pessoas -1;
  	
  	printf("\nDigite seu nome: ");
  	scanf("%s", &(h->nome));
  	fflush(stdin);
  	
  	printf("\nQuantos dias deseja ficar: ");
  	scanf("%i", &(h->dias));
  	fflush(stdin);
  	
  	printf("\nNumero do quarto: %i", (h->quarto));
  	printf("\n\nCadastro realizado com sucesso!");
  	
   }
  }

  int busca_quarto(quarto *q, char categ){
  	
  	int i;
  	
  	for(i=0; i<15; i++){
  		if((q+i)->categoria == categ && (q+i)->status == 'L'){
  			(q+i)->status == 'O';
  			return ((q+i)->num);
		}
	}
	
	return -1;
  }
  
  void check_out(hospede *h, int tam, quarto *q){
  	
  	int num_quarto, i;
  	float conta;
  	
  	printf("\nDigite o numero do seu quarto: ");
  	scanf("%i", &num_quarto);
  	fflush(stdin);
  	
  	(q+num_quarto-1)->status == 'L';
  	
  	for(i=0; i<tam; i++){
  		if((h+i)->quarto == num_quarto){
  			printf("\nNome: %s", (h+i)->nome);
  			
  			if((h+i)->acompanhante == 0){
  				conta =(h+i)->dias*85;
				printf("\nTotal a pagar: %.2f", conta);
			  }else if((h+i)->acompanhante>0){
			  	conta = ((h+i)->dias*((h+i)->acompanhante+1)*45);
				printf("\nTotal a pagar: %.2f", conta);
			  }
		    (h+i)->quarto = -1;
		}
	}
  }
  
  int busca_vaga(hospede *h, int tam, int q){
  	
  	int i;
  	
  	for(i=0; i<tam; i++){
  		if((h+i)->quarto == q){
  		return 1;
		  }
	  }
	  
	  return -1;
  }
  
  
