#include<stdio.h>
#include<string.h>

int main () {
    int N, A[100009];
    char T[100009][3]; 
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        // 配列はすでにポインタなので、ポインタのポインタになってしまう
        // A[i]は、単一の値なので（int型（値））ポインタではない
        scanf("%s %d", T[i], &A[i]);
    }

    int B = 0;
    long long ans = 0;
    for (int i = 1; i <= N; i++) {
        if (strcmp(T[i], "+") == 0) {
            B = (B + A[i]) % 10000;
        } else if (strcmp(T[i], "-") == 0) {
            B = (B - A[i] + 10000) % 10000;
        } else if (strcmp(T[i], "*") == 0) {
            B = (B * A[i]) % 10000;
        }
        printf("%d\n", B);
    }
}

// strcmp: 文字列を比較する関数
// string(a, b)
// 戻り値0 : 同じ
// 0以外：異なる

// ansがオーバーフローを起こす
// 足し算、引き算、掛け算では好きなタイミングであまりをとっても計算結果は変わらない
// => 捜査が行われるたびにあまりを取る
// 