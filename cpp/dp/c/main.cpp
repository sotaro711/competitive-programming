#include <bits/stdc++.h>
using namespace std;

int N, b[100009], c[100009];
long long dp[100009][3], a[100009][3];
int main() {
    // N日目の中で大きいものを足していけばいいが、連続で同じ活動は選ばない
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    // 配列dpを使って最高幸福度を求める
    // dp[i][j]でi日目に活動j(0=A, 1=B, 2=C)をやった時のi日目までの最大幸福度を保存

    dp[1][0] = a[1];
    dp[1][1] = b[1];
    dp[1][2] = c[1];

    for (int i = 2; i <= N; i++) {
        // 二日連続で同じ活動を取れない
        for (int j = 0; j <= 2; j++) {
            for (int k = 0; k <= 2; k++) {
                if (j == k) continue;
                dp[i][j] = max(dp[i][j], dp[i-1][j] + a[i][k]);
            }
            
        }
    }

    long long res = 0;
    for (int i = 0; i < 3; i++) {
        max(res, dp[N][i]);
        cout << res << endl;
    }
    
    return 0;
}
