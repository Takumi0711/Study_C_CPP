#include <stdio.h>

void main() {
	int a;
	printf("1�`6�̐��l�����:");

	scanf("%d", &a);

	if (a >= 1 && a <= 6) {
		if (a % 2 == 0) {
			printf("���ł�\n");
		}
		else {
			printf("���ł�\n");
		}
	}
	else {
		printf("�����Ȑ����ł�");
	}
}