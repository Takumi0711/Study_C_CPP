#include <stdio.h>

void main() {
	int a;
	printf("1`6‚Ì”’l‚ð“ü—Í:");

	scanf("%d", &a);

	if (a >= 1 && a <= 6) {
		if (a % 2 == 0) {
			printf("’š‚Å‚·\n");
		}
		else {
			printf("”¼‚Å‚·\n");
		}
	}
	else {
		printf("–³Œø‚È”Žš‚Å‚·");
	}
}