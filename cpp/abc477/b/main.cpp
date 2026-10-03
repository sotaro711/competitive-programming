#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> X(N+1);
    vector<pair<int, int>> P(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> P[i].first;
        P[i].second = i;
    }

    // pairのsortは第１要素基準
    // 座標基準でソートする
    // 近傍で評価するため
    sort(P.begin() + 1, P.end());

    vector<int> ans;
    int K = 0;
    for (int i = 1; i <= N; i++) {
        // 左がある時
            // P[i - 1].first > D だったら生き残る
        // 右がある時
            // P[i + 1].first > D だったら生き残る
        //　存在しない側は無条件でok

        if (i > 1 && abs(P[i].first - P[i-1].first) < D) {
            continue;
        }

        if (i < N && abs(P[i].first - P[i+1].first) < D) {
            continue;
        }

        K++;
        ans.push_back(P[i].second);
    }

    // インデックスでソートする
    // 昇順で出力するため
    sort(ans.begin(), ans.end());

    cout << K << endl;

    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i] << ' ';
    }

    cout << endl;
    

    return 0;
}
