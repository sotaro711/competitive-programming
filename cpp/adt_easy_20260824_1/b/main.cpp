#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> T(N+1), V(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> T[i] >> V[i];
    }
    int mx = *max_element(T.begin(), T.end());

    vector<int> add(mx + 1, 0);
    for (int i = 1; i <= N; i++) {
        add[T[i]] = V[i];
    }

    int sum = 0;
    // 時刻iで比較するのはズレている
    // 何秒に水追加するイベントかどうかを配列で保存しておく
    // 初期値は0なのであとはそれらを足していくだけ
    // 水の量はマイナスにならないのでmax(0, sum-1)で評価
    // intは整数型なので-1, -2になってしまう
    for (int t = 1; t <= mx; t++) {
        sum = max(0, sum - 1);
        sum += add[t];
    }

    cout << sum << endl;

    return 0;
}
