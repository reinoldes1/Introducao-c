#include <stdio.h>

int main()
{
	
	char s[10];

	printf("Escreva seu nome: \n");
	scanf("%s", s);
	fflush(stdin);

	printf("Resultado: %s\n\n", s);

	printf("Digite seu nome novamente: \n");
	scanf("%9[^\n]s", s);
	fflush(stdin);

	printf("Resultado: %s\n\n", s);

}