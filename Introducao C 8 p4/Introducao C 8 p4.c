#include <stdio.h>
#include <string.h>
#include <locale.h>
#pragma warning(disable : 4996)

#define N 50

int main()
{

	setlocale(LC_ALL, "Portuguese");

	char s1[N] = { "L�gica de" };
	char s2[N] = { " Programa��o!" };

	printf("Antes do strcat:\n");
	printf("str1: %s\n", s1);
	printf("str2: %s\n", s2);

	strcat(s1, s2);

	printf("Depois do strcat:\n");
	puts(s1);

}