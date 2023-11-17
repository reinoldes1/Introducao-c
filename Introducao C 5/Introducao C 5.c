#include <stdio.h>
#pragma warning(disable : 4996).

int main() {

	int i = 1;

	do {
		printf("%d\n", i);
		i++;
	} while (i <= 10);

	while (i <= 50) {
		printf("%d ", i);
		i++;
	}
}