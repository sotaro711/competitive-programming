#include<stdio.h>

// void f(int x) {
//     x = 100; // コピーを変えただけ
// }

// scanfは読み取ったものを書き込んでる

// int main() {
//     int a = 5;
//     f(a);
//     print("%d", a); //　5のまま！
// }

// アドレスを渡すと書き込める

// P, Qから一枚ずつ選んで合計がKになる方法は存在するのか
// あったらYes, なければNo

int main() {
    // 初期値は不定値（メモリに残ってたゴミが出力される）
    int N, K;
    int P[100], Q[100];
    // scanf()は標準ライブラリで、scanf()の中ではコピーされた値が処理され、main関数の中では何も変化が起きない
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++) {
        scanf("%d", &P[i]);
    }
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &Q[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (P[i] + Q[j] == K) {
                printf("Yes\n");
                return 0;
            };
        };
    };
    printf("No\n");
    return 0;
}