#include <stdio.h>
#include <stdbool.h>

int N, X, A[109];
bool Answer = false;

int main(void) {
    // 入力
    scanf("%d %d", &N, &X);
    for (int i = 1; i <= N; i++) scanf("%d", &A[i]);

    // 全探索（変数 Answer は「既に x が見つかったかどうか」を表す）
    for (int i = 1; i <= N; i++) {
        if (A[i] == X) Answer = true;
    }

    // 出力
    if (Answer == true) printf("Yes\n");
    else printf("No\n");
    return 0;
}
