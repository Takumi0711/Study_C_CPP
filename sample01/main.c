#include <stdio.h>

void main() {
	printf("HelloWorld.\n");
	printf("ABC");
	printf("���{��\n");

	printf("%d + %d = %d\n", 5, 2, 5 + 2);               /* �����Z */
	printf("%d - %d = %d\n", 5, 2, 5 - 2);               /* �����Z */
	printf("%d * %d = %d\n", 5, 2, 5 * 2);               /* �|���Z */
	printf("%d / %d = %d �]�� %d \n", 5, 2, 5 / 2, 5 % 2); /* ����Z */

    /* �g�p����ϐ��̒�` */
    int a;  // �ϐ��̐錾
    int b = 3;      //  �������Ƒ���𓯎��ɍs���B
    int add, sub;    //  �����̕ϐ��𓯎��ɐ錾
    double avg;     //  int�ȊO�̕ϐ���錾
    a = 6;  //  ����i�ŏ��ɒl������̂ŁA�h�������h�ƌ����B
    add = a + b;            //  a,b�̘a�����߂�B
    sub = a - b;            //  a,b�̍������߂�B
    avg = (a + b) / 2.0;    //  a,b�̕��ϒl�����߂�B
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d��%d�̕��ϒl�F%f\n", a, b, avg);
}