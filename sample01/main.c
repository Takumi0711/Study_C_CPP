#include <stdio.h>

void main() {
	printf("HelloWorld.\n");
	printf("ABC");
	printf("日本語\n");

	printf("%d + %d = %d\n", 5, 2, 5 + 2);               /* 足し算 */
	printf("%d - %d = %d\n", 5, 2, 5 - 2);               /* 引き算 */
	printf("%d * %d = %d\n", 5, 2, 5 * 2);               /* 掛け算 */
	printf("%d / %d = %d 余り %d \n", 5, 2, 5 / 2, 5 % 2); /* 割り算 */

    /* 使用する変数の定義 */
    int a;  // 変数の宣言
    int b = 3;      //  初期化と代入を同時に行う。
    int add, sub;    //  複数の変数を同時に宣言
    double avg;     //  int以外の変数を宣言
    a = 6;  //  代入（最初に値を入れるので、”初期化”と言う。
    add = a + b;            //  a,bの和を求める。
    sub = a - b;            //  a,bの差を求める。
    avg = (a + b) / 2.0;    //  a,bの平均値を求める。
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%dと%dの平均値：%f\n", a, b, avg);
}