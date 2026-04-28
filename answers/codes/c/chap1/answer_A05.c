#include <stdio.h>

int main(void) {
    // 入力
    int N, K, Answer = 0;
    scanf("%d %d", &N, &K);

    // 全探索
    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= N; y++) {
            int z = K - x - y; // 白いカードに書かれるべき整数
            if (z >= 1 && z <= N) Answer += 1;
        }
    }

    // 出力
    printf("%d\n", Answer);
    return 0;
}
