#include <stdio.h>
#include <windows.h>
#pragma warning(disable : 4996).

int main() {

	int A, B, soma, subtr, mult, divis;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &A);
	printf("Digite o segundo numero: \n");
	scanf("%d", &B);

	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;

	printf("Resultados: \n");
	printf("soma: %d. \n", soma);
	printf("subtracao: %d. \n", subtr);
	printf("multiplicacao: %d. \n", mult);
	printf("divisao: %d. \n", divis);

	int dado = 10;
	printf("Dado antes do incremento: %d. \n", dado);

	dado++;
	printf("Depois do incremento: %d. \n", dado);

	dado--;
	printf("Depois do decremento: %d. \n", dado);

	dado+=3;
	printf("Depois do incremento em 3 unidades: %d. \n", dado);

	dado-=2;
	printf("Depois do decremento em 2 unidades: %d. \n", dado);

	dado *= 10;
	printf("Depois do multiplicar por 10: %d. \n", dado);

}