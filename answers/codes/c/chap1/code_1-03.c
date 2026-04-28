#include <stdio.h>

int main(void) {
    // 入力部分
    int a, b;
    scanf("%d %d", &a, &b);

    // 出力部分
    printf("%d\n", a & b); // a AND b の値を出力
    printf("%d\n", a | b); // a OR b の値を出力
    printf("%d\n", a ^ b); // a XOR b の値を出力
    return 0;
}
