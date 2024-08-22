#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
struct livros{
	int cod, ano;
	char titulo[50], autor[50], area[50], editora[50];
};

int main(){
	setlocale(LC_ALL,"");
	struct livros liv[20];
	int i, menu,l,j;
	menu=0;
	while(menu !=5){
	system("cls");
	printf("-- Biblioteca SHIUU! --\n - Escolha uma opção - \n\n");
	printf("1 - Cadastrar Livro.\n2 - Livros Cadastrados.\n3 - ..Pesquisar Livro por Codigo.\n4 - Ordenar Livros por ano.\n5 - Sair.\n");
	fflush(stdin);
	scanf("%d", &menu);
	i=0;
	switch(menu){
		case 1:
		system("cls");
		if(l!=0){
			printf(" - Menu de Cadastro - \n\n");
			printf("Quantos livros deseja cadastrar:\n");
			printf("Digite 0 para voltar ao menu:\n");
			scanf("%d", &l);
			for(i=0;i<l;i++){
				system("cls");
				printf("Digite o codigo do Livro %d:\n",i+1);
				scanf("%d", &liv[i].cod);
				system("cls");
				printf("Digite o Nome do, Livro %d:\n", i+1);
				fflush(stdin);
				gets(liv[i].titulo);
				system("cls");
				printf("Digite o Nome do autor, Livro %d:\n", i+1);
				fflush(stdin);
				gets(liv[i].autor);
				system("cls");
				printf("Digite a Area relacionada ao Livro %d\n", i+1);
				fflush(stdin);
				gets(liv[i].area);
				system("cls");
				printf("Digite o Ano do Livro %d\n", i+1);
				fflush(stdin);
				scanf("%d", &liv[i].ano);
			}
		}
		break;
		
		case 2:
		system("cls");
		i=0;
		    printf(" - Livros cadastrados - \n");	
		    for(i=0;i<l;i++){
			    printf("Livro %d\n", i+1);
				printf("%d - %s - %s - %s - %d\n", liv[i].cod,liv[i].titulo, liv[i].autor,liv[i].area,liv[i].ano);
			}
			system("pause");	
		break;
		
		case 3:
		system("cls");
		int pesq =0, verd =1;
		i=0;
			printf(" - Pesquisa de Livros por codigo - \n\n");
			printf("Digite o codigo do Livro.\n");
			fflush(stdin);
			scanf("%d", &pesq);
			while(verd==1){
				for(i=0;i<l;i++){
				 if(pesq==liv[i].cod){
				 	printf("Livro %d\n",i+1);
				 	printf("%d - %s - %s - %s - %d\n", liv[i].cod,liv[i].titulo, liv[i].autor,liv[i].area,liv[i].ano);
				 verd=0;
				
				 }else{
				 	printf("livro não encontrado.\n");
				 verd=0;
				 }
	            } 
	        }
	        system("pause");
		    break;
		case 4:
			system("cls");
		int a=0 ,c2=0 ;
		while(c2!=3){
		printf("- Escolha uma Opção -\n\n");
		printf("1 - Organizar por ano\n2 - Exibir lista de livros\n3 - sair\n");		       
	    fflush(stdin);
		scanf("%d\n", &c2);
		if(c2!=3){	
	    switch(c2){
			case 1:
	    		system("cls");
				for(i=0;i<l;i++){
	    			for(j=0;j<l-1;j++){
	    			if(liv[i].ano>liv[j].ano){
	    				struct livros a;
						a=liv[j];
	    				liv[j]=liv[j-1];
	    				liv[j-1]=a;
	    	break;
					}
			    }
				}
		    case 2:
		        system("cls");
				i=0;
	    		for(i=0;i<l;i++){
				printf("%d - %d\n", liv[i].cod,liv[i].ano);
			break;
				}	
	    }	
		}
		}
		}
}
}
