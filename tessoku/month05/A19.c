#include<stdio.h>

// intは2.1 * 10^9 までしか抑えられないので、10^9が出てきたらlong long でいいかも
long long N, W, w[109], v[109], dp[109][100009];

int main () {
    scanf("%lld %lld", &N, &W);
    for (int i = 1; i <= N; i++) {
        scanf("%lld %lld", &w[i], &v[i]);
    }

    dp[0][0] = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= W; j++){
            if (j >= w[i]) {
                if (dp[i-1][j] >= dp[i-1][j-w[i]] + v[i]) {
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = dp[i-1][j-w[i]] + v[i];
                }
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    printf("%lld", dp[N][W]);
}