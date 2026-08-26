#include <bits/stdc++.h>
using namespace std;

int main() {
    int D, N;
    cin >> D;
    cin >> N;

    vector<int> L(N+1), R(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> L[i] >> R[i];
    }

    // 二次元配列。。？
    // 前日比の配列を使って累積輪で計算

    vector<int> raito(D+2);

    for (int i = 1; i <= N; i++) {
        raito[L[i]]++;
        raito[R[i]+1]--;
    }

    // for (int i = 1; i <= D; i++) {
    //     cout << raito[i] << endl;
    // }

    raito[0] = 0;
    int ans = 0;
    for (int i = 1; i <= D; i++) {
        ans += raito[i];
        cout << ans << endl;
    }

    return 0;
}
