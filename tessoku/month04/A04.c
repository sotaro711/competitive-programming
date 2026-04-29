#include <stdio.h>
int main() {
    // 10進数を2進数に変えるプログラム
    int N;
    scanf("%d", &N);

    // 2で割ったあまりを付け加えていく
    int a, b, q, r, arr[32];
    a = N;
    b = 2;
    int len = 0;

    while (a > 0) {
        q = a / b;
        r = a % b;
        arr[len] = r;
        len++;
        a = q;
    }

    for (int i = 0; i < 10 - len; i++) {
        printf("%d", 0);
    }

    for (int i = len - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
}
