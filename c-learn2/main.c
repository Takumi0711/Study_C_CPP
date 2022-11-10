#include <stdio.h>

void main() {
	int i;
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
	}
}