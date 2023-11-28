#include <stdio.h>
#pragma warning(disable : 4996).

int main() {

	int v[5];
	int i;
	float s = 0;


	for (i = 0; i < 5; i++) 
	{
		printf("Insira um dado: \n");
		scanf("%d", &v[i]);
	}

	printf("Dador inseridos:\n");

	for (i = 0; i < 5; i++) 
	{
		printf("%d \n", v[i]);
		s += v[i];
	}

	printf("Resultado da media: %f\n", s / 5);

}