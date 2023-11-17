#include <stdio.h>
#pragma warning(disable : 4996).

int main() {

	float m;

	printf("Insira a nota: \n");
	scanf("%f", &m);

	if (m >= 6.0) {
		printf("Aprovado!\n");
	}
	else {
		printf("Reprovado!\n");
	}

	if (m >= 4.0 && m < 6.0) {
		printf("Tem direito a exame!\n");
	}
	else if (m <= 4.0) {
		printf("Nao tem direito a exame\n");
	}
	else {
		printf("Voce passou!\n");
	}
}