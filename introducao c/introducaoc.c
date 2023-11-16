#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma warning(disable : 4996).

#define text "Entrada e saida de dados"

int main(int argc, char *argv[]) {

	printf("\aMensagem 1\n");
	printf("Mensagem 2\t");
	printf("Mensagem 3\n");
	printf("Mensagem 4\n");
	
	Sleep(1500);

	printf("\a\nValor inteiro: %d. \n", 10);
	printf("Valor real: %f. \n", 3.14158265);
	printf("Valor real com 2 casas: %.2f \n", 3.14158265);
	printf("Dado de texto: %c. \n", 'a');
	printf("Dado de texto: %s. \n", "testando");

	Sleep(1500);

	int age = 0;
	int year = 1950;
	float peso = 0.0;

	printf("\a\nDigite uma idade e um ano: %d.\n", age);

	printf("Digite uma idade:\n");
	scanf_s("%d %d", &age, &year);

	printf("\a\nDigite um peso: \n");
	scanf_s("%f", &peso);

	printf("Idade Informada: %d. \n", age);
	printf("Ano informado: %d. \n", year);
	printf("Peso informado: %f.\n", peso);

	Sleep(1500);

	printf("%s\n", text);

	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";

	printf("\aDigite a sua idade: \n");
	scanf_s("%d", &idade);

	printf("Digite a sua altura: \n");
	scanf_s("%f", &altura);

	printf("Digite o seu nome: \n");
	scanf("%s", &nome);

	printf("Dados informados:\n");
	printf("Idade: %d. \n", idade);
	printf("Altura: %.2f.\n", altura);
	printf("Nome: %s.\n", nome);

}