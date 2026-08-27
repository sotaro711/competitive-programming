#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> X(H+1, vector<int>(W+1, 0));
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> X[i][j];
        }
    }

    int Q;
    cin >> Q;

    vector<int> A(Q+1), B(Q+1), C(Q+1), D(Q+1);
    for (int i = 1; i <= Q; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    // 直接。。？
    // for (int i = 1; i <= Q; i++) {
    //     int sum = 0;
    //     for (int j = A[i]; j <= C[i]; j++) {
    //         for (int k = B[i]; k <= D[i]; k++) {
    //             sum += X[j][k];
    //         }
    //     }
    //     cout << sum << endl;
    // }
    // 計算量はO(HWQ)

    // これだと時間が足りない
    // 効率的にやるべき
    // 行の累積和を求めたあと、列の累積和を求める
    // その箇所の累積和から不要なところを引く

    // 行列の累積和を作る
    // 行の累積和
    for (int i = 1; i <= H; i++) {
        for (int j = 1;  j <= W; j++) {
            X[i][j] += X[i][j-1];
        }
    }

    // 列の累積和
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            X[i][j] += X[i-1][j];
        }
    }

    // 累積和から計算
    for (int i = 1; i <= Q; i++) {
        int ans = X[C[i]][D[i]] + X[A[i] - 1][B[i] - 1] - X[A[i] - 1][D[i]] - X[C[i]][B[i] - 1];
        cout << ans << endl;
    }

    // 計算量はO(HW)
    // 全体ではO(HW + Q)

    return 0;
}
