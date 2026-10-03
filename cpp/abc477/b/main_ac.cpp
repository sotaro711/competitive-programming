#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> X(N+1);
    pair<int, int> P(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> X[i];
        P(X[i], i);
    }

    // 数直線なので、両隣だけを見ればおk
    // 最近傍は両隣のどちらか

    int K = 0;
    vector<int> ans(N+1);
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            if (abs(X[i] - X[i+1]) < D) {
                continue;
            } else {
                K++;
                ans[i] = X[i];
                continue;
            }
        }

        if (i == N) {
            if (abs(X[i] - X[i-1]) < D) {
                continue;
            } else {
                K++;
                ans[i] = X[i];
                continue;
            }
        }

        if (abs(X[i] - X[i-1]) < D || abs(X[i] - X[i+1]) < D) {
            continue;
        } else {
            K++;
            ans[i] = X[i];
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << ans[i] << ' ';
    }

    return 0;
}
