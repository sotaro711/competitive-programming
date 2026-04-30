#include<stdio.h>

int main() {
    int N, K;
    int k = 0;
    int Ans = 0;

    scanf("%d", &N);
    scanf("%d", &K);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int k = K - i - j;
            if (1 <= k && k <= N) {
                Ans++;
            }
        }
    }

    printf("%d", Ans);
    return 0;
}