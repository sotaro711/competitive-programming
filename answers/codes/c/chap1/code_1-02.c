#include <stdio.h>

int main(void) {
    // 入力
    int N, K, Answer = 0;
    scanf("%d %d", &N, &K);

    // 全探索
    for (int x = 1; x <= N; x++) {
        for (int y = 1; y <= N; y++) {
            for (int z = 1; z <= N; z++) {
                if (x + y + z == K) Answer += 1;
            }
        }
    }

    // 出力
    printf("%d\n", Answer);
    return 0;
}
