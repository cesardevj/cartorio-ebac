#include <stdio.h>//biblioteca de comunica��o com o usuari
#include <stdlib.h>//biblioteca de memoria de armazenamento
#include <locale.h>//biblioteca de localiza��o
#include <string.h>//biblioteca das strings

registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("digite o n�mero do CPF :");
	scanf("%s",cpf);
	
	strcpy(arquivo,cpf);
	
	FILE *file;
	file = fopen(arquivo,"w");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome do registrado(a) :");
	scanf("%s",nome);
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o sobrenome do registrado(a) :");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo do registrado(a) :");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	system("pause");
}

consulta()
{
	setlocale(LC_ALL,"portuguese");
	char cpf[40];
	char conteudo[200];
	
	printf("digite o numero do CPF a ser consultado :");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("essa op��o n�o esta disponivel");
	}
	
	while(fgets(conteudo,200,file)!=NULL)
	{
		printf("essas s�o as informa��es do sistema :");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	 system("pause");
}

deletar()
{
	char cpf[40];
	
	printf("digite o numero do CPF a ser deletado :");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("esse cpf n�o se encontra no registro !");
	}
	
	system("pause");
}

int main()
{
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	
	setlocale(LC_ALL,"portuguese");
	printf("\t###cartorio da ebac###\n");
	printf("\tescolha as op��es do menu\n\n");
	printf("\t1 - registro de nomes\n\n");
	printf("\t2 - consulta de nomes\n\n");
	printf("\t3 - deletar nomes\n\n");
	printf("op��o :");
	
	scanf("%d",&opcao);
	
	system("cls");
	
	switch (opcao)
	{
		case 1:
		registro();
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		default:
		printf("essa op��o n�o est� disponivel !\n\n");
		system("pause");
		break;	
	}
	
    }
}
