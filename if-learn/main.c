#include <stdio.h>

void main() {
	int a;
	printf("1〜6の数値を入力:");

	scanf("%d", &a);

	if (a >= 1 && a <= 6) {
		if (a % 2 == 0) {
			printf("丁です\n");
		}
		else {
			printf("半です\n");
		}
	}
	else {
		printf("無効な数字です");
	}
}