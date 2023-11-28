#include <stdio.h>

int main() 
{

	char s[10];

	printf("Digite seu nome: \n");
	gets(s);
	fflush(stdin);

	puts("Resultado: ");
	puts(s);
	puts("");

	printf("Digite seu nome: \n");
	fgets(s, 10, stdin);
	fflush(stdin);

	puts("Resultado: ");
	puts(s);

}