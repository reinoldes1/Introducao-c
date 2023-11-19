#include <stdio.h>

int main() {

	int i;

	for (i = 1; i <= 15; i++) {
		
		if (i == 5) {
			printf("Chegamos no '%d' ", i);
			continue;
		}

		printf("%d ", i);

		if (i == 7) {
			break;
		}
	}

}