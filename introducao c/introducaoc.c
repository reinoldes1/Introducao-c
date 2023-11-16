#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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

	printf("\a\nValor inicial da idade: %d.\n", age);

	printf("Digite uma idade:\n");
	scanf_s("%d", &age);

	printf("Idade Informada: %d. \n", age);

}