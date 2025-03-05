#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  struct aluno{
  	char nome[80];
  	char ra[7];
  	float nota[2];
  	float media;
  };
  
  void cadastro(struct aluno alunos[], int total_alunos);
  void controle(struct aluno alunos[], int total_alunos);
  
  main(){
  	
  	int op;
  	struct aluno alunos[10];
	int total_alunos = 0;
  	
  	
  	printf("\n\n\tPrograma Diario Eletronico");
  	printf("\n\n\tBem vindo!");
  	printf("\n\n\t");
  	system("pause");
  	
  	do{
  		printf("\n\t[1]Cadastro");
  		printf("\n\t[2]Controle");
  		printf("\n\t[3]Sair do programa");
  		
		printf("\n\nEscolha uma opcao: ");
  		scanf("%i", &op);
  	
  	switch(op){
  		case 1:
  			cadastro(alunos, total_alunos);
  			total_alunos++;
  			break;
  		case 2:
  			controle(alunos, total_alunos);
  			break;
  		case 3:
  			printf("\nSaindo do Programa...");
  			break;
	        }
	  
  		}while(op != 3);
  }
  
  void cadastro(struct aluno alunos[], int total_alunos){
  	
  	if(total_alunos < 10){
  	
  	printf("\n<Cadastro do aluno>\n");
  	
	printf("\nNome: ");
  	scanf("%s", &(alunos[total_alunos].nome));
  	fflush(stdin);
	  
	printf("\nRa: ");
  	scanf("%s", &(alunos[total_alunos].ra));
  	fflush(stdin);
  	
  	printf("\nPrimeira nota: ");
  	scanf("%f", &(alunos[total_alunos].nota[0]));
  	fflush(stdin);
  	
  	printf("\nSegunda nota: ");
  	scanf("%f", &(alunos[total_alunos].nota[1]));
  	fflush(stdin);
  	
    }
  }
  
  void controle(struct aluno alunos[], int total_alunos){
  	
  	int i;
	float media;
	char ra[7];
  	
  	printf("\n<Controle do aluno>\n");
  	
  	printf("\nDigite o RA do aluno: ");
  	scanf("%s", &ra);
  	fflush(stdin);
  	
  	for(i=0;i<total_alunos; i++){
  		
		if(strcmp(alunos[i].ra, ra) == 0){
  	      printf("\nAluno: %s", alunos[i].nome);
  	      printf("\nNota 1: %.2f", alunos[i].nota[0]);
  	      printf("\nNota 2: %.2f", alunos[i].nota[1]);
		
  		printf("\n\n<Calcular a media>\n");	
	
	    alunos[i].media = (alunos[i].nota[0] + alunos[i].nota[1]) /2;
			
		printf("\nA media de %s eh: %.2f", alunos[i].nome, alunos[i].media);
  			
        if(alunos[i].media>=5){
        	printf("\nAprovado!");
        }else{
			printf("\nReprovado!");
		}
		}
	}
  }
