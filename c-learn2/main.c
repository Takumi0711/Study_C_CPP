#include <stdio.h>

void main() {
	/*int i;
	for (i = 1; i <= 5; i++) {
		printf("%d ",i);
	}
	printf("\n");

	int j, k;

	for (j = 1; j <= 2; j++) {
		for (k = 1; k <= 3; k++) {
			printf("%d+%d=%d ", j, k, j + k);
		}
		printf("\n");
	}*/

	int i = 0;
	while (i <= 5) {
		printf("%d\n", i);
		i++;
	}

	int j = 10;
	do{
		printf("%d\n", j);
		j++;
	} while (j <= 5);
	printf("\n");
}