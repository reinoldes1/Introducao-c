#include <stdio.h>
#include <string.h>
#include <locale.h>
#pragma warning(disable : 4996)

#define TAM 50

struct tipo_pessoa 
{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() 
{

	setlocale(LC_ALL, "Portuguese");

	//Creating and initializing
	tipo_pessoa pes = { 0, 0.0, "Teste" };
	
	printf("Início: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);

	//Getting values
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Texto");

	printf("\nAlterando os campos por código: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);

	//Getting values with user
	printf("\nInsira sua idade: \n");
	scanf("%d", &pes.idade);
	
	printf("\nInsira seu peso: \n");
	scanf("%f", &pes.peso);
	
	fflush(stdin);

	printf("\nInsira seu nome: \n");
	scanf("%s", &pes.nome);

	printf("\nAlterando com dados do usuário: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);

}