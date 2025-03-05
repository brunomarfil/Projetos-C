#include <stdio.h>
#include <stdlib.h>
#include <string.h>


  typedef struct dados{
    int reg;
    char produto[20];
    int qtde;
    float preco;
  }dados;

  void aloca(dados **p,int tam);
  int verifica();
  void cadastro(dados *p);
  void altera(dados *p,int op);
  int busca(dados *p,int num_reg);
  int busca_vago(dados *p,int qtde);
  void grava(dados *p,char *str,int pos);
  void mostra(dados *p);


   main(){
  
  dados *pd=NULL;
  int op;
  
  aloca(&pd,1);
  
  do{
    system("cls");
    printf("\n [1]Cadastro\n [2]Altera\n [3]Deleta\n [4]Mostra\n [5]Fim\nOpcao: ");
    scanf("%i",&op);
    fflush(stdin);

    switch(op){
    case 1: 
	    cadastro(pd);
        printf("\nRegistro cadastrado com sucesso\n\n");
        system("pause");
        break;
    case 2:
    	
    case 3: 
	    altera(pd,op);
        break;
    case 4: 
	    mostra(pd);
        break;
    }
  
  }while(op!=5);
  }

  void aloca(dados **p,int tam){
 
  if((*p=(dados*)realloc(*p,tam*sizeof(dados)))==NULL)
   exit(1);
  }

  int verifica(){
  	
  long int cont=0;
  
  FILE *fptr=NULL;
  
  if((fptr=fopen("estoque.bin","rb"))==NULL)
  return cont;
  else{
  fseek(fptr, 0,2); 
  cont=ftell(fptr)/sizeof(dados); 
  fclose(fptr); 
  
  return cont;
   }
  }
  
  void cadastro(dados *p){

  int qreg,ind;
  qreg=verifica(); 
  ind=busca_vago(p,qreg);
  
  if(ind!=-1) 
  qreg=ind;
  p->reg=qreg+1;
  
  printf("\nRegistro: %i",p->reg);
  printf("\nProduto: ");
  gets(p->produto);
  fflush(stdin);
  
  printf("\nQtde estoque: ");
  scanf("%i",&(p->qtde));
  fflush(stdin);
  
  printf("\nPreco: ");
  scanf("%f",&(p->preco));
  fflush(stdin);
  
  if(ind==-1) 
  grava(p,"ab",1); 
  else
  grava(p,"rb+",qreg); 
}
  
  
  void altera(dados *p,int op){
  
  int num_reg,pos;
  mostra(p);
  
  printf("\nRegistro a ser alterado/deletado: ");
  scanf("%i",&num_reg);
  fflush(stdin);
  pos=busca(p,num_reg);
  
  if(pos==-1) 
  printf("\nRegistro inexistente\n\n");
  else{
  
  printf("\nRegistro: %i\nProduto: %s\nQtde: %i\nPreco: %.2f\n",p->reg,p->produto,p->qtde,p->preco);
  
  if(op==2){
  
  printf("\nNOVO preco: ");
  scanf("%f",&(p->preco));
  fflush(stdin);
  
  printf("\nPreco alterado com sucesso\n\n");
  }
  else{
  p->qtde=-1; 
  printf("\nRegistro deletado com sucesso\n\n");
  }
  
  grava(p,"rb+",pos);
  system("pause");
  }
  }
  
  int busca(dados *p,int num_reg){
  	
  FILE *fptr=NULL;
  int qreg,achou=-1,i;
  
  qreg=verifica();
  system("cls");
  
  if((fptr=fopen("estoque.bin","rb"))==NULL)
  printf("\nErro");
  else{
  for(i=0;i<qreg;i++){
  
  fseek(fptr,i*sizeof(dados),0);
  fread(p,sizeof(dados),1,fptr);
  
  if(p->reg==num_reg){
  achou=i;
  i=qreg; 
  
     }
    }
  fclose(fptr); 
   }
  return achou; 
  }
  
  int busca_vago(dados *p,int qtde){
  	
  FILE *fptr=NULL;
  
  int achou=-1,i;
  system("cls");
 
  if((fptr=fopen("estoque.bin","rb"))==NULL)
  return achou;
  else{
  for(i=0;i<qtde;i++){
  	
  fseek(fptr,i*sizeof(dados),0);
  fread(p,sizeof(dados),1,fptr);
  if(p->qtde==-1){
  achou=i; 
  i=qtde; 
  }
  }
  fclose(fptr); 
  return achou; 
  }
  }
  
  void grava(dados *p,char *str,int pos){
  
  FILE *fptr=NULL;
  if((fptr=fopen("estoque.bin",str))==NULL)
  printf("\nErro ao abrir o arquivo");
  
  else{
  if(strcmp(str,"rb+")==0)
  fseek(fptr,pos*sizeof(dados),0);
  fwrite(p,sizeof(dados),1,fptr);
  
  }
  fclose(fptr); 
  
  }
  
  void mostra(dados *p){
   
  int i,qreg;
  FILE *fptr=NULL;
  
  qreg=verifica(); 
  system("cls");
  
  if((fptr=fopen("estoque.bin","rb"))==NULL)
   printf("\nErro ao abrir o arquivo");
 
  else{
  for(i=0;i<qreg;i++){
  fseek(fptr,i*sizeof(dados),0);
  fread(p,sizeof(dados),1,fptr);
  printf("\nRegistro: %i\nProduto: %s\nQtde: %i\nPreco: %.2f\n\n",p->reg,p->produto,p->qtde,p->preco);
  
  }
  fclose(fptr);
  }
  system("pause");
  }
