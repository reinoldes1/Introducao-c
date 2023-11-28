#include <stdio.h>
#include <string.h>
#include <locale.h>
#pragma warning(disable : 4996)

#define N 50

int main()
{

	setlocale(LC_ALL, "Portuguese");

	char hardText[N] = { "/exit" };
	char senha_usr[N];
	int ok;
	
	printf("Digite seu nome: \n");
	gets(senha_usr);

	ok = strcmp(hardText, senha_usr);

	if (ok == 0) 
	{
		printf("Texto iguais. \n");
	}

	else 
	{
		printf("Textos diferentes. \n");
	}

}