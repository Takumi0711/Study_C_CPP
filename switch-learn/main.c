#include <stdio.h>

void main() {
	int a;

	printf("1〜3の数値を入力してください");

	scanf("%d", &a);

	switch (a) {
	case 1:
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n");
		break;
	default:
		printf("無効な数字で\n);
	}
}