#include <stdio.h>

void main() {
    int i1, i2, j1, j2;
    double d1, d2, e1, e2;
    //  j1,j2�ɒl����
    j1 = 3;
    j2 = 3;
    //  d1,d2�ɒl�����B
    d1 = 1.23;
    d2 = 1.23;
    //  i1,i2��d1,d2�̒l����
    i1 = d1;            //  ���ʂɑ��
    i2 = (int)d2;       //  �L���X�g���đ��
    //  e1,e2��j1,j2�̒l����
    e1 = j1;            //  ���ʂɑ��
    e2 = (double)j2;    //  �L���X�g���đ��
    printf("d1 = %f d2 = %f\n", d1, d2);
    printf("i1 = %d i2 = %d\n", i1, i2);
    printf("j1 = %d j2 = %d\n", j1, j2);
    printf("e1 = %f e2 = %f\n", e1, e2);
}